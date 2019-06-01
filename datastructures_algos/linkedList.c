/*create,display,count,insert,delete operations in linked list
Ramya Iyer
roll no: 20*/
#include<stdio.h>
#include<stdlib.h>
	typedef struct node
	{
	int data;
	struct node *next;
	}node;
	node *head=NULL;

	node *create()
	{
	node *new,*current;
	char ch;
	do
		{
		new=(node*)malloc(sizeof(node));
		new->next=NULL;
		printf("enter value");
		scanf("%d",&new->data);
		if(head==NULL)
		{   
			head=new;
			current=new;
	    }
		else
		{
			current->next=new;
			current=new;
		}
		printf("do u want to continue n/y?");
		scanf(" %c",&ch);
	}while(ch=='y');
			return head;
		}
		
		
		
		
		void display(node*head)
		{
			node *current;
			current=head;
			printf("your linked list is:\n");
		    while(current!=NULL)
			{
				printf("%d-->",current->data);
			    current=current->next;
			}
			printf("NULL");
		}
		
		
		int count(node *head)
		{
			node *current;
			int c=0;
			current=head;
			while(current!=NULL)
			{
			  current=current->next;
				c++;
			}
			
			printf("no of nodes is %d",c);
		    return c;	
	    }
		
		
		
		node*delete(node*head)
		{
		  node*current,*prev;
			int val;
			printf("enter the value u want to delete");
			scanf("%d",&val);
			current=head;
			while(current!=NULL)
			{
				if(val==current->data)
				{
					if(val==head->data)
					{
						printf("data found");
						prev=head;
						head=head->next;
						free(prev);
						break;
					}
					else
					{
						printf("data is found");
						prev->next=current->next;
						free(current);
						break;
					}
				}
				prev=current;
				current=current->next;
			}
			if(current==NULL)
				printf("value not found");
			display(head);
			return head;
			
		}
		
		
		node*insert(node*head)
		{
			node *current,*new;
			int pos,cnt,n=1;
			new=(node*)malloc(sizeof(node));
			new->next=NULL;
			printf("\nenter the data to insert");
			scanf("%d",&new->data);
			printf("enter the position where u want to insert");
			scanf("%d",&pos);
			cnt=count(head);
			if(pos>cnt+1)
				printf("invalid position");
			else if(pos==1)
				{
					new->next=head;
				    head=new;
				}
				else
				{
					current=head;
					while(n!=pos-1)
					{
						current=current->next;
						n++;
					}
					if (current->next==NULL)
					new->next=current->next;
					current->next=new;
				}
				display(head);
				return head;
			}
					
			
			
		
		main()
		{
			int choice,cnt;
			while(1)
			{
			printf("\nmenu");
			printf("\n1.create\n2.display\n3.count\n4.delete\n5.insert\n6.exit\n");
				printf("enter ur choice");
				scanf("%d",&choice);
			switch(choice)
			{
				case 1: head=create();
					   printf("ur linked list is created");
				break;
				
				case 2: display(head);
					break;
				
				case 3: cnt=count(head);
					break;
					
				case 4: head=delete(head);
					break;
					
				case 5: head=insert(head);
					break;
				case 6: exit(0);
					break;
					
				default: printf("wrong choice");
					
				
			}
		}
	}
