//insert at beginning
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

 

struct node *head=NULL; 

 

void display();
void insert(int);

 


int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n0. Exit");
        printf("\nEnter Choice 0-2? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                insert(n);
                break;
            
            case 2:
                display();
                break;
        }
    }while (ch != 0);
}

 

void insert(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    
	if (head==NULL)
	{
		nptr->next=NULL;
		head=nptr;
	}
	else
	{
		nptr->next=head;
		head=nptr;
	}
}

void display()
{
    struct node *temp;
    
    if(head==NULL)
    {
        
        printf("Link List is empty");
    }
    
    else
    {
        
    
    temp = head;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp =temp->next;
    }
}
}