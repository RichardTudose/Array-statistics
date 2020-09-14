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
 * @brief Header of the project: statistics of an array
 *
 * This file contains the declarations and documentation for the functions from 
 * the stats.c file
 * @author Richard Tudose
 * @date 4/09/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics ( float mean, float max, float min, float median );

/**
 * @brief Prints all the calculated statistics
 *
 * A function that prints the statistics 
 * of an array including minimum, maximum, mean, and median.
 
 * @param mean - the calculated mean value of the array
 * @param max - the maximum found value of the array
 * @param min - the minimum found value of the array
 * @param median - the median value of the array
 */
 
void print_array ( unsigned char test[], unsigned int SIZE );

/**
 * @brief Prints a given aray to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array we want to print
 */

float find_median(unsigned char test[], unsigned int SIZE);

/**
 * @brief Calculates the median of the array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array 
 *
 * @return - The median value of the array
 */
 
float find_mean ( unsigned char test[], unsigned int SIZE );

/**
 * @brief Calculates the mean value of the array
 *
 * Given an array of data and a length, returns the mean
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array
 *
 * @return - The mean value of the array
 */
 
float find_maximum ( unsigned char test[], unsigned int SIZE );

/**
 * @brief Finds the maximum value of an array
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array
 *
 * @return The maximum value of the array
 */ 
 
float find_minimum ( unsigned char test[], unsigned int SIZE );

/**
 * @brief Finds the minimum value of an array
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array
 *
 * @return The minimum value of the array
 */ 
 
void sort_array ( unsigned char test[], unsigned int SIZE );

/**
 * @brief Sorts an array from largest to smallest
 *
 * Given an array of data and a length, sorts the 
 * array from largest to smallest. (The zeroth 
 * Element should be the largest value, and the last
 * element (n-1) should be the smallest value. )
 *
 * @param test[] - the given array
 * @param SIZE - the size of the array
 */
  

#endif /* __STATS_H__ */
