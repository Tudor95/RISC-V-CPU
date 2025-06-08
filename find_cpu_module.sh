#!/bin/bash
# find_cpu_module.sh - Quickly find and analyze the main CPU module

SRC_DIR="src/cpu"

echo "=== CPU Module Discovery ==="

# Find all modules
echo "All modules found:"
find $SRC_DIR -name "*.v" -exec grep -l "^module" {} \; | while read file; do
    echo "File: $file"
    grep "^module" "$file" | head -3
    echo ""
done

echo "=== Looking for main CPU modules ==="

# Look for likely main CPU modules
find $SRC_DIR -name "*.v" -exec grep -l "^module.*\(cpu\|riscv\|processor\|core\)" {} \; | while read file; do
    echo "=== POTENTIAL MAIN MODULE in $file ==="
    # Extract the full module definition including ports
    awk '/^module.*\(cpu\|riscv\|processor\|core\)/,/^);/' "$file"
    echo ""
done

echo "=== Module Statistics ==="
find $SRC_DIR -name "*.v" -exec grep "^module" {} \; | awk '{print $2}' | sort | uniq -c | sort -nr