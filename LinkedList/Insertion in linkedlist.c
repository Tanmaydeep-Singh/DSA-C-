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
    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }
}

int count( struct Node *p) ///To find the length of the linkedlist.
{
    int length = 0;
    while(p)
    {
        length++;
        p=p->next;
    }
    return length;
}

void Insert( struct Node *p,int value,int index)
{
    struct Node *t;


    if( index < 0 || index > count(p) )
      {
           printf("\n Invalid Index");
        return NULL;
      }


     t =(struct Node *)malloc(sizeof(struct Node));
     t ->data=value;

     if( index == 0)
     {
         t->next= first;
         first =t;
     }
     else
     {
         for( int i=0 ; i< index-1 ; i++)
            p=p->next;

         t->next=p->next;
         p->next=t;

     }
     display(first);
     return p;

}


int main()
{
    int a[] = {1,2,3,4,5,6},value,index;
    create(a,6);
    display(first);

    printf("\n Enter the Value to be inserted");
    scanf("%d",&value);
    printf("\n Enter the index to insert");
    scanf("%d",&index);


    Insert(first, value ,index);


    return 0;

}
