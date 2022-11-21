#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node *next;
}*first=NULL;



void create( int a[], int n)
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

void display( struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }
}

void Insert( struct Node *p, int value)
{
    struct Node *t,*q=NULL;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    t->next=NULL;

    if(first== NULL)
    {
     first = t;
    }
    else
    while(p && p->data < value)
    {
        q=p;
        p=p->next;
    }
        if( p == first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }

}



int main()
{
    int a[] = {2 ,4 ,7 ,10 ,24 ,50 },value,index;

    create(a,6);
    display(first);

    printf("\nEnter the value to be inserted:\n");
    scanf("%d",&value);

    Insert(first,value);
    display(first);



}
