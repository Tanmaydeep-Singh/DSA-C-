#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL; ///first pointer

void create( int a[], int n)
{
    int i;
    struct Node *t,*last;

    first = ( struct Node *)malloc(sizeof(struct Node));
    first -> data = a[0];
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
   if(p!=NULL)
   {
       printf("%d ", p->data);
       display(p->next);
   }
}


void recursiveDisplay( struct Node *p)
{
   if(p!=NULL)
   {
       recursiveDisplay(p->next);
       printf("%d", p->data);
   }
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    create(a,6);

    display(first);
    printf("\n");
    recursiveDisplay(first);
    return 0;

}
