/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file for my C-programming code
 *
 *
 * @author Stanley Kim
 * @date Jan 11, 2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
}

void print_statistics(unsigned char array[], unsigned int length) {
  printf("The original Array\n");
  print_array(array, length);
  printf("The Median is: %d\n", find_median(array, length));
  printf("The Mean is: %d\n", find_mean(array, length));
  printf("The Max is: %d\n", find_max(array, length));
  printf("The Min is: %d\n", find_min(array, length));
  sort_array(array, length);
  printf("The sorted array:\n");
  print_array(array, length);
}

void print_array(unsigned char array[], unsigned int length) {
  for(int i=0; i<length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char array[], unsigned int length) {
  unsigned char array_copy[SIZE];
  for(int i=0; i<length; i++) {
    array_copy[i] = array[i];
  }
  sort_array(array_copy, length);
  if (length % 2 == 0) 
      return (array_copy[length / 2 - 1] + array_copy[length / 2]) / 2;
  else
    return array_copy[(length - 1)/2];
}

unsigned char find_min(unsigned char array[], unsigned int length) {
  unsigned char array_copy[SIZE];
  for(int i=0; i<length; i++) {
    array_copy[i] = array[i];
  }
  sort_array(array_copy, length);
  return array_copy[length - 1];
}

unsigned char find_max(unsigned char array[], unsigned int length) {
  unsigned char array_copy[SIZE];
  for(int i=0; i<length; i++) {
    array_copy[i] = array[i];
  }
  sort_array(array_copy, length);
  return array_copy[0];
}

unsigned char find_mean(unsigned char array[], unsigned int length)  {
  unsigned int sum = 0;
  for(int i=0; i<length;i++) {
    sum +=  array[i];
  }
  return (unsigned char)(sum / length);
}

void sort_array(unsigned char array[], unsigned int length)  {
  for(int i=(length-1);i>0 ; i-- ) {
    for(int j=0; j<i; j++) {
      unsigned int data_swap = 0;
      if (array[j] < array[j + 1]) {
        data_swap = array[j + 1];
        array[j + 1] = array[j];
        array[j] = data_swap;
      }
    }
  }
}


/* Add other Implementation File Code Here */
