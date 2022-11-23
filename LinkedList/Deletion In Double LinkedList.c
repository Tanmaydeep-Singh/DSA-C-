
#include<stdio.h>
#include<stdlib.h>

struct Node {
struct Node * prev;
int data;
struct Node * next;
}*first =NULL;



void display( struct Node *p)
{
    while(p)
    {
        printf(" %d ",p->data );
        p=p->next;
    }
    printf("\n");
}



void Create( int a[], int n)
{
    struct Node *t,*last;
    int i;


    first = (struct Node *)malloc(sizeof(struct Node));
    first->data= a[0];
    first->prev = first->next =NULL;
    last = first;

    for(i = 1 ; i <n ; i++)
    {
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next=last->next;
        t->prev =last;
        last->next=t;
        last=t;
    }

}

int count(struct Node *p)
{
    int length=0;
    while(p)
    {
        length++;
        p=p->next;
    }
    return length;

}



int Delete( struct Node *p, int index)
{
    struct Node *t,*q=NULL;
    int i,x;


    if( index < 0 || index > count(p))
        return 0;

    if( index == 1)
    {
           p=first;
           first=first->next;
           x = p->data;
           free(p);
           first->prev=NULL;

    }
    else
    {
        p= first;
        for( i = 0 ; i<index-1 ; i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
        x=p->data;
        free(p);

    }

    return p;

}



int main()
{
    int a[] = {1,2,3,4,5,6,7,8};

    Create(a,8);
    display(first);

    Delete(first,1);
    display(first);

    Delete(first,7);
    display(first);


    printf("\n %d ", count(first));

}



