// WAP to implement Bubble on 1D array of Faculty structures (contains faculty_name, faculty_ID, subject_codes, class_names) with key as faculty_ID.

#include<stdio.h>
typedef struct faculty{
    char name[20];
    int id;
    char code[7];
    char class_name[4];
}fac;
void sort(fac arr[], int n){
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j].id>arr[j+1].id){
                fac temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void main(){
    int n;
    printf("Enter the number of faculties: ");
    scanf("%d", &n);
    fac arr[n];
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("Enter name of faculty %d: ", i+1);
        gets(arr[i].name);
        printf("Enter ID: ");
        scanf("%d", &arr[i].id);
        fflush(stdin);
        printf("Enter Subject code: ");
        gets(arr[i].code);
        printf("Enter Class name: ");
        gets(arr[i].class_name);
        printf("\n");
    }
    printf("Before sorting\n");
    for(int i=0; i<n; i++){
        puts(arr[i].name);
        printf("%d\n\n", arr[i].id);
    }   
    sort(arr, n);
    printf("After sorting wrt faculty ids\n");
    for(int i=0; i<n; i++){
        puts(arr[i].name);
        printf("%d\n\n", arr[i].id);
    }   
}