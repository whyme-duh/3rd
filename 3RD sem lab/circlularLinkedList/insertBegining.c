// circulare linked listinsert at beginning

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;  

 

void display();
void insert(int);
void insertEnd(int);
 


int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Enter item \n2. Display \n3. Insert At The End \n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number at beginning: ");
                scanf("%d", &n);
                insert(n);
                break;
            
            case 2:
                display();
                break;
			
			case 3:
				printf("\nEnter number at beginning: ");
                scanf("%d", &n);
				insertEnd(n);

        }
    }while (ch != 0);
}

void insertEnd(int item){
    struct node *new_node,*temp;
	new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data = item;
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
		return;
	}
	else
	{
		temp=head->next;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->next=head;
	}
	
}
 

void insert(int item)
{
    struct node *temp=NULL; 
    struct node *new_node = malloc(sizeof(struct node)); //new node
    new_node->data = item;
    if (head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    else
      {
        temp=head;
        while(temp->next!= head)
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
    struct node *temp;
    temp = head;

    if(head==NULL)
    {
        printf("Link List is empty");
    }

    else
    {   
        while (temp->next != head)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("\n%d ", temp->data);

    }
}