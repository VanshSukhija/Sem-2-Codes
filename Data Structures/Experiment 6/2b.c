#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    struct Student *prev, *next;
    int rollno, marks;
    char name[20];
};
struct Student *create(){
    struct Student *first = (struct Student *)malloc(sizeof(struct Student)), *last;
    first->prev = NULL;
    first->next = NULL;
    printf("Enter name: ");
    gets(first->name);
    printf("Enter Roll No: ");
    scanf("%d", &first->rollno);
    printf("Enter total marks: ");
    scanf("%d", &first->marks);
    last = first;
    int input;
    printf("\nEnter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input){
        struct Student *new = (struct Student *)malloc(sizeof(struct Student));
        new->next = NULL;
        new->prev = last;
        last->next = new;
        last = new;
        fflush(stdin);
        printf("Enter name: ");
        gets(new->name);
        printf("Enter Roll No: ");
        scanf("%d", &new->rollno);
        printf("Enter total marks: ");
        scanf("%d", &new->marks);
        printf("\nEnter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    return first;
}
void display(struct Student *ptr){
    printf("---------------Displaying Data---------------\n");
    while(ptr!=0){
        puts(ptr->name);
        printf("%d\n", ptr->rollno);
        printf("%d\n\n", ptr->marks);
        ptr = ptr->next;
    }
}
void insert(struct Student *p, int key){
    struct Student *new = (struct Student *)malloc(sizeof(struct Student));
    fflush(stdin);
    printf("Enter name: ");
    gets(new->name);
    printf("Enter Roll No: ");
    scanf("%d", &new->rollno);
    printf("Enter total marks: ");
    scanf("%d", &new->marks);
    while(p->next!=0 && p->rollno != key){
        p = p->next;
    }
    new->prev = p;
    new->next = p->next;
    p->next->prev = new;
    p->next = new;
}
void main(){
    struct Student *first;
    first = create();
    display(first);
    insert(first, 12112021);
    display(first);
}