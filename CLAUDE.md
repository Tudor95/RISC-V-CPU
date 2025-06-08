# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a 5-stage pipelined RISC-V CPU implementation in Verilog HDL supporting the RV32I instruction subset. The CPU includes:
- 5-stage pipeline (IF, ID, EX, MEM, WB) with data forwarding
- N-way set associative I-cache and D-cache
- UART communication module for FPGA testing with memory simulator
- Support for 41 RISC-V instructions (see doc/inst-supported.md)

## Architecture

### Core Pipeline Structure
- **IF Stage** (`stage_if.v`): Instruction fetch with PC management
- **ID Stage** (`stage_id.v`): Instruction decode and register file access
- **EX Stage** (`stage_ex.v`): ALU operations and forwarding logic
- **MEM Stage** (`stage_mem.v`): Memory access with cache interface
- **WB Stage**: Write-back to register file

### Key Components
- **CPU Core** (`riscv_cpu.v`): Main CPU with cache interfaces
- **Cache** (`cache.v`): N-way set associative cache for both instruction and data
- **Register File** (`regfile.v`): 32-register RISC-V register file
- **Control Unit** (`ctrl.v`): Pipeline control and hazard detection
- **Pipeline Registers**: `reg_if_id.v`, `reg_id_ex.v`, `reg_ex_mem.v`, `reg_mem_wb.v`
- **Memory Controller** (`mem_ctrl.v`): Interface between CPU and memory
- **UART Module** (`uart_trans.v`): Communication with external memory simulator

### Top-Level Modules
- **FPGA Top** (`cpu.v`): Top-level for FPGA deployment with UART
- **CPU Core** (`riscv_cpu.v`): Core CPU module with memory interface

## Build Commands

### Verilator Build (Simulation)
```bash
./build_riscv_cpu.sh
```
This script:
- Uses Verilator to compile the CPU with testbench `tb_riscv_cpu.sv`
- Creates executable at `build/obj_dir/Vtb_riscv_cpu`
- Enables VCD tracing for waveform analysis

### RISC-V Assembly Compilation
```bash
cd test/
make test.data    # Compile test.S to test.data format
```
Requires RISC-V toolchain at `/opt/riscv/bin/`

### Run Simulation
```bash
cd build/
./obj_dir/Vtb_riscv_cpu
gtkwave cpu_sim.vcd  # View waveforms
```

## Key Files

### Source Structure
- `src/cpu/`: Core CPU Verilog modules
- `src/memory/`: Memory simulator C++ code for UART testing
- `test/`: Assembly test programs and compilation tools
- `doc/`: Documentation including project report and instruction reference

### Important Definitions
- `defines.v`: All RISC-V instruction opcodes, funct3/funct7 codes, and hardware parameters
- `tb_riscv_cpu.sv`: Verilator testbench (currently configured for DPI integration)

### Test Programs
Test programs are written in RISC-V assembly (`.S` files) and compiled to `.data` format using the provided Makefile. The CPU can load these programs for simulation.

## Memory Interface

The CPU uses a dual-port memory interface:
- Port 0: Instruction cache
- Port 1: Data cache
- Memory simulator (`src/memory/`) provides external memory via UART for FPGA testing

## Instruction Support

Supports 41 RISC-V RV32I instructions including:
- Arithmetic: ADD, SUB, ADDI, SLT, SLTU, etc.
- Logic: AND, OR, XOR, shifts
- Control flow: JAL, JALR, all branch types
- Memory: LB/LH/LW, SB/SH/SW with unsigned variants
- Upper immediates: LUI, AUIPC