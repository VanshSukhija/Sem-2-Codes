#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node * next;
};

struct queue
{
    struct node * first, *last;
};

void create(struct queue * q){
    q->first = q->last = NULL ;
}

void Insert(struct queue * q, int element){
    struct node * temp = (struct node * ) malloc (sizeof(struct node));
    temp->val = element;
    temp->next = NULL;
    if(q->first==NULL){
        q->last = q->first = temp;
    }
    else{
        q->last->next = temp;
        q->last = temp;
    }
}

int Delete(struct queue * q){
    if(q->first!=NULL){
        struct node * temp = q->first;
        q->first = temp->next;
        int a = temp->val;
        free(temp);
        return a;
    }
}

int isEmpty(struct queue * q){
    if(q->first==NULL){
        return 1;
    }
    return 0;
}

int isFull(struct queue * q){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    if(p!=NULL){
        free(p);
        return 0;
    }
    return 1;
}

int main(){
    struct queue q;
    create(&q);
    Insert(&q,1);
    Insert(&q,2);
    Insert(&q,3);
    printf("%d\n", Delete(&q));
    Insert(&q,4);
    Insert(&q,5);
    Insert(&q,6);
    printf("%d\n", Delete(&q));
    printf("%d\n", isEmpty(&q));
    printf("%d\n", isFull(&q));

}