#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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



int Pop()
{
    struct Node *t;
    char x =-1;

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

int isOperand(char x)
{
 if(x=='+' || x=='-' || x=='*' || x=='/')
    return 0;
 else
    return 1;

}

int pre(char x)
{
 if(x=='+' || x=='-')
    return 1;
 else if(x=='*' || x=='/')
        return 2;
 return 0;
}


char * ToPostfix( char *infix)
{
    char *postfix;
    int i=0,j=0;

    int length = strlen(infix);

    postfix=(char *)malloc((length+2)*sizeof(char));


    while(infix[i] != '\0')
    {
       if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
     else
       {
            if(pre(infix[i])>pre(top->data))
                Push(infix[i++]);
            else
            {
                postfix[j++]=Pop();
            }
        }

    }

    while(top !=NULL)
        postfix[j++] = Pop();


    postfix[j] = "\0";
    return postfix;
}




int main()
{
   char *infix="a+b";

   Push("#");
   char *postfix = ToPostfix(infix);

   printf("\n To Postfix %s", postfix);

    return 0;

}
