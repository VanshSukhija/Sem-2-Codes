#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char name[30];
    int roll_no;
    int marks;
}stud;
static int count=1;
void first(stud *ptr, int n){
    if(count>n)
        printf("Cannot enter more data\n");
    else{
        fflush(stdin);
        printf("Enter name of student: ");
        scanf("%[^\n]s", &(ptr+count-1)->name);
        printf("Enter Roll no.: ");
        scanf("%d", &(ptr+count-1)->roll_no);
        printf("Enter total marks: ");
        scanf("%d", &(ptr+count-1)->marks);
        count++;
    }
    printf("\n");
}
void second(stud *ptr, int n){
    for(int i=0; i<n-1; i++){
        printf("\n");
        puts((ptr+i)->name);
        printf("%d\n", (ptr+i)->roll_no);
        printf("%d\n", (ptr+i)->marks);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    stud *ptr = (stud *)malloc(n*sizeof(stud));
    while(1){
        int input, num;
        printf("Enter 0 to exit\nEnter 1 to input data\nEnter 2 to display data\n");
        scanf("%d", &input);
        switch(input){
            case 0:
                return 0;
            case 1:
                first(ptr, n);
                break;
            case 2:
                second(ptr, count);
                break;
            default:
                printf("Wrong input\n");
                break;
        }
    }
    free(ptr);
}