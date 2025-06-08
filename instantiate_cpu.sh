#!/bin/bash
# instantiate_cpu.sh - Generate proper CPU instantiation for testbench

SRC_DIR="src/cpu"
TESTBENCH="tb_riscv_cpu.sv"

echo "=== CPU Module Instantiation Generator ==="

# Function to extract module definition
extract_module() {
    local file="$1"
    local module_name="$2"
    
    echo "Extracting module '$module_name' from $file"
    
    # Extract module definition with all ports
    awk "/^module[[:space:]]+$module_name/,/^);/" "$file" > temp_module.txt
    
    if [ -s temp_module.txt ]; then
        echo "Module definition found:"
        cat temp_module.txt
        echo ""
        
        # Generate instantiation
        echo "Generated instantiation:"
        echo "$module_name dut ("
        
        # Parse ports and generate connections
        grep -E "(input|output|inout)" temp_module.txt | \
        sed 's/[,;]//g' | \
        while read line; do
            # Extract port info
            direction=$(echo "$line" | awk '{print $1}')
            rest=$(echo "$line" | awk '{$1=""; print $0}' | sed 's/^[[:space:]]*//')
            
            # Get signal name (last word)
            signal_name=$(echo "$rest" | awk '{print $NF}')
            
            # Generate connection based on signal name patterns
            case "$signal_name" in
                clk|clock)
                    echo "    .$signal_name(clk),"
                    ;;
                rst|reset)
                    echo "    .$signal_name(~rst_n),"
                    ;;
                rst_n|reset_n)
                    echo "    .$signal_name(rst_n),"
                    ;;
                *inst*addr*|pc|*pc*)
                    echo "    .$signal_name(cpu_inst_addr),"
                    ;;
                *inst*data*)
                    if [ "$direction" = "input" ]; then
                        echo "    .$signal_name(cpu_inst_data),"
                    else
                        echo "    .$signal_name(cpu_inst_data),"
                    fi
                    ;;
                *data*addr*)
                    echo "    .$signal_name(cpu_data_addr),"
                    ;;
                *data*o*|*wdata*|*write_data*)
                    echo "    .$signal_name(cpu_data_wdata),"
                    ;;
                *data*i*|*rdata*|*read_data*)
                    echo "    .$signal_name(cpu_data_rdata),"
                    ;;
                *we*|*write_enable*)
                    echo "    .$signal_name(cpu_data_we),"
                    ;;
                *req*|*enable*|*valid*)
                    echo "    .$signal_name(cpu_data_req),"
                    ;;
                *)
                    echo "    .$signal_name(/* TODO: connect $signal_name */),"
                    ;;
            esac
        done | sed '$s/,$//'  # Remove last comma
        
        echo ");"
        echo ""
    else
        echo "Module definition not found or empty"
    fi
    
    rm -f temp_module.txt
}

# Find all potential CPU modules
echo "Searching for CPU modules..."
find $SRC_DIR -name "*.v" -exec grep -l "^module" {} \; | while read file; do
    modules=$(grep "^module" "$file" | awk '{print $2}' | sed 's/(.*//')
    for module in $modules; do
        case "$module" in
            *cpu*|*riscv*|*processor*|*core*)
                echo "Found potential CPU module: $module in $file"
                extract_module "$file" "$module"
                echo "----------------------------------------"
                ;;
        esac
    done
done

echo ""
echo "=== Instructions ==="
echo "1. Choose the appropriate CPU module from above"
echo "2. Copy the generated instantiation"
echo "3. Replace the placeholder section in $TESTBENCH"
echo "4. Remove the temporary signal assignments"
echo "5. Build again with the debug script"