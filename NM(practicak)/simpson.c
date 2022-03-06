// simpson 1/3 rule

#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	// return (sin(x) * sin(x) - 2*x * sin(x) + 1);
	return exp(x) / x;
}
int main(){
	float  a, b ,sum = 0.0, n ;
	float h, x, ans;
	printf("Enter the value of a, b and n: ");
	scanf("%f %f %f" , &a, &b ,&n);
	h = (b-a)/n;
	for (int i = 1; i <= n/2 ; i++){
		x = a - h+ 2*h*i;
		sum += 4*f(x);
		if (i != n/2){
			sum += 2*f(x+h);
		}
	}
	
	sum += f(a) + f(b);

	ans = sum * (h/3);
	printf("The approximate vallue of the integral equal to %f", ans);
	getch();
	return 0;

}