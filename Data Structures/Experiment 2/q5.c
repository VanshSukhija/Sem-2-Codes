#include<stdio.h>
void sort(int arr[], int n){ // Bubblesort to sort an array
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
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr, n); // Sorting the array in ascending order
    int count=0;
    if(n<=2 && arr[0]!=arr[1])
        count=n;
    else{
        for(int i=0; i<n; i++){ // Finding the count of non-repeating elements
            if(i==0){
                if(arr[i]!=arr[i+1])
                    count++;
            }
            else if(i==n-1){
                if(arr[i]!=arr[i-1])
                    count++;
            }
            else{
                if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
                    count++;
            }
        }
    }
    printf("%d", count);
}