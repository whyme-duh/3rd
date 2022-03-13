//Delete first element from linked list

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
void update_element(int data);
 

int main()
{
    int n, ch,element;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3 Delete first element\n 4. Update \n0. Exit");
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
            
	            deletefirstelement();
	            break;
	        case 4:
	        	printf("\nEnter the element to be updated in the list : ");
				scanf("%d",&element);
	        	update_element(element);
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
void update_element(int data)
{
int count = 0;
int update_ele;
struct node* temp;
temp = head;
while(temp != NULL) // Start traversing from head node
{
if(temp -> data == data)
{
printf("\nEnter the new data to update the old data : ");
scanf("%d",&update_ele);
temp -> data = update_ele; // change the element in the list
}
else
{
count = count + 1;
temp = temp -> next;
}}}

 

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
    
    temp=head;
    head=head->next;
    
    printf("Deleted item=%d",temp->data);
    free(temp);
    
    
    
    
    }
