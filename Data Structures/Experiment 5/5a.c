#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *create(){
    struct Node *first = (struct Node*)malloc(sizeof(struct Node)), *last;
    printf("Enter data: ");
    scanf("%d", &first->data);
    first->next = NULL;
    last = first;
    int input=0;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input==1){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        last->next = new;
        last = new;
        printf("Enter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    return first;
}
void sort(struct Node **ptr) {  
    struct Node *curr = *ptr, *nex = NULL;  
    int temp;
    while(curr != NULL){  
        nex = curr->next;
        while(nex != NULL){  
            if(curr->data > nex->data){  
                temp = curr->data;  
                curr->data = nex->data;  
                nex->data = temp;  
            }  
            nex = nex->next;
        }  
        curr = curr->next;
    }
}  
void display(struct Node *ptr){
    printf("Linked List: ");
    while(ptr!=0){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void main(){
    struct Node *first = create();
    display(first);
    sort(&first);
    display(first);
}