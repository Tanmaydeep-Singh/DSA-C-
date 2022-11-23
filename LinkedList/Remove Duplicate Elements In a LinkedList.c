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

void Delete( struct Node *p, int index)
{
        struct Node *q;
        int x = -1;

      for(int i=0 ; i<index-1 ; i++)
        {
            q=p;
            p=p->next;
        }

        q->next = p->next;
        x = p->data;
        free(p);

        removeDuplicate(first);


}



int removeDuplicate(struct Node *p)
{
    struct Node *t,*q=NULL;
    int value = p->data,index=1;

    while(p->next)
    {
        index++;

        if( value == p->next->data)
        {

            Delete(first,index);
        }

        p=p->next;
        value=p->data;
    }
    return(p);





}


int main()
{
    int index, value;

//printf("\n Enter the value and index for the element to be inseted \n");
//scanf("%d%d",&value,&index);

    Insert(first,0,0);
    Insert(first,1,1);
    Insert(first,2,2);
    Insert(first,2,3);
    Insert(first,5,4);
    Insert(first,5,5);
    Insert(first,3,6);
    Insert(first,4,7);
    Insert(first,5,8);
    Insert(first,5,9);
    Insert(first,5,10);

    display(first);

    removeDuplicate(first);






}

