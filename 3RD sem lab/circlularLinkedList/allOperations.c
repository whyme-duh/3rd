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
void insertend(int);
void insertAtSpicifiedPosition();
void insertAfterSpecificElement();
void deleteFirstElement();
void deletespecifiednode();


 

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Enter item at beginning \n2. Enter item atnEnd\n3 Inset At Specified Postion \n4. Insert after specific element \n5. Delete First Element \n6. Delete Specified Element \n7.Display\n0. Exit");
        printf("\nEnter Choice 0-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                insert(n);
                break;
            
           case 2:
                printf("\nEnter number ");
                scanf("%d", &n);
                insertend(n);
                break;
            
           
            case 3:
				insertAtSpicifiedPosition();
                break;
            
            case 4:
                insertAfterSpecificElement();
                break;
			case 5:
                deleteFirstElement();
				break;
            case 6:
                deletespecifiednode();
                break;

            case 7:
                display();
                break;
            default:
                printf("You have entered wrong input");
                break;
        }
    }while (ch != 0);
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

 


void insertend(int item){
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
    }

    

    while(temp->next!=head)    
        {
            temp=temp->next;
        }
        
    temp->next=new_node;
    new_node->next=head;
        
        
}
    

 



 void insertAtSpicifiedPosition()
{
    int n,p,count;
    count=0;
    printf("Enter Specified Position:");
    scanf("%d", &p);
    printf("\nEnter number ");
    scanf("%d", &n);
    
    struct node *temp,*currentnode,*temp1;
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = n;
    
 
    temp=head;
    while (temp->next!= head)
        {
            count=count+1;
            if(count==p)
            {
                currentnode=temp;
                temp1=temp->next;
            
                currentnode->next=new_node;
                new_node->next=temp1;
            }
        
            temp =temp->next;
        
            
        }
    
    
}
void insertAfterSpecificElement()
{

    int item,position,f=0;

    struct node *temp=NULL,*currentposition=NULL; 
    struct node *ntemp1 = malloc(sizeof(struct node));
        
    printf("Enter Element after:");
    scanf("%d", &position);
    printf("\nEnter number ");
    scanf("%d", &item);
    ntemp1->data = item;

    temp=head;

    while(temp->next!=head)
    {
        if (temp->data==position)
            {
            currentposition=temp;
            
            ntemp1->next=temp->next;
            currentposition->next=ntemp1;
                        
            f=1;
        }
     
        temp=temp->next;
    }
    if(f==0)
    {
        printf("Given node is not found in the list or It is Last Node!!! Insertion not possible!!!");
    } 

}
 
void deleteFirstElement()

{
     struct node *temp1=NULL,*temp2=NULL;
     
     if (head==NULL)
     {
         printf("List is Empty!!! Deletion is not possible");
     }
    else
    {
       
       temp1=head;
       temp2=head;
       
       if(temp1->next==head)
       
       {
        head=NULL;
        free(temp1);
           
           
       }
       else
       {
           
           while(temp1->next!=head)
           {
               
              temp1=temp1->next; 
               
           }
           
           
           head=temp2->next;
           temp1->next=head;
           
           free(temp2);
           
       }
       
       
       
       
   }
   
}
    
void deletespecifiednode(){
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
        if (temp->next == head)
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
            temp1 = temp1->next;
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