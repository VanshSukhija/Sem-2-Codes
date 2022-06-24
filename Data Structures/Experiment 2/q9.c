#include<stdio.h>
void reverse(int *ptr, int n){ // function to reverse elements in each row
    for(int j=0; j<n/2; j++){
        int temp = *ptr;
        *ptr = *(ptr+n-1-j);
        *(ptr+n-1-j) = temp;
    }
}
void main(){
    int m, n;
    printf("Enter number of rows in array: ");
    scanf("%d", &m);
    printf("Enter number of columns in array: ");
    scanf("%d", &n);
    int arr[m][n];
    for(int i=0; i<m; i++){ // inputting values in array
        for(int j=0; j<n; j++){
            printf("Enter element %d of row %d: ", j+1, i+1);
            scanf("%d", &arr[i][j]);
        }
    }
    int *ptr = arr[0];
    for(int i=0; i<m; i++){
        reverse(ptr, n); // calling function to reverse the elements
        ptr+=n;
    }

    for(int i=0; i<m; i++){ // printing the reversed array
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}