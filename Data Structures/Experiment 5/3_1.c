#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node * next;
};

struct stack
{
    struct node * top;
};

void create(struct stack *s){
    (s)->top = NULL;
}

void push(struct stack *s, int element){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->val = element;
    temp->next = NULL;
    if(((s)->top)==NULL){
        (s)->top = temp;
    }
    else{
        temp->next = (s)->top;
        (s)->top = temp;
    }
}

int pop(struct stack *s){
    struct node * temp = (s)->top;
    (s)->top = temp->next;
    int a = temp->val;
    free(temp);
    return a;
}

int isEmpty(struct stack *s){
    if((s)->top==NULL){
        return 1;
    }
    return 0;
}

int main(){
    struct stack s;
    create(&s);
    push(&s,6);
    push(&s,7);
    push(&s,8);
    push(&s,9);
    pop(&s);
    push(&s,10);
    push(&s,11);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    push(&s,69);
    printf("%d", pop(&s));

    return 0;
}