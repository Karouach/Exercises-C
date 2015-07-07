/*
 ============================================================================
 Name        : example1_5_2.c
 Author      :
 Description : Copy Input to Output 2nd version (getchar - putchar)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    while((c = getchar()) != EOF) {
        putchar(c);
    }

}