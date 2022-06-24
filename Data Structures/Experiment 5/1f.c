#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
struct Node *copy(struct Node *ptr){
    struct Node *second = (struct Node *)malloc(sizeof(struct Node)), *last;
    strcpy(second->data, ptr->data);
    second->next = NULL;
    last = second;
    ptr = ptr->next;
    while(ptr!=0){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        strcpy(new->data, ptr->data);
        new->next = NULL;
        last->next = new;
        last = new;
        ptr = ptr->next;
    }
    return second;
}
void main(){
    struct Node *first = create();
    display(first);
    struct Node *second = copy(first);
    display(second);
}