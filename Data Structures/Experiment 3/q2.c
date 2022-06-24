#include<stdio.h>
#include<stdlib.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter the index of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the index of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1!=r2){
        printf("Cant be multiplied");
        return 0;
    }
    else{
        int *mat1 = (int *)malloc(r1*c1*sizeof(int));
        int *mat2 = (int *)malloc(r2*c2*sizeof(int));
        int *mat3 = (int *)malloc(r1*c2*sizeof(int));
        printf("Enter 1st matrix:\n");
        for(int i=0; i<r1*c1; i++){
            scanf("%d", mat1+i);
        }
        printf("Enter 2nd matrix:\n");
        for(int i=0; i<r2*c2; i++){
            scanf("%d", mat2+i);
        }
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                *(mat3+i*r1+j) = 0;
                for(int k=0; k<c1; k++){
                    *(mat3+i*r1+j) += (*(mat1+i*r1+k))*(*(mat2+k*c2+j));
                }
            }
        }
        printf("Multiplied Matrix:\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                printf("%d ", *(mat3+i*r1+j));
            }
            printf("\n");
        }
        free(mat1);
        free(mat2);
        free(mat3);
    }
}