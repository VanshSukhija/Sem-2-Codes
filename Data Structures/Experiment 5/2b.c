#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
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
void swap(struct Node **ptr){
    struct Node *p = *ptr, *q = (*ptr)->next, *temp = NULL;
    if(q!=0){
        p->next = q->next;
        q->next = p;
        *ptr = q;
    }

    temp = p;
    p = p->next;
    q = p->next;

    while(p!=0 && q!=0){
        p->next = q->next;
        q->next = p;
        temp->next = q;

        temp = p;
        p = p->next;
        q = p->next;
    }
}
void main(){
    struct Node *first = create();
    display(first);
    swap(&first);
    display(first);
}