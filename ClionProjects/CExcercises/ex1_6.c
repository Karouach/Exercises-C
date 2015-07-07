/*
 ============================================================================
 Name        : ex1_6.c
 Author      :
 Description : Verify that the expression getchar() != EOF is 0 or 1.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    while((c = getchar()) != EOF) {
        printf("c is: %d\n", c);
    }printf("EOF is: %d\n", c);

}