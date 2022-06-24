#include<stdio.h>
#include<stdlib.h>
typedef struct faculty{
    char name[30];
    int faculty_id;
    char code[7];
    char class_names[4];
}fac;
static int count=1;
void func1(fac *ptr, int n){
    if(count>n)
        printf("Cannot enter more data\n");
    else{
        fflush(stdin);
        printf("Enter name of faculty: ");
        scanf("%[^\n]s", &(ptr+count-1)->name);
        printf("Enter faculty ID: ");
        scanf("%d", &(ptr+count-1)->faculty_id);
        fflush(stdin);
        printf("Enter course code: ");
        gets((ptr+count-1)->code);
        fflush(stdin);
        printf("Enter Class names: ");
        gets((ptr+count-1)->class_names);
        count++;
    }
    printf("\n");
}
void func2(fac *ptr, int n){
    for(int i=0; i<n-1; i++){
        printf("\n");
        puts((ptr+i)->name);
        printf("%d\n", (ptr+i)->faculty_id);
        puts((ptr+i)->code);
        puts((ptr+i)->class_names);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of faculties: ");
    scanf("%d", &n);
    fac *ptr = (fac *)malloc(n*sizeof(fac));
    while(1){
        int input, num;
        printf("Enter 0 to exit\nEnter 1 to input data\nEnter 2 to display data\n");
        scanf("%d", &input);
        switch(input){
            case 0:
                return 0;
            case 1:
                func1(ptr, n);
                break;
            case 2:
                func2(ptr, count);
                break;
            default:
                printf("Wrong input\n");
                break;
        }
    }
    free(ptr);
}