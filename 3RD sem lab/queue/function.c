#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int cq[10];
int front=-1,rear=0;
int choice;
int cqinsert();
int cqdelete();
int cqdisplay();
char ch;
void main()
{
	do 
	{
		printf("........1. Insert.......\n");
		printf("........2. delete.......\n");
		printf("........3. display.......\n");
		printf("........4. exit.......\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		scanf("%d",&choice);
		switch(choice)
		{
		case 1 :
			cqinsert();
			break;
		case 2 :
			cqdelete();
			break;
		case 3 :
			cqdisplay();
			break;
		case 4: 
			return;
		}		
			}
		while(choice!=4);		
}
int cqinsert()
{
	int num;
	if(front==(rear+1)%MAXSIZE)
	{
		printf("queue is full\n");
		}
		else
		{
			printf("enter the element to be inserted\n");
			scanf("%d",&num);
			if(front==-1)
			front=rear=0;
			else
			rear=(rear+1)%MAXSIZE;
			cq[rear]=num;
		}
		}
		int cqdelete()
		{
			int num;
			if(front==-1)
			{
				printf("queue is empty\n");
			}
			else
			{
				num=cq[front];
				printf("deleted element is=%d\n",cq[front]);
				if(front==rear)
				front=rear=-1;
				else
				front=(front+1)%MAXSIZE;
			}
			return(num);		
		}
int cqdisplay()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
		
	}
	
	else
	{
		printf("\n the status of he queue\n");
		for(i=front; i<=rear; )
		{
			printf("%d",cq[i]);
		}
	}
	if (front>rear)
	{
		for(i=front; i<MAXSIZE; i++)
		{
			printf("%d",cq[i]);
		}
		for(i=0; i<=rear; i++)
		{
			printf("%d",cq[i]);
		}
	}
	printf("\n");
}