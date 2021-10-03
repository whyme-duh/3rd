//insert at beginning and end and specified in Doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

struct node *head=NULL; 

void display();
void insert_Beginning(int);
void insert_End(int)
void insertsposition();

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Doubly Linked List Menu\n1. Enter item at beginning \n2. Display\n0. Exit");
        printf("\nEnter Choice 0-2? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                insert_Beginning(n);
                break;
            
            case 2:
                display();
                break;
        }
    }while (ch != 0);
}

void insert_Beginning(int item)
{
   
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
	// for the first node in the list 
	if (head==NULL)
	{
                     
		head=nptr;
		nptr->next=NULL;
		nptr->previous=NULL;
	}

    else
    {
		nptr->previous=NULL;
		nptr->next=head;
		head->previous=nptr;    
		head=nptr;
    }
}

void insertsposition()

 
{
    int item,position,f=0;
    
   struct node *temp1=NULL,*temp2=NULL; 
    struct node *nptr = malloc(sizeof(struct node));
        
    printf("Enter Element after:");
    scanf("%d", &position);
     printf("\nEnter number ");
     scanf("%d", &item);
     nptr->data = item;
    
     if (head==NULL)
     {
                     
                 head=nptr;
                 nptr->next=NULL;
                 nptr->previous=NULL;
      }
     
     
     
     temp1=head;
    
    while(temp1->next!=NULL)
    
     {
             
           if (temp1->data==position)
     
        {
        temp2=temp1->next;
            
           
           
           
           
            f=1;
            
        }
     
          
          
              temp1=temp1->next;
              
        
         
     }
    if(f==0)
    {
        printf("Given node is not found in the list or It is Last Node!!! Insertion not possible!!!");
    } 
}

 
void insert_End(int item)
{
    
    struct node *temp=NULL;
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    
  
     if (head==NULL)
     {
                     
                 head=nptr;
                 nptr->next=NULL;
                 nptr->previous=NULL;
      }

 

    else
    
    {
        
        temp=head;
        
        while(temp->next!=NULL)
        {
            
        temp=temp->next;
            
        }
        
       nptr->previous=temp;
       nptr->next=NULL;
       temp->next=nptr;
       
       
    }
    
    
    
}
 

 

 



void display()
{
    struct node *temp=NULL;
    if(head==NULL)
    {
        printf("Link List is empty");
    }
    
    else
    {
		temp=head;
		while (temp!=NULL)
		{
			printf("\n%d", temp->data);
			temp =temp->next;
		}
	}
}