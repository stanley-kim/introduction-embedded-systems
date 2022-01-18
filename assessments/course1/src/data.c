
#include "data.h"
#include "memory.h"

#include "platform.h"

#define TRUE 1
#define FALSE 0

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
  uint8_t isPositive = FALSE;
  uint8_t position= 0;
  uint8_t remainder= 0;  

  //if data is zero
  if (data == 0){
    *(ptr) = '0';
    *(ptr + 1) = '\0';
    return 2;
  }  
  //if data is negative
  else if (data < 0){
    isPositive = FALSE;
    data = -data;
  }  
  //if data is negative
  else {
    isPositive = TRUE;
  }
  // Int to ASCII
  while (data != 0){
    remainder = data % base;
    *(ptr + position)= ( remainder > 9 ) ? ( remainder - 10 ) + 'A' : remainder + '0';
    ++position;
    data /= base;
  }  

  // if negative
  if (!isPositive){
    *(ptr + position) = '-';
    position++;
  }  
  position++;
  *(ptr + position) = '\0';

  // reverse the string order  
  my_reverse(ptr, (position - 1));
  
  return position;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
  int32_t number = 0;
  uint8_t isPositive = FALSE;

  // Check sign
  if(*ptr == '-')
  {
    isPositive = FALSE;
    // Move on to the next digit
    ptr++;
    // One less digit to deal with
    digits--;
  }
  else {
    isPositive = TRUE;
  }

  digits--;

  for(int i = 0; i<digits; i++){
    number = number * base + *ptr - '0';
    ptr++;
  }

  return (isPositive)?number:-number;
}
