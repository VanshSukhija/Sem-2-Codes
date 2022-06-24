#include<stdio.h>
void sort(char *ptr, int n){ // Function to sort an array
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if( *(ptr+j) > *(ptr+j+1) ){
                char temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
}

void givearr(char *ptr, int m, int n){ // function to iterate through each row and sort
    for(int i=0; i<m; i++){
        sort(ptr, n);
        ptr += n;
    }
}

void main(){
    int m, n;
    printf("Enter the number of rows in array: ");
    scanf("%d", &m);
    printf("Enter the number of columns in array: ");
    scanf("%d", &n);
    char arr[m][n];
    for(int i=0; i<m; i++){ // inputting values in character array
        for(int j=0; j<n; j++){
            fflush(stdin);
            printf("Enter character %d of row %d: ", j+1, i+1);
            scanf("%c", &arr[i][j]);
        }
    }
    char *ptr = arr[0];
    givearr(ptr, m, n); // calling function to iterate and sort
    for(int i=0; i<m; i++){ // printing the character array at last
        for(int j=0; j<n; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}