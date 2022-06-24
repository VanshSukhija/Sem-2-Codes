// Implement Insertion and Selection sort on 1D array of integers and also return the time complexity in all the cases i.e your worst case, average case, and best case.

#include<stdio.h>
void Insertion(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i+1;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
void Selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter elements in 1st array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    Insertion(arr1, n);
    printf("Array 1 after Insertion sort: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n\n");
    printf("Enter elements in 2nd array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }
    Selection(arr2, n);
    printf("Array 2 after Selection sort: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
}