#include <stdio.h>
#include <stdlib.h>


struct node {
int data;
struct node *next;
};
struct node *head = NULL;

void insertion(int );
void update_element(int data);
void displayList();
void deletefirstelement();

int main()
{
int n, data, element,ch;
do{
	printf("Enter the choice :");
	printf("\n 1. Insertion \n 2. Display \n 3. Update \n 4. Delete First Element \n 0. Exit \n");
	scanf("\t %d", &ch);
	switch(ch){
		case 1:
			printf("\nEnter the number ");
			scanf("%d", &n);
			insertion(n);
			break;
		case 2:
			printf("The items are: ");
			displayList();
			
			break;	
		case 3:
			printf("\nEnter the element to be updated in the list : ");
			scanf("%d",&element);
			update_element(element);
			break;
		case 4:
		
			deletefirstelement();
			break;
	}
}
	while(ch!=0);
	return 0;
		
}


void insertion(int n)
{
	struct node *temp;
	struct node *nptr =(struct node *) malloc(sizeof(struct node));
	int data, i;
	nptr->data = n;

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



void update_element(int data)
{
	int count = 0;
	int update_ele;
	struct node* temp;
	temp = head;
	while(temp != NULL) 
	{
		if(temp -> data == data)
			{
			printf("\nEnter the new data to update the old data : ");
			scanf("%d",&update_ele);
			temp -> data = update_ele; 
			}
		else
		{
			count = count + 1;
			temp = temp -> next;
			
		}
	}
}

void deletefirstelement()
{
    
    struct node *temp;
    
    temp=head;
    head=head->next;
    
    printf("Deleted item=%d \n",temp->data);
    free(temp);
    
    
    
    
    }

void displayList()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is empty.");
	}
	else
	{
		temp = head;
		while(temp != NULL)
		{
			printf("%d\t", temp->data);
			temp = temp->next;
		}
		printf("\n");	
	}
}
