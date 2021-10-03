// first and second derivative central difference

#include<stdio.h>
#include<math.h>
#include<conio.h>

float f(float x){
	return x*x*exp(sqrt(x)) * sin(x);
}

int main() {
	float a, h, fd1, fd2;
	char q;
	do{
		printf("\n ENTER THE POINT AT WHICH DERIVATIVES ARE REQUIRED: ");
		scanf("%f", &a);
		printf("\n Enter the value of h:");
		scanf("%f", &h);
		fd1 = (f(a+h) - f(a-h))/ (2*h);
		fd2 = (f(a+h) -2 * f(a) + f(a -h)) / (h*h);
		printf("\n The first and secnd derivatives at x = %f are %f and %f respectively." , a, fd1, fd2);
		printf("\n Do you want to input another values? (y/n) : ");
		scanf("%c", &q);

	}
	while( q== 'y');
	getch();
	return 0;
}