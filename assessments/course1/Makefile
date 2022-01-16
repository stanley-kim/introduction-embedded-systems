#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      %.i --> generates i file, which is the intermediate file outputted from preprocessor from the corresponding C file
#      %.asm --> generates asm file, which is the assembly file from the corresponding C file
#      %.o --> generates o file, which is the corresponding object file
#      compile-all --> compiles all the src files without linking and generates o files, the object files
#      build --> Compile all object files and link into a final executable into one executable file (c1m2.out). it also shows the output code size. 
#      clean --> removes all the generated files ( .i, .o, .d, .map, .s, .out )
#
# Platform Overrides:
#      MSP432 and HOST
#
#------------------------------------------------------------------------------
include sources.mk

# Map File Name
  MAP_FILE = c1m4.map
# Executable File Name
  EXEC_FILE = c1m4.out

ifeq ($(PLATFORM), MSP432)
# Architectures Specific Flags
  LINKER_FILE = ./msp432p401r.lds 
  CPU = cortex-m4
  ARCH = armv7e-m
  SPECS = nosys.specs

# Compiler Flags and Defines
  CC = arm-none-eabi-gcc
  LD = arm-none-eabi-ld
  OBJDUMP = arm-none-eabi-objdump
  SIZE = arm-none-eabi-size
  LDFLAGS = -Wl,-Map=$(MAP_FILE) -T $(LINKER_FILE) 
  CFLAGS = -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS) -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mthumb -Wall -Werror -O0 -g -std=c99
  CPPFLAGs = -M -MF

else
# Architectures Specific Flags
  LINKER_FILE = 
  CPU = x86_64
  ARCH = $(shell arch)
  SPECS = 

# Compiler Flags and Defines
  CC = gcc
  LD = ld
  OBJDUMP = objdump
  SIZE = size
  LDFLAGS = -Wl,-Map=$(MAP_FILE)
  CFLAGS = -Wall -Werror -O0 -g -std=c99
  CPPFLAGs =  -M -MF 
endif


.PHONY: build
build: $(SOURCES)
	$(CC) -DCOURSE1 -D$(PLATFORM)  $(CFLAGS) $(LDFLAGS) $(INCLUDE_PATH) -o $(EXEC_FILE) $^ 

.PHONY: clean
clean:
	rm -f *.i *.d *.map *.s *.out *.o  *.asm

.PHONY: help
help:
	@echo "make build PLATFORM=HOST <-- build c1m4.out (X86 Executable)" 
	@echo "make build PLATFORM=MSP432 <-- build c1m4.out (MSP432 Executable)" 
