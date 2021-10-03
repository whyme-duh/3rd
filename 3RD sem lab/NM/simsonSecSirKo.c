#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.71828

float f(float x){
	// return (sin(x) * sin(x) - 2*x * sin(x) + 1);
	// return x * x *x + 1;
	return pow(e,-pow(x,2));



}
int main(){
	float  a, b ,sum = 0.0, n ;
	float h, x, ans;
	printf("Enter the value of a, b and n: ");
	scanf("%f %f %f" , &a, &b ,&n);
	h = (b-a)/n;
	for (int i = 1; i <= n/3 ; i++){
		x = a - 2 * h + 3* h* i;
		sum += 3 *f(x);
		sum += 3* f(x+h);
		if (i != n/3){
			sum += 2*f(x+2*h);
		}
	}
	
	sum += f(a) + f(b);

	ans = sum * (3* h/8);
	printf("The approximate vallue of the integral equal to %f", ans);
	getch();
	return 0;

}