#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL; ///first pointer



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
     t->data=value;


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
    int operation,condition=1,value,index;
    while(condition)
    {
    printf("\n Enter \n \t 1: To inset an element in the Linked List \n \t 2: To display the elements of Linked List. \n \t 0: To Exit Program \n\n");
    scanf("%d",&operation);

    switch(operation)
    {
        case 0:
            return 0;
            break;

        case 1:
             printf("\n Enter the Value to be inserted");
            scanf("%d",&value);
            printf("\n Enter the index to insert");
            scanf("%d",&index);
            Insert(first, value ,index);
            break;

        case 2:
            display(first);
            break;

        default:
            printf("\n Invalid Option \n");
    }

    }



    printf("\n Enter the index to insert");
    scanf("%d",&index);


    Insert(first, value ,index);

    return 0;

}
