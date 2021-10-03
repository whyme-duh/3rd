//approximation of the root of non linear equation usin Secant Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 0.00001

float f(float x){
	return x*x*x - 3 * x + 1;
}
int main(){
	float x0, x1, x2;
	int n = 0;
	do{
		printf("enter two valid initial points x0 and x1 : \n");
		scanf("%f%f", &x0, &x1);
	}
	while (f(x0) == f(x1));
	do{
		n++;
		x2 = (x0 * f(x1) - x1 * f(x0))/(f(x1) - f(x0));
		if (f(x2) == 0){
			break;
		}
		x0 = x1;
		x1= x2;
	}
	while (fabs((x1 - x0)/x1) > EPS);
	printf("The approximate root if given function is %f with %d number of iteration", x2,n);
	return 0;
}
