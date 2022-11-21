#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node * next;
}*first=NULL;

void create( int a[], int n)
{
    int i;
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof( struct Node));
    first->data = a[0];
    first->next=NULL;
    last=first;

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
    if( p!=NULL)
    {
        printf("%d ",p->data);
        display(p->next);
    }
}

int max( struct Node *p,int maxValue)
{
    while(p)
    {
        if( p->data > maxValue)
            maxValue = p->data;
            p=p->next;
    }
    return maxValue;

}

int min( struct Node *p,int minValue)
{
    while(p)
    {
        if( p->data < minValue)
            minValue = p->data;
            p=p->next;
    }
    return minValue;

}




int main()
{
    int a[] = {2,55,19,9,312,5,14};

    create(a,7);

    display(first);
    printf("\n The max value in the linked list is :%d",max(first,-32768));
    printf("\n The min value in the linked list is :%d",min(first,32768));

}
