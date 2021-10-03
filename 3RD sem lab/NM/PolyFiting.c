//Fiting a polynomial equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20

void normal(float x[MAX], float y[MAX], float c[MAX][MAX], float b[MAX], int n, int m){
	int i, j, k, l1, l2;
	for(j = 1; j<= m ; j++){
		for(k = 1; k<=m ; k++){
			c[j][k] = 0.0;
			l1 = k+ j -2 ;
			for( i =1; i<=n ; i++){
				c[j][k] += pow(x[i], l1); 
			}
		}
	}
	for(j = 1; j<= m ; j++){
		b[j] = 0.0;
		l2 = j -1;
		for( i =1; i<=n ; i++){
			b[j] += y[i] * pow(x[i], l2); 
		}
	}
	return;
}

 void gauss(int n, float a[MAX][MAX], float b[MAX] , float x[MAX]){
	int i,j ,k;
	float pivot , factor , sum;
	for( k = 1; k<= n - 1; k++){
		pivot= a[k][k];
		for(i= k+1; i<=n; i++){
			factor = a[i][k] / pivot;
			for(j = k+1;j<=n ; j++){
				a[i][j] = a[i][j] - factor* a[k][j];
				b[i] = b[i] - factor* b[k];
			}
		}
	}
	x[n] = b[n]/a[n][n];
	for (k = n-1; k >=1 ; k--)
	{
		sum = 0.0;
		for( j =k+1 ;j<=n; j++){
			sum += a[k][j] * x[j];
			x[k] = (b[k] - sum)/a[k][k];
		}
	}
	return ;	
 }


 int main(){
	 int n, mp, m, i;
	 float x[MAX], y[MAX], c[MAX][MAX] ,a[MAX], b[MAX];

	 // READING VALUES
	 printf("\n Enter the number of data points : ");
	 scanf("%d",&n);
	 printf("\n Enter degree of required polynomial: ");
	 scanf("%d", &mp);
	 printf("\n Enter x and y values9 one set on each line) : ");
	 for(i=1 ;i <=n ; i++){
		 scanf("%f %f", &x[i], &y[i]);
	 }

	 //Numer of polynomail coefficents
	 m = mp + 1l;
	//Computation of elemts of c and b
	normal(x,y,c,b,n,m);
	//Computation of coeeficents a(1) to a(m)
	gauss(m, c ,b,a);

	//printing coefficient of a(i)
	printf("\n Polynomial Coefficients \n");
	for(i =1; i<=m ;i++){
		printf("%f", a[i]);
	}
	return 0;
 }