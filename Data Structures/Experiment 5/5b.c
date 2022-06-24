#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL, *last, *second = NULL;
void insertion(int a, struct node *p)
{
    static int flag = 0;
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = a;
    t->next = NULL;
    if (p == 0)
    {
        last = t;
        if (flag == 0)
            first = t;
        else
            second = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
    flag++;
}
struct node *logic(struct node *p, struct node *r)
{
    while (p != 0)
    {
        if (p->data % 2 == 0 && r == NULL)
        {
            r = (struct node *)malloc(sizeof(struct node));
            r->data = p->data;
            r->next = NULL;
            first = r;
            last = r;
            p = p->next;
        }
        else if (p->data % 2 == 0 && r != NULL)
        {
            r = (struct node *)malloc(sizeof(struct node));
            r->data = p->data;
            r->next = NULL;
            last->next = r;
            last = r;
            p = p->next;
        }
        else
            p = p->next;
    }
    return (r);
}
struct node *concating()
{
    struct node *p, *q, *r;
    p = first;
    q = second;
    r = NULL;
    r = logic(p, r);
    logic(q, r);
    return (r);
}
void display(struct node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *p;
    int n, a, x;
    printf("enter the number of elements in linked list a=");
    scanf("%d", &n);
    printf("enter the elements of list=\n");
    for (x = 0; x < n; x++)
    {
        scanf("%d", &a);
        insertion(a, first);
    }
    printf("enter the number of elements in linked list b=");
    scanf("%d", &n);
    printf("enter the elements of another list=\n");
    for (x = 0; x < n; x++)
    {
        scanf("%d", &a);
        insertion(a, second);
    }
    printf("current list a=");
    p = first;
    display(p);
    printf("\ncurrent list b=");
    p = second;
    display(p);
    p = concating();
    printf("\nconcating list=");
    display(p);
}