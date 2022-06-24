#include<stdio.h>
#include<stdlib.h>
typedef struct employee{
    char name[30];
    int faculty_id;
    int salary;
}emp;
static int count=1;
void one(emp *ptr, int n){
    if(count>n)
        printf("Cannot enter more data\n");
    else{
        fflush(stdin);
        printf("Enter name of employee: ");
        scanf("%[^\n]s", &(ptr+count-1)->name);
        printf("Enter employee no.: ");
        scanf("%d", &(ptr+count-1)->faculty_id);
        printf("Enter salary: ");
        scanf("%d", &(ptr+count-1)->salary);
        count++;
    }
    printf("\n");
}
void two(emp *ptr, int n){
    for(int i=0; i<n-1; i++){
        printf("\n");
        puts((ptr+i)->name);
        printf("%d\n", (ptr+i)->faculty_id);
        printf("%d\n", (ptr+i)->salary);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    emp *ptr = (emp *)malloc(n*sizeof(emp));
    while(1){
        int input, num;
        printf("Enter 0 to exit\nEnter 1 to input data\nEnter 2 to display data\n");
        scanf("%d", &input);
        switch(input){
            case 0:
                return 0;
            case 1:
                one(ptr, n);
                break;
            case 2:
                two(ptr, count);
                break;
            default:
                printf("Wrong input\n");
                break;
        }
    }
    free(ptr);
}