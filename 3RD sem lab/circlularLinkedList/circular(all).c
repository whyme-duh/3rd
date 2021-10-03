//WAP to insert at beginning and insert at last,delete at beginning and delete at last and display the stack using circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;


void insrtfirst()
{
	int x;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&x);
	temp->data=x;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insrtlast()
{
	struct node *temp1,*temp2;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter nodal value:");
	scanf("%d",&temp1->data);
	temp1->next=NULL;
	if(head==NULL)
	{
		head=temp1;
		return;
	}
	else
	{
		temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp1->next=NULL;
		temp2->next=temp1;
	}
	
}
void display()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List empty :( ");return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}
void del()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List Empty.");return;
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void dellast()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List empty");
		return;
	}
	else
	{
		if(head->next==NULL)
		{
			temp=head;
			head=NULL;
			free(temp);
			return;
		}
		else
		{
			temp=head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}
	}
	
}
int main()
{
		int ch;
		while(1)
		{
			printf("\n\t1.Insert at First\n\t2.Insert at last\n\t3.Display\n\t4.Delete\n\t5.Delete last\n\t6.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					insrtfirst();
					break;
				case 2:
					insrtlast();
					break;
				case 3:
					display();
					break;
				case 4:
					del();
					break;
				case 5:
					dellast();
					break;
				case 6:
					exit(1);
					break;
				default: 
					printf("invalid choice..");
			}
		}
		getch();
		return 0;
}