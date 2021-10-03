// insert the element from begining and deleting the given specified node


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
void delSpecifiedNode();


 

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Enter item at beginning \n2.Display\n3 Delete Specified Node 0. Exit");
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
				delSpecifiedNode();
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
void delSpecifiedNode(){

    struct node *temp,*ptr;

	// to check if the list is empty
	if (head == NULL){
		printf("\nList is empty");
		return;
	}
	else
	{
		int p,count;
		count=1;
		printf("Enter position of Node :");
		scanf("%d", &p);
		temp=head;
		//loop until it  reaches the given node
		while (count < p)
			{
				ptr=temp;
				temp =temp->next;
				count++;
			}
		ptr->next = temp->next;
		free(temp);
	}
}
     