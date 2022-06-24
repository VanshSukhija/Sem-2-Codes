#include<stdio.h>
void swap(int *a, int *b){ // Function for swapping numbers
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swapping:\na: %d\nb: %d\n", a, b);
    swap(&a, &b);
    printf("Numbers after swapping:\na: %d\nb: %d\n", a, b);
    return 0;
}