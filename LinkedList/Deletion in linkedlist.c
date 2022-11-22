#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node *next;
}*first = NULL;


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

int count( struct Node *p)
{
    int length=0;
    while(p)
    {
        length++;
        p=p->next;
    }
    return length;

}

int Delete( struct Node * p, int index)
{
    struct Node *q;
    int x =-1;


    if( index  < 1 || index > count(p))
        return 0;


    if( index == 1 )
    {
    q=first;
    x = p->data;
    first = first->next;
    free(q);
    return x;
    }
    else
    {
        for(int i=0 ; i<index-1 ; i++)
        {
            q=p;
            p=p->next;
        }

        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }





}

int main()
{
    int a[] = {2 ,4 ,7 ,10 ,24 ,50 },value,index;

    create(a,6);
    display(first);

    printf("\nEnter the index to be deleted: \n");
    scanf("%d",&index);

    Delete(first,index);
    display(first);

}
