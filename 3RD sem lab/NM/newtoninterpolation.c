#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 15
int main(){
	int i ,j ,n;
	float xp, fp, sum ,pi ,x[MAX],f[MAX], a[MAX],d[MAX][MAX];
	char q;
	printf("\n Enter the no. of data pairs : ");
	scanf("%d", &n);
	printf("\n ENTER data pairs x(i) and values f(i) (one set in each line:)");
	for(i = 0; i<n; i++){
		scanf("%f %f", &x[i], &f[i]);
	}
	// CONSTRUCT DIVIDENT DIFFERENCE TABLE 
	for(i =1; i<=n ;i++){
		d[i][1] = f[i];
		
	}
	for(j = 2; j<=n ;j++){
		for(i = 1; i<=n-j+1;i++ ){
			d[i][j]= (d[i+1][j-1]- d[i][j-1])/(x[i+j-1]- x[i]);
		}
	}
	// set the coefficents of interpolataion polunomial
	for(j = 1;j<=n ; j++){
		a[j] = d[1][j];

	}
	//COMPUTE INTERPOLATON VALUE
	do{
		printf("\n INPU x at which interplation is needed:");
		scanf("%f", &xp);
		sum =a[1];
		for(i=2; i<=n ; i++){
			pi=1.0;
			for(j=1; j<=i-1;j++){
				pi = pi*(xp-x[j]);
				sum = sum +a[i]*pi;
			}
		}

		fp = sum;
		//RESULTS 
		printf("\n Interpolated function value at x = %f is %f",xp,fp);
		printf("\n Do you want to continue ?(y/n): ");
		scanf("%s", &q);
	}
	while(q == 'y');
	getch();
	return 0;
	
}