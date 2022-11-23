/// In this , we check if an equation have complete paranthesis or not.
/// For example, ((a+b) * (c-d))
/// The given equation have proper number of parantheses.

#include<stdio.h>
#include<stdlib.h>

struct Node {
char data;
struct Node *next;
}*top =NULL;

void Push( char x)
{
    struct Node *t;

    t = (struct Node *)malloc(sizeof(struct Node));
    if( t == NULL)
    {
        printf("\n Stack Is Full \n");
    }
    else
    {
        t->data = x;
        t->next=top;
        top=t;
    }
}

void Pop()
{
    struct Node *t;
    char x;

     if( top == NULL)
     {
         printf("\n The Stack Is Empty. \n");
     }
     else
     {
         t= top;
         top=top->next;
         x =t->data;
         free(t);
     }
     return x;
}

void Display()
{
    struct Node * p;

    p= top;
    while( p != NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}


int isBalanced( char *exp)
{
    int i;

    for( i = 0 ; exp[i] != '\0' ; i++)
    {
        if( exp[i] == '(' )
            Push(exp[i]);
        else
            if( exp[i] == ')')
        {
            if( top == NULL)
                return 0;
            Pop();
        }
    }
    if( top == NULL)
        return 1;
    else
        return 0;
}




int main()
{
   char *exp="((a+b)*(c+d))";

   if(isBalanced(exp))
        printf("\n The Equation Is Balanced");
   else
        printf("\n The Equation Is Not Balanced");


}
