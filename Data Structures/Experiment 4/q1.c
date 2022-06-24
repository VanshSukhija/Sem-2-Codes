// Implement Linear search and Binary search on 1D array of Integers and also return the time complexity in all the cases i.e your worst case, average case, and best case.
#include<stdio.h>
int Lsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
void sort(int arr[], int n){
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int Bsearch(int arr[], int n, int key){
    sort(arr, n);
    int start=0, end=n;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
}
void main(){
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be found: ");
    scanf("%d", &key);
    int linear = Lsearch(arr, n, key);
    printf("Using linear search\n");
    if(linear>=0){
        printf("Key found at index: %d\nTime Complexity: ", linear);
        if(linear==n-1)
            printf("Worst\n");
        else if(linear==0)
            printf("Best\n");
        else
            printf("Average\n");
    }
    else
        printf("Key not found\nTime Complexity: Worst");
    int binary = Bsearch(arr, n , key);
    printf("\nUsing binary search\n");
    if(binary>=0){
        printf("Key found at index: %d\nTime Complexity: ", binary);
        if(binary==(n-1)/2)
            printf("Best\n");
        else if(binary==0 || binary==n-1)
            printf("Worst\n");
        else
            printf("Average\n");
    }
    else    
        printf("Key not found\nTime Complexity: Worst");
}