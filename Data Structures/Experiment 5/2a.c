#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first;
struct Node *create(){
    struct Node *first = (struct Node *)malloc(sizeof(struct Node)), *last;
    first->next = NULL;
    last = first;
    printf("Enter data: ");
    scanf("%d", &first->data);
    int input;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input){
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &t->data);
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
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void reverse(struct Node *p, struct Node *q){
    if(q!=0){
        reverse(q, q->next);
        q->next = p;
    }
    else
        first = p;
}
void main(){
    first = create();
    display(first);
    reverse(0, first);
    display(first);
}