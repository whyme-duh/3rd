//Delete first,last and specified node from linked list

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
void deletespecifiednode();

 


int main()
{
    int n, ch;
    do
    {
        printf("hello");
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3 Delete specified node\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
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
                deletespecifiednode();
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

    
void deletespecifiednode(){
	int value;
	struct node *temp, *ptr;    
	printf("Enter the node: ");
	scanf("%d",&value);
	
	if(temp==NULL)
	{
		printf("Empty Linked List");
        return;
	}
	
	else
	{
		if (temp != NULL && temp->data == value){
			head = temp->next; //chanes head 
			free(temp);
			return;
		}
		temp=head;
		while (temp != NULL && temp->data != value)
		{
			ptr=temp;
			temp =temp->next;
			
		
		}
		ptr->next = temp->next;
		free(temp);
	
	}
}
    
