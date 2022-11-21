#include<stdio.h>
#include<stdlib.h>

struct Node{

int data;
struct Node *next;

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


int sum( struct Node *p)
{
    int sum = 0;
    while(p)
    {
        sum+=p->data;
        p=p->next;
    }

    return sum;
}



int main()
{
    int a[5] = {1,2,3,4,5};
    create(a,5);
    display(first);
    printf("\nThe sum og the linked list is: %d", sum(first));


}
