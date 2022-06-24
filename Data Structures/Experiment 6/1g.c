#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data[10];
    struct Node *next;
};
struct Node *create(){
    struct Node *first = (struct Node*)malloc(sizeof(struct Node)), *last;
    printf("Enter data: ");
    scanf("%s", &first->data);
    first->next = NULL;
    last = first;
    int input=0;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input==1){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        fflush(stdin);
        printf("Enter data: ");
        scanf("%s", &new->data);
        new->next = NULL;
        last->next = new;
        last = new;
        printf("Enter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    last->next = first;
    return first;
}
void display(struct Node *ptr){
    struct Node *p = ptr;
    printf("Linked List: ");
    do{
        printf("%s ", p->data);
        p = p->next;
    }while(p!=ptr);
    printf("\n\n");
}
void sorting(struct Node *ptr){
    struct Node *q = ptr, *min;
    int flag1=0;
    while(q!=ptr || !flag1){
        int flag2=0;
        flag1 = 1;
        min = q;
        struct Node *temp = q;
        while(temp!=ptr || !flag2){
            flag2 = 1;
            if(strcmp(temp->data, min->data) < 0)
                min = temp;
            temp = temp->next;
        }
        char x[10];
        strcpy(x, min->data);
        strcpy(min->data, q->data);
        strcpy(q->data, x);
        q = q->next;
    }
}
void main(){
    struct Node *first = create();
    display(first);
    sorting(first);
    display(first);
}