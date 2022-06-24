#include<stdio.h>
void display(int arr[], int n){ // Function to display an array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n){ // Function to sort an array
    for(int i=n-1; i>0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[2*n];
    for(int i=0; i<n; i++){ // inputting elements in 1st array and 3rd array
        printf("Enter element no. %d of array 1: ", i+1);
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    printf("\n");
    for(int i=0; i<n; i++){ // inputting elements in 2nd array and merging it in 3rd array
        printf("Enter element no. %d of array 2: ", i+1);
        scanf("%d", &arr2[i]);
        arr3[n+i] = arr2[i];
    }
    printf("\n");
    printf("Array 1: ");
    display(arr1, n);
    printf("Array 2: ");
    display(arr2, n);
    sort(arr3, 2*n); // sorting merged array in ascending order
    printf("Merged array: ");
    display(arr3, 2*n);
    printf("Median: %f", (arr3[n-1]+arr3[n])/2.0); // finding median
}