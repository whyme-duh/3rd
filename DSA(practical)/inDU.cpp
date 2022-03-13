#include <stdio.h>
#include <stdlib.h>


struct node {
int data;
struct node *next;
}*head;
void createList(int n);
void update_element(int data);
void displayList();

int main()
{
int n, data, element,ch;
do{
	printf("Enter the choice :");
	printf("\n 1. Insertion \n 2. Display \n 3. Update \n 0. Exit \n");
	scanf("\t %d", &ch);
	switch(ch){
		case 1:
			printf("\nEnter the total number of nodes: ");
			scanf("%d", &n);
			createList(n);
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
	}
}
	while(ch!=0);
	return 0;
		
}
	
	


void createList(int n)
{
	struct node *newNode, *temp;
	int data, i;
	head = (struct node *)malloc(sizeof(struct node));

	if(head == NULL)
		{
		printf("Unable to allocate memory.");
		}
	else
		{
		printf("\nEnter the data of node 1: ");
		scanf("%d", &data);
		head->data = data;
		head->next = NULL;
		temp = head;
		for(i=2; i<=n; i++)
	{
	newNode = (struct node *)malloc(sizeof(struct node));
	if(newNode == NULL)
		{
		printf("Unable to allocate memory.");
		break;
	}
	else
	{
		printf("\nEnter the data of node %d: ", i);
		scanf("%d", &data);
		newNode->data = data;
		newNode->next = NULL;
		temp->next = newNode;
		temp = temp->next;
}
}
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
			printf("Cant find that number. Sorry!");
			break;
		}
	}
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
