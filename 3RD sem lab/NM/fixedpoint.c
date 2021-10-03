//approximation of the root of non linear eq using fixed point 


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 0.00001

float f(float x){
	return 5 + 0.5*sin(x);
}

int main(){
	float x0, x1;
	int n = 1;
	printf("enter an initial points x0  : \n");
	scanf("%f", &x0);
	
	x1 = f(x0);
	while (fabs((x1- x0)/x1)>EPS){
		n++;
		x0 = x1;
		x1 = f(x0);
		if(f(x1)== 1){
			break;
		}
	}

	
	printf("The approximate root if given function is %f with %d number of iteration", x1,n);
	return 0;
}
