//C program to reverse a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
node *head=NULL;

node * create()
{
node *new,*current,*head1=NULL;
char ch;
do
{
new=(node*)malloc(sizeof(node));
new->next=NULL;
printf("enter data");
scanf("%d",&new->data);
if(head1==NULL)
{
head1=new;
current=new;
}
else
{
current->next=new;
current=new;
}
printf("do u wish to continue?");
scanf(" %c",&ch);
}while(ch=='y');
return(head1);
}


int count(node *head)
{
int c=0;
node *current;
current=head;
while(current!=NULL)
{
c++;
current=current->next;
}
return(c);
}


void display(node * head)
{
 node *current;
  current=head;
  while(current!=NULL)
  {
  printf("%d->",current->data);
  current=current->next;
  }
printf("NULL");
 }

void  reverse(node *head)
{
  node *current,*next1,*prev=NULL,*head1=NULL;
current=head1;
while(current->next!=NULL)
{
  next1=current->next;
  current->next=prev;
  prev=current;
  current=next1;
}
 head1=prev;
display(head1);
}

main()
{
int n;
while(1)
{
printf("\nmenu\n");
printf("1.create\n2.count\n3.display\n4.reverse\n5.exit\n");
printf("enter choice");
scanf("%d",&n);
switch(n)
{
case 1:head=create();
break;
case 2:printf("no of nodes is %d",count(head));
break;
case 3:display(head);
break;
case 4:reverse(head);
break;
case 5:exit(0);
break;
default:printf("wrong choice\n");
  break;
}
}
}
