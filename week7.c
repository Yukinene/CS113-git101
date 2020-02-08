#include<stdio.h>

//Linked Lists

//สร้างตัวแปร linklist
typedef struct node 
{
    int value;
    struct node *nextnode;
}node;

//สร้าง linklist พื้นฐาน
void createnode(node **head,int value){
 node *newnode;
 newnode =(node*)malloc(sizeof(node));
 newnode->value=value;
 newnode->nextnode=NULL;
 if(*head==NULL){
  *head=newnode;
 }else{
  while((*head)->nextnode!=NULL)(*head)=(*head)->nextnode;
  (*head)->nextnode=newnode;
 }
}

//แสดงค่าที่ใส่ในlist
void printlist(node **head){
 node *tmp=*head;
 while(tmp!=NULL){
  printf("%d->",tmp->value);
  tmp=tmp->nextnode;
 }
 printf("\n");
}

int main()
{
   node *head=NULL;
   int n ;
   scanf("%d",&n);
   while(n != -1)
   {
       createnode(&head,n);
       scanf("%d",n);
   }
   printlist(&head);
}