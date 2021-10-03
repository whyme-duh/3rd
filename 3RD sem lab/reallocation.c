#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i,   * ptr;
	printf("Enter the limit of the numbers : ");
	scanf("%d", &n);
	int s = n;
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL){
		printf("Memory is not allocated");
		exit(0);
	}

	printf("Enter the numbers: ");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("enter the new size : ");
	scanf("%d", &n);

	ptr =realloc(ptr, n * sizeof(int));
	printf("Memory reallocated.");
	printf("Enter elements : ");
	for(i = s; i< n ;i++){
		scanf("%d", ptr + i);
	}
	printf("the elements are : ");
	for( i = 0; i < n; i++)
	{
		printf("%d", *(ptr + i));
	}
	free(ptr);
	return 0;
	
}