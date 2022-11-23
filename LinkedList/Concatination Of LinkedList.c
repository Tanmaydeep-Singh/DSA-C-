#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL; ///first pointer

void create1( int a[], int n)
{
    int i;
    struct Node *t,*last;

    first = ( struct Node *)malloc(sizeof(struct Node));
    first -> data = a[0];
    first->next=NULL;
    last=first; /// = a[0];

    for( i = 1 ; i< n ; i++)
    {
        t = ( struct Node *)malloc(sizeof(struct Node));
        t->data= a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void create2( int a[], int n)
{
    int i;
    struct Node *t,*last;

    second = ( struct Node *)malloc(sizeof(struct Node));
    second -> data = a[0];
    second->next=NULL;
    last=second;

    for( i = 1 ; i< n ; i++)
    {
        t = ( struct Node *)malloc(sizeof(struct Node));
        t->data= a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void display( struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }
}


void concatinate(struct Node *p, struct Node *q)
{

    while(p->next)
    {
        p=p->next;
    }
    p->next=q;

    display(first);
}


int main()
{
    int a[] = {1,2,3,4,5,6};
    int b[] = {7,8,9,10};
    create1(a,6);
    create2(b,4);

    display(first);
    display(second);

    concatinate(first,second);


    return 0;

}
