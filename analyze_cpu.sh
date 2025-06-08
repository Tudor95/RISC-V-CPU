#!/bin/bash
# analyze_cpu.sh - Analyze CPU module and generate testbench instantiation

# Colors
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m'

if [ $# -eq 0 ]; then
    echo "Usage: $0 <cpu_module_name>"
    echo "Example: $0 cpu"
    exit 1
fi

MODULE_NAME="$1"
SRC_DIR="src/cpu"

echo -e "${GREEN}Analyzing CPU module: $MODULE_NAME${NC}"

# Find the module file
MODULE_FILE=""
for file in $(find $SRC_DIR -name "*.v"); do
    if grep -q "^module\s\+$MODULE_NAME\s*(" "$file"; then
        MODULE_FILE="$file"
        break
    fi
done

if [ -z "$MODULE_FILE" ]; then
    echo -e "${RED}Module $MODULE_NAME not found in $SRC_DIR${NC}"
    exit 1
fi

echo "Found module in: $MODULE_FILE"
echo ""

# Extract module definition
echo -e "${YELLOW}Module Definition:${NC}"
sed -n "/^module\s\+$MODULE_NAME/,/^);/p" "$MODULE_FILE"
echo ""

# Extract port list
echo -e "${YELLOW}Port Analysis:${NC}"
sed -n "/^module\s\+$MODULE_NAME/,/^);/p" "$MODULE_FILE" | \
grep -E "(input|output|inout)" | \
while read line; do
    # Parse port direction and name
    if [[ $line =~ (input|output|inout)[[:space:]]+(.*)$ ]]; then
        direction="${BASH_REMATCH[1]}"
        rest="${BASH_REMATCH[2]}"
        
        # Extract signal name (last token before comma or end)
        signal_name=$(echo "$rest" | sed 's/.*[[:space:]]\([a-zA-Z_][a-zA-Z0-9_]*\)[[:space:]]*[,)].*$/\1/')
        
        printf "%-8s %s\n" "$direction:" "$signal_name"
    fi
done
echo ""

# Generate testbench instantiation
echo -e "${BLUE}Suggested Testbench Instantiation:${NC}"
echo "// Replace the placeholder in tb_riscv_cpu.sv with this:"
echo "$MODULE_NAME dut ("

# Extract and format ports for instantiation
sed -n "/^module\s\+$MODULE_NAME/,/^);/p" "$MODULE_FILE" | \
grep -E "(input|output|inout)" | \
sed 's/,$//; s/^[[:space:]]*//' | \
while read line; do
    if [[ $line =~ (input|output|inout)[[:space:]]+(.*)$ ]]; then
        direction="${BASH_REMATCH[1]}"
        rest="${BASH_REMATCH[2]}"
        
        # Extract signal name
        signal_name=$(echo "$rest" | sed 's/.*[[:space:]]\([a-zA-Z_][a-zA-Z0-9_]*\)[[:space:]]*$/\1/')
        
        # Suggest connection based on common patterns
        case "$signal_name" in
            clk|clock)
                echo "    .${signal_name}(clk),"
                ;;
            rst|reset|rst_n|reset_n)
                if [[ $signal_name =~ _n$ ]]; then
                    echo "    .${signal_name}(rst_n),"
                else
                    echo "    .${signal_name}(~rst_n),"
                fi
                ;;
            *addr*)
                if [[ $direction == "output" ]]; then
                    echo "    .${signal_name}(${signal_name}),"
                else
                    echo "    .${signal_name}(32'h0), // TODO: connect properly"
                fi
                ;;
            *data*)
                echo "    .${signal_name}(${signal_name}),"
                ;;
            *we*|*write*)
                echo "    .${signal_name}(${signal_name}),"
                ;;
            *req*|*enable*)
                echo "    .${signal_name}(${signal_name}),"
                ;;
            *)
                echo "    .${signal_name}(${signal_name}), // TODO: define signal"
                ;;
        esac
    fi
done | sed '$s/,$//' # Remove last comma

echo ");"
echo ""

# Check for common interface patterns
echo -e "${YELLOW}Interface Pattern Analysis:${NC}"

# Look for instruction memory interface
if grep -q "inst.*addr\|pc" "$MODULE_FILE"; then
    echo "✓ Likely has instruction memory interface"
fi

# Look for data memory interface  
if grep -q "data.*addr\|mem.*addr" "$MODULE_FILE"; then
    echo "✓ Likely has data memory interface"
fi

# Look for UART interface
if grep -q "uart\|tx\|rx" "$MODULE_FILE"; then
    echo "✓ Has UART interface (may need special handling)"
fi

# Look for cache interface
if grep -q "cache" "$MODULE_FILE"; then
    echo "✓ Has cache interface"
fi

echo ""
echo -e "${GREEN}Next steps:${NC}"
echo "1. Copy the suggested instantiation into tb_riscv_cpu.sv"
echo "2. Define any missing signals in the testbench"
echo "3. Connect memory interfaces appropriately"
echo "4. Run the build script again"