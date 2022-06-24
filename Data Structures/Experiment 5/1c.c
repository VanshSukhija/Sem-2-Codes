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
void delete(struct Node **ptr, char key[]){
    struct Node *p = *ptr, *q;
    if(!strcmp((*ptr)->data, key)){
        *ptr = p->next;
        p->next = NULL;
        free(p);
    }
    else{
        while(p!=0 && strcmp(p->next->data, key)){
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
}
void main(){
    struct Node *first = create();
    display(first);
    delete(&first, "xyz");
    display(first);
}