#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, sum = 0 , * ptr;
	float avg;
	printf("Enter the limit of the numbers : ");
	scanf("%d", &n);
	
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL){
		printf("Memory is not allocated");
		exit(0);
	}

	printf("Enter the numbers: ");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
		sum += *(ptr + i);
		avg = sum /2;
	}
	printf("SUM and average are  : %d and %f", sum, avg);
	 return 0;
}