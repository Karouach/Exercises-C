/*
 ============================================================================
 Name        : ex1_5.c
 Author      :
 Question    : Write a program to print the corresponding
               Celsius to Fahrenheit table.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrn;
    for (fahrn = 300; fahrn >= 0; fahrn = fahrn - 20)
         printf("%3d %6.1f\n", fahrn, (5.0 / 9.0)*(fahrn - 32));
    return EXIT_SUCCESS;
}