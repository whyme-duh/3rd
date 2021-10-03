#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.71828

float f(float x){
	// return (sin(x) * sin(x) - 2*x * sin(x) + 1);
	return pow(e,-pow(x,2));
	// return x * x *x + 1;

}
int main(){
	float  a, b ,sum = 0.0, n ;
	float h, x, ans;
	printf("Enter the value of a, b and n: ");
	scanf("%f %f %f" , &a, &b ,&n);
	h = (b-a)/n;
	for (int i = 1; i < n; i++){
		x = a + i * h;
		if(i % 3 == 0){
			sum += 2 * f(x);
		}
		else{
			sum += 3 * f(x);
		}
	}
	
	sum += f(a) + f(b);

	ans = sum * ( 3*h/8);
	printf("The approximate vallue of the integral equal to %f", ans);
	getch();
	return 0;

}