#include<stdio.h>
void display(int arr[], int n){ // Function to display array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n){ // Function to reverse the array
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array before Reversing:\n");
    display(arr, n);
    reverse(arr, n); // Calling funtion to reverse the array
    printf("Array after Reversing:\n");
    display(arr, n);
}