//inserting and deleteing  at beginning , end ,and specified position in Doubly linked list

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
void insert_End(int);
void insertSpecifiedPos();
void deletefirstelement();
void deleteLastelement();

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Doubly Linked List Menu\n1. Enter item at beginning \n2. Enter item at End \n3. Display\n4. Insert at Specified Position \n5 .Delete First Element \n6. Delete Last Element \n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                insert_Beginning(n);
                break;
            case 2:
                printf("\nEnter number ");
                scanf("%d", &n);
                insert_End(n);
                break;
            case 3:
                display();
                break;
            case 4:
                insertSpecifiedPos();
                break;
            case 5:
                deletefirstelement();
                break;
            case 6:
                deleteLastelement();
                break;
        }
    }while (ch != 0);
}

void insert_Beginning(int item)
{
   
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
    
    nptr->previous=NULL;
    nptr->next=head;
    head->previous=nptr;    
    head=nptr;
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
void insertSpecifiedPos(){
     
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

            temp1->next = nptr;
            nptr->previous = temp1;
            temp2->previous = nptr;

            nptr->next = temp2;
            
            f=1;
            
            
            
        }
     
          
          
        temp1=temp1->next;
              
        
         
    }
    if(f==0)
    {
        printf("Given node is not found in the list or It is Last Node!!! Insertion not possible!!!");
    } 
    
}
}


void deletefirstelement()
{
    struct node *temp;
    
    if(head==NULL)
    {
           
        printf("Linked List is empty");
    }
    
    else if(head->next==NULL)
    
    {
        
        temp=head;
        printf("Deleted Item=%d",temp->data);
    
        head=NULL;
        free(temp);
    }
    
    else
    {
        
        temp=head;
        printf("Deleted Item=%d",temp->data);
        
        head=temp->next;
        head->previous=NULL;
        free(temp);
        
    }
    
    
} 
void deleteLastelement(){
    struct node *temp;
    
    if(head==NULL)
    {
        printf("Linked List is empty");
    }
    else if(head->next == NULL){
        temp=head;
        printf("Deleted Item=%d",temp->data);
    
        head=NULL;
        free(temp);
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        printf("Deleted Item : %d", temp->data);
        temp->previous->next = NULL;
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
        temp=head;
        
        while (temp!=NULL)
        {
            printf("\n%d", temp->data);
            temp =temp->next;
        }
    }
}