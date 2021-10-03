// linear fitting
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 20

int main(){
	int i,n;
	float x[MAX],y[MAX];
	float sumx = 0.0 , sumy = 0.0, sumxx = 0.0,sumxy = 0.0, xmean, ymean,denom, a,b ;
	printf("\n Enter the no. of data pairs : ");
	scanf("%d", &n);
	printf("\n ENTER data pairs x and y values (one set in each line) :");
	for(i =1; i<=n; i++){
		scanf("%f %f", &x[i], &y[i]);
	}
	// computing constatns a and b
	for(i = 1; i<=n; i++){
		sumx += x[i];
		sumy += y[i];
		sumxx += x[i]*x[i];
		sumxy += x[i] * y[i];
	}
	xmean = sumx/ n;
	
	ymean = sumy/n;
	denom = n*sumxx- sumx * sumx;
	b = (n*sumxy -sumx* sumy)/denom;
	a = ymean- b*xmean;
	printf("\n The line that is fit to the given data is y = %f + %fx", a,b);
	return 0;
	
}