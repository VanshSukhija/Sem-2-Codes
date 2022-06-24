// Implement Quick Sort using first/last/any random element as pivot

#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition_middle(int arr[], int l, int h){
    int pivot = arr[(l+h)/2], i=l, j=--h;
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
    swap(&arr[j], &arr[(l+h)/2]);
    return j;
}
void quicksort_middle(int arr[], int l, int h){
    if(l<h){
        int j = partition_middle(arr, l, h);
        quicksort_middle(arr, l, j);
        quicksort_middle(arr, j+1, h);
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
    quicksort_middle(arr, 0, n);
    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}