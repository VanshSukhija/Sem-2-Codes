// Implement Quick Sort using first/last/any random element as pivot

#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition_last(int arr[], int l, int h){
    l--, h--;
    int pivot = arr[h], i=l, j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>=pivot);
        if(i<j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[i], &arr[h]);
    return i;
}
void quicksort_last(int arr[], int l, int h){
    if(l<h){
        int j = partition_last(arr, l, h);
        quicksort_last(arr, l, j);
        quicksort_last(arr, j+1, h);
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
    quicksort_last(arr, 0, n);
    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}