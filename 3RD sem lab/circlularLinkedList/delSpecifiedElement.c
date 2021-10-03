//insert at beginning,end,  specified postion, after specified elemetn ,deleting end element and deleting first element in circular linked list


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
void delspecifiedElement();


 

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Enter item at beginning \n2.Display\n3 Delete Specified Element 0. Exit");
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
				delspecifiedElement();
                break;
			default:
				printf("Wrong Input");
				break;

		}
	}while(ch != 0);
}

void insert(int item)
{
    struct node *temp=NULL; 
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = item;
    
    if (head==NULL)
    {
                     
        head=new_node;
        new_node->next=new_node;
        
    }

 

    else
    {
        temp=head;
    
        while(temp->next!=head)
            {
        
                temp=temp->next;
            
            }
            new_node->next=head;
            head=new_node;

            temp->next=head;
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
        
   
    
    
    printf("\n%d", head->data);
     
     temp =head->next;
    
    while (temp!= head)
    {
        printf("\n%d", temp->data);
        temp =temp->next;
    }

    }
}
void delspecifiedElement(){
    int value;
	struct node *temp = head, *temp1;    
	printf("Enter the node: ");
	scanf("%d",&value);
	// checks if the list is empty
	if (head == NULL)
        return;
  
    // Find the required node
    while (temp->data != value) 
    {
        if (temp->next == head) // if the temp reaches the last node and does not find the element
        {
            printf("\nGiven node is not found"
                   " in the list!!!");
            break;
        }
  
        temp1 = temp;
        temp = temp->next;
    }
  
    // Check if node is only node
    if (temp->next == head) 
    {
        head = NULL;
        free(temp);
        return;
    }
  
    // If more than one node, check if
    // it is first node
    if (temp == head) 
    {
        temp1 = head;
        while (temp1->next != head)
            {temp1 = temp1->next;}
        head = temp->next;
        temp1->next = head;
        free(temp);
    }
  
    // check if node is last node
    else if (temp->next == head && temp == head) 
    {
        temp1->next = head;
        free(temp);
    }
    else 
    {
        temp1->next = temp->next;
        free(temp);
    }
}
     