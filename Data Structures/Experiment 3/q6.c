#include<stdio.h>
#include<string.h>
void main(){
    FILE *ptr = fopen("q6.txt", "w");
    fprintf(ptr, "Vansh Sukhija");
    
    fclose(ptr);
}