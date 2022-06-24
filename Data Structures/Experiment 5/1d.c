#include<stdio.h>
#include<stdlib.h>
struct Node{
    char data[10];
    struct Node *next;
};
struct Node *create(){
    struct Node *first = (struct Node *)malloc(sizeof(struct Node)), *last;
    first->next = NULL;
    last = first;
    printf("Enter data: ");
    scanf("%s", &first->data);
    int input;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input){
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        fflush(stdin);
        printf("Enter data: ");
        scanf("%s", &t->data);
        t->next = NULL;
        last->next = t;
        last = t;
        printf("Enter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    return first;
}
void display(struct Node *ptr){
    printf("Linked List: ");
    while(ptr!=0){
        printf("%s ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void deleteall(struct Node **ptr){
    struct Node *p = *ptr;
    while(p->next!=0){
        *ptr = p->next;
        p->next = NULL;
        free(p);
        p = *ptr;
    }
    *ptr = NULL;
    free(ptr);
}
void main(){
    struct Node *first = create();
    display(first);
    deleteall(&first);
    display(first);
}