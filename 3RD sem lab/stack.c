#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10
void push();
int pop();
void transverse();
int stack[MAXSIZE];
int Top = -1;
int main(){
	int choice;
	char ch;
	do{
		printf("\n 1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.TRANSVERSE");
		printf("\n Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:push();
			break;
		case 2: printf("\n the deleted element is %d", pop());
			break;
		case 3: transverse();
			break;
		
		default:
			printf("\n You have entered Wrong Choice");
		}
		printf("\n Do you wish to continue ?(Y/N) :");
		fflush(stdin);
		scanf("%c", &ch);
	}
	while(ch == 'Y' || ch ==  'y');
	return 0;
}
void push(){
	int item;
	if(Top == MAXSIZE -1){
		printf("\n The Stack is Full ");
		getch();
		exit(0);
	}
	else{
		printf("Enter the element to be inserted : ");
		scanf("%d", &item);
		Top= Top + 1;
		stack[Top] = item;
	}
}
int pop(){
	int item;
	if(Top == -1){
		printf("The stack is Empty ");
		getch();
		exit(0);
	
	}
	else{
		item = stack[Top];
		Top = Top -1;
	}
	return item;
}
void transverse(){
	int i ;
	if(Top == -1){
		printf("The stack is Empty ");
		getch();
		exit(0);
	
	}else{
		for(i = Top ; i>= 0 ; i--){
			printf("transverse the element");
			printf("\n %d", stack[i]);
		}
	}
}