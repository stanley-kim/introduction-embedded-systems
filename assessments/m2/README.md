# Week2 Assignment. 
To Create a build system using the GNU tools, GCC and GNU Make

## Modification
1. sources.mk
    - SOURCES, INCLUDES for MSP432 and X86 Host.
2. Makefile
    - make build PLATFORM=MSP432 <- build MPS432 Executable
    - make build PLATFORM=HOST   <- build X86 Executable
    - make clean <- remove all compiled objects, preprocessed outputs, assembly outputs, executable files and build output files.
    - make memory.o PLATFORM=MSP432(or HOST) <- build object file for PLATFORM
    - make memory.asm PLATFORM=MSP432(or HOST) <- build assembly output file for PLATFORM
    - make memory.i PLATFORM=MSP432(or HOST) <- buil preprocessed output file for PLATFORM
