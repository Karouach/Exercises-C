/*
 ============================================================================
 Name        : example_1_5_2.c
 Author      :
 Description : Count characters in input; 1st version
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numberChar = 0;
    while (getchar() != EOF){
        ++numberChar;
        printf("Number Of Characters is: %d", numberChar);
    }
}

