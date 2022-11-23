#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node * next;
}*first =NULL;



int count(struct Node *p)
{int length=0;

    while(p)
    {
    length++;
    p=p->next;
    }

    return length;
}

void display( struct Node *p)
{
    while(p)
    {
        printf(" %d ",p->data );
        p=p->next;
    }
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
     return p;

}


int isLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;

    do{
        p=p->next;
        q=q->next;
         q=q?q->next:q;
    }
    while( p && q && p!=q);
    if( p == q)
        return 1;
    else
        return 0;


}


int main()
{
    int index, value;
    struct Node *t1,*t2;


    Insert(first,0,0);
    Insert(first,1,1);
    Insert(first,2,2);
    Insert(first,3,3);
    Insert(first,4,4);
    Insert(first,5,5);
    display(first);

    t1 = first->next->next;
    t2 = first->next->next->next->next->next;
    t2->next=t1;


    if(isLoop(first))
        printf(" \n LOOP TRUE");
     else
        printf("\n No LOOP");





}


