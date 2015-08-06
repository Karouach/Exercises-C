#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_manage(char *s1, char *s2);

int main(){

    char string1[] = "String One";
    char string2[] =  "String two";
    char *res;
    res = str_manage(string1, string2);
    puts(res);
    free(res);
    return 0;
}

char *str_manage(char *s1, char *s2){
    char *temp;
    char *str = (char*)malloc(strlen(s1) + strlen(s2) + 1);
    temp = str;

    while (*s1 != '\0'){
        *str++ = *s1++;
    }
    while (*s2 != '\0'){
        *str++ = *s2++;
        *str = '\0';
    }
    return temp;
}