// composite Trapezoidal

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.71828
float f (float x)
{
	return pow(e,-pow(x,2));
}
int main(){
	float  a, b ,sum = 0.0, n ;
	float h, x, ans;
	printf("Enter the value of a, b and n: ");
	scanf("%f %f %f" , &a, &b ,&n);
	h = (b-a)/n;
	for (int i = 1; i < n ; i++){
		x = a + h*i;
		sum += 2 * f(x);
	}
	sum += f(a) + f(b);

	ans = sum * (h/2);
	printf("The approximate vallue of the integral equal to %f", ans);
	getch();
	return 0;

}