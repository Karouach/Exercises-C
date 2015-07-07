/*
 ============================================================================
 Name        : ex1_5_1.c
 Author      :
 Question    : Write a program to print the corresponding
               Celsius to Fahrenheit table with symbolic constants
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define LARGER 300
#define STEP 20

int main()
{
    int fahrn;
    for (fahrn = LARGER; fahrn >= LOWER; fahrn = fahrn - STEP)
         printf("%3d %6.1f\n", fahrn, (5.0 / 9.0)*(fahrn - 32));
    return EXIT_SUCCESS;
}