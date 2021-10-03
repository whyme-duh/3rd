//Delete first,last and specified element from linked list

 


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
void deletefirstelement();
void deletelastelement();
void deletespecifiedelement();

 


int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3 Delete first element\n4 Delete Last element\n5 Delete specified element\n0. Exit");
        printf("\nEnter Choice 0-5? : ");
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
            case 3:
                deletefirstelement();
                break;
       
       		case 4:
                deletelastelement();
                break;
       		case 5:
                deletespecifiedelement();
                break;
        }
    }while (ch != 0);
}

 

void insert(int item)
{
     struct node *temp;
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    
 if (head==NULL)
  {
      
  nptr->next=NULL;
  head=nptr;
  }

 

else
{
 temp=head;
   while (temp->next!= NULL)
    {
        
        temp =temp->next;
    }

 

      temp->next=nptr;
      nptr->next=NULL;
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

 

 

void deletefirstelement()
{
	
    
    struct node *temp;
    
        
        if(head==NULL)
        
        {
            
            printf("Empty Linked List");
        }
        else
        {
            
        
    
        temp=head;
        head=head->next;
    
        printf("Deleted item=%d",temp->data);
        free(temp);
    
        }
    
    
    }
    
void deletelastelement(){
	struct node *temp,*temp1;    
	
	if(head==NULL)
	
	{
		
		printf("Empty Linked List");
	}
	
	else
	{
		temp=head;
		while (temp->next != NULL)
		{
			temp1=temp;
			
			temp =temp->next;
			
		
		}
		temp1->next=NULL;
		free(temp);
	
	}
}
    
void deletespecifiedelement()
{
    struct node *temp,*temp1,*ptr;    
    int value;
    
    printf("Enter Element to delete");
    scanf("%d",&value);    
        
        
                
        if(head==NULL)
        
        {
            
            printf("Empty Linked List");
        }
        
    else
    
    {
        temp=head;
        while(temp->next!=NULL)    
        {
            
            
            if(temp->data==value)
                {
                    
                
                printf("deleted item=%d",temp->data);
                
                    
                temp1->next=temp->next; 
                
                temp->next = NULL;
                            
                }
            
            else
            {
            temp1=temp;    
            temp=temp->next;    
                
                            
                
            }
            
            
           
    }
    
            
        
    }
    free(temp);
    
    
       
}