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
 * @brief Main file of the project to perform statistical analytics
 *
 * The functions of this program perform statistics like finding the 
 * maximum, minimum, mean, and median of the data set and also 
 * orders the array from large to small.
 * @author Richard Tudose
 * @date 4/09/2020
 *
 */

#include <stdio.h>
#include "stats.h"
#include <math.h>

/* size of the Data Set */
#define SIZE 40

void main() {

  unsigned char test [SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90 };

  
  /*Variables declarations*/
  float mean = 0, median = 0, min, max;
  
  /* Statistics and Printing Functions */
  mean = find_mean ( test, SIZE );
  median = find_median ( test, SIZE );
  max = find_maximum ( test, SIZE );
  min = find_minimum ( test, SIZE );
  print_statistics ( mean, max, min, median );
  sort_array( test, SIZE );
  print_array( test, SIZE );
}

/* Printing function */
void print_statistics ( float mean, float max, float min, float median ) {
  	
}

/* Calculating the mean value of the array */
float find_mean ( unsigned char a[], unsigned int n ) {

  return mean ;
  
} 

/* Finding the maximum value of the array */
float find_maximum ( unsigned char a[], unsigned int n ) {

  return max;
  
}

/* Finding the minimum value of the array */
float find_minimum ( unsigned char a[], unsigned int n ) {

  return min;
  
}

/* Finding the median value of the array */
float find_median ( unsigned char a[], unsigned int n ) {
  
  return median ;
  
} 

/* Sorting the array from big to small ( e.g. 5 3 1 ) */
void sort_array ( unsigned char a[], unsigned int n ) {
 
 
}

/* Printing the array */
void print_array ( unsigned char a[], unsigned int n ) {

}



