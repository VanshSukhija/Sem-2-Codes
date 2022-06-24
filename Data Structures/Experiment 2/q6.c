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
void main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr, n); // Sorting the array in ascending order
    printf("Missing numbers are:\n");
    int j=1;
    for(int i=0; i<n; i++){ // Finding the missing numbers
        if(arr[i]-i>j){
            printf("%d ", i+j);
            j++;
        }
    }
}