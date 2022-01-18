# Final Assignment


## How to Build
  1. make build PATFORM=HOST <- for X86 Executable
  2. make build PLATFORM=MSP432 <- for MSP432 Executable

## How to Run
  1. ./c1m4.out

## Modification
1. memory.c: pointer arithmetic like below, not array indexing

```
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length){  
  for (int i=0; i<length; i++){  
     *(dst + i) = *(src + i);   
  }    
  return dst;
}
```
