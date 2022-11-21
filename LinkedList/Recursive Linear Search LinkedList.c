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
   if(p!=NULL)
   {
       printf("%d ", p->data);
       display(p->next);
   }
}

_Bool recursiveLinearSearch( struct Node *p, int key)
{
    if( p == NULL)
        return 0;

    if( p->data == key)
        return p;
    return recursiveLinearSearch(p->next,key);
}




int main()
{
    int a[] = {1,2,3,4,5,6},key;
    create(a,6);
    display(first);

    printf("\n Enter element to be searched:");
    scanf("%d",&key);

    if( recursiveLinearSearch(first,key) )
        printf("\n The Element is present in linkedlist");
    else
        printf("\n The Element is not present in linkedlist");

 return 0;

}
