#include <stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();

 

int items[SIZE], front = 0, rear = -1;

 

int main() {
  int n;
  char w;
  do{
    //enQueue 5 elements
    printf("enter the element you want to enter in queue.(until 5): ");
    for(int i = 0 ;i<=SIZE; i++){
      scanf("\n %d", &n);
      enQueue(n);
    }
    // 6th element can't be added to because the queue is full
    enQueue(6);
    display();


    //deQueue removes element entered first i.e. 1
    deQueue();


    //Now we have just 4 elements
    display();
    printf("Do you want to redo it ? (Y/N) :" );
    scanf("%s", &w);
    }
	while(w =='Y' || w =='y');
  
  
      //deQueue is not possible on empty queue
	return 0;
  

}

 

void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

 

void deQueue() {
  if (rear == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front == rear)
      front =0;
      rear = -1;
  }
}

 

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}