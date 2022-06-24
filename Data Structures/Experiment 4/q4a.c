// Implement Quick Sort with duplicate numbers in the given array/elements

#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int h){
    int pivot = arr[l], i=l, j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[j], &arr[l]);
    return j;
}
void quicksort(int arr[], int l, int h){
    if(l<h){
        int j = partition(arr, l, h);
        quicksort(arr, l, j);
        quicksort(arr, j+1, h);
    }
}
void main(){
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n);
    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}