#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL, *last;
void insertion(int a)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = a;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
int occurance(int a)
{
    struct node *p = first;
    int sum = 0;
    while (p != 0)
    {
        if (p->data == a)
            sum++;
        p = p->next;
    }
    return (sum);
}
void display()
{
    struct node *p;
    p = first;
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int n, a, x;
    printf("enter the number of elements in linked list=");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of linked list=\n");
    for (x = 0; x < n; x++)
    {
        scanf("%d", &a);
        insertion(a);
    }
    printf("current list= ");
    display();
    struct node *p = first;
    for (x = 0; x < n; x++)
    {
        arr[x] = occurance(p->data);
        p = p->next;
    }
    p = first;
    for (x = 0; x < n; x++)
    {
        printf("\noccurance of %d in LL= %d", p->data, arr[x]);
        while (p->data == p->next->data)
        {
            p = p->next;
            x++;
        }
        p = p->next;
    }
}