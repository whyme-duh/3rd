// linear fitting exponential

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 10

int main(){
	int i,n;
	float x[MAX],y[MAX], u[MAX];
	float sumx = 0.0 , sumu = 0.0, sumxx = 0.0,sumxu = 0.0, xmean, umean,denom, a,b ;
	printf("\n Enter the no. of data pairs : ");
	scanf("%d", &n);
	printf("\n ENTER data pairs x and y values (one set in each line) :");
	for(i =1; i<=n; i++){
		scanf("%f %f", &x[i], &y[i]);
	}
	for(i =1; i<=n ;i++){
		u[i] = log(y[i]);
	} 
	// computing constatns a and b
	for(i = 1; i<=n; i++){
		sumx += x[i];
		sumu += u[i];
		sumxx += x[i]*x[i];
		sumxu += x[i] * u[i];
	}
	xmean = sumx/ n;
	
	umean = sumu/n;
	denom = n*sumxx- sumx * sumx;
	b = (n*sumxu -sumx* sumu)/denom;
	a = exp(umean- b*xmean);
	printf("\n The line that is fit to the given data is y = %fe^%fx", a,b);
	return 0;
	
}