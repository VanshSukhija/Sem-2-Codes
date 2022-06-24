#include<stdio.h>
void display(int arr[], int n){ // Function for displaying array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int arr1[], int arr2[], int n){ // Function for swapping elements in 2 arrays
    for(int i=0; i<n; i++){
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        printf("Enter element number %d of array 1: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("Enter element number %d of array 2: ", i+1);
        scanf("%d", &arr2[i]);
    }
    printf("Arrays before swapping:\n");
    display(arr1, n);
    display(arr2, n);
    swap(arr1, arr2, n); // Calling function to swap
    printf("Arrays after swapping:\n");
    display(arr1, n);
    display(arr2, n);
}