#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *nextnode ;
    struct node *prev;
}node;

void sort(node **head, node  **tail, node **tmp,int n)
{
    node *clone = *tail;
    if (n > (*tail)->value)
    {
        //ขอบขวา
        if((*tail)->nextnode == NULL)
        {
            (*tmp)->prev = *tail;
            (*tail)->nextnode = *tmp;
        }
        else if(((*tail)->nextnode)->value > n)
        {
            (*tmp)->nextnode=(*tail)->nextnode;
            (*tmp)->prev = *tail;
            ((*tmp)->nextnode)->prev = *tmp;
            (clone)->nextnode = *tmp ;
        }
        else
        {
            sort(&*head,&(*tail)->nextnode,&*tmp,n);
        }
        
    }
    else
    {
        //ขอบซ้าย
        if((*tail)->prev == NULL)
        {
            (*tail)->prev = *tmp;
            (*tmp)->nextnode = *tail;
            (*head) = *tmp;
        }
        else if(((*tail)->prev)->value < n)
        {
            (*tmp)->prev=(clone)->prev;
            (*tmp)->nextnode = *tail;
            (clone->prev)->nextnode = *tmp ;
            (*tail)->prev = (*tmp);
        }
        else
        {
            sort(&*head,&(*tail)->prev,&*tmp,n);
        }
        
    }
    
    
}

int main()
{
    node *head=NULL , *tmp , *tail;
    int n  ;
    scanf("%d",&n);
    while (n != -1)
    {
        if (head==NULL)
        {
            head = (node*)malloc(sizeof(node));
            head->value=n;
            tail = head;
            head->nextnode=NULL;
            head->prev=NULL;
        }
        else
        {
            tmp= (node*)malloc(sizeof(node));
            tmp->value=n;
            tmp->nextnode=NULL;
            tmp->prev=NULL;
            sort(&head,&tail,&tmp,n);
        }
        
        
        scanf("%d",&n);
    }
    for (;head != NULL;head=head->nextnode)
    {
        printf("%d\n",head->value);
    }
}