/*
 ============================================================================
 Name        : example1_5_1.c
 Author      :
 Description : Copy Input to Output 1st Version (getchar - putchar)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    c= getchar();
    while( c!= EOF){
        putchar(c);
        c= getchar();
    }

}