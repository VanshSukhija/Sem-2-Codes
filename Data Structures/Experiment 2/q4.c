#include<stdio.h>
#include<string.h>
void swapstring(char str1[100], char str2[100]){ // Function to swap strings
    char *p1=str1, *p2=str2;
    while(*p2!=0){
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++, p2++;
    }
    *p1=0;
}
int main(){
    char str1[100], str2[100];
    printf("Enter string 1: ");
    gets(str1);
    fflush(stdin);
    printf("Enter string 2: ");
    gets(str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    printf("Strings before swapping:\n");
    puts(str1);
    puts(str2);
    if(len2>=len1) // Checking whose length is greater and using function according to that
        swapstring(str1, str2);
    else
        swapstring(str2, str1);
    printf("Strings after swapping:\n");
    puts(str1);
    puts(str2);
    return 0;
}