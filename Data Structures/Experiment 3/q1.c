#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *ptr = (char *)malloc(15*sizeof(char));
    strcpy(ptr, "Hello World");
    puts(ptr);
    ptr = (char *)realloc(ptr, 30);
    strcpy(ptr, "Data Structures pdh lo guyssss");
    puts(ptr);
    free(ptr);
}