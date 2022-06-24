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
int pos(struct Node *ptr, char data[]){
    int count=0;
    while(ptr!=0){
        if(!strcmp(ptr->data, data))
            return count;
        count++;
        ptr = ptr->next;
    }
    return -1;
}
void main(){
    struct Node *first = create();
    display(first);
    printf("Position of Node wrt header is: %d", pos(first, "xyz"));
}