//approximation of the root using Newton Raphsons


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 0.0000001

float f(float x){
	return x*sin(x) +cos(x);
}
float fd(float x){
	return x*cos(x);
}
int main(){
	float x0, x1;
	int n = 0;
	do{
		printf("enter a valid initial points x0  : \n");
		scanf("%f", &x0);
	}
	while (fd(x0) == 0);
	x1= x0 - (f(x0)/fd(x0));
	while (fabs((x1- x0)/x1)>EPS){
		n++;
		x0 = x1;
		x1 = x0 - (f(x0)/fd(x0));
		if(f(x1)== 0){
			break;
		}
	}

	
	printf("The approximate root if given function is %f with %d number of iteration", x1,n);
	return 0;
}
