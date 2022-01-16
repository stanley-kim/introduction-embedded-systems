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
 * @file stats.h
 * @brief Header File for stats.c
 *
 * <Add Extended Description Here>
 *
 * @author Stanley Kim
 * @date Jan 11,  2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return Void
 */
void print_statistics(unsigned char array[], unsigned int length);

/**
 * @brief A function that prints the array to the screen
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return Void
 */
void print_array(unsigned char array[], unsigned int length);

/**
 * @brief A function that returns the median value
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return the median value. unsigned int type
 */
unsigned char find_median(unsigned char array[], unsigned int length);

/**
 * @brief A function that returns the minimum value
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return the minimum value. unsigned  int type
 */
unsigned char find_min(unsigned char array[], unsigned int length);

/**
 * @brief A function that returns the maximum value
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return the maximum value. unsigned  int type
 */
unsigned char find_max(unsigned char array[], unsigned int length);

/**
 * @brief A function that returns the mean value
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return the mean value. unsigned  int type
 */
unsigned char find_mean(unsigned char array[], unsigned int length);

/**
 * @brief A function that sorts the array from largest to smallest.
 *
 * @param array  The Dataset Array
 * @param length The Array Length
 *
 * @return Void 
 */
void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */
