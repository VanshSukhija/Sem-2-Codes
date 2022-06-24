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
void insert(struct Node **ptr, int pos){
    struct Node *new = (struct Node *)malloc(sizeof(struct Node)), *p = *ptr;
    printf("Enter data: ");
    scanf("%s", &new->data);
    if(pos==0){
        new->next = *ptr;
        *ptr = new;
    }
    else{
        for(int i=0; i<pos-1; i++){
            p = p->next;
        }
        new->next = p->next;
        p->next = new;
    }
}
void main(){
    struct Node *first = create();
    display(first);
    insert(&first, 2);
    display(first);
}