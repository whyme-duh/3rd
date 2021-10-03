// Newton Divied Difference Table

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 15
int main(){
	int i , j ,k , n;
	float x[MAX], f[MAX], a[MAX] ,d[MAX][MAX], xp, diff ,sum , p;
	char q;
	printf("\n Input number of data points : ");
	scanf("%d" , &n);
	printf("\n Input values of x and f(x) one set on each line : " );
	for(i = 1; i<=n; i++){
		scanf("%f %f", &x[i], &f[i]);
	}
	for(i=1; i<=n;i++){
		d[i][1] = f[i];
	}
	for(j=2; j<=n; j++){
		for(i =1; i<=n-j+1;i++){
			d[i][j] = (d[i+1][j-1] - d[i][j-1]) / (x[i+j-1]- x[i]);
		}
	}
	for(j=1; j<=n;j++){
		a[j] =d[1][j];
	}
	do{
		printf("\n Input xp where derivative is required: ");
		scanf("%f", &xp);
		diff= a[2];
		for(k =3 ; k<=n ;k++){
			sum = 0.0;
			for(i = 1; i<=k-1;i++){
				p =1.0;
				for(j=1; j<=k-1; j++){
					if(i !=j){
						p =p * (xp - x[j]);
					}
				}
				sum += p;
			}
			diff = diff + a[k] * sum;
		}
		printf("\n Derivative ar x = %f is %f", xp, diff);
		printf("\n Do you want to input another value ? (y/n) : ");
		scanf("%c", &q);
	}
	while (q == 'y');
	getch();
	return 0;
	
}