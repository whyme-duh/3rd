// backward difference : newton
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 15

int main(){
	int i ,j ,n, k;
	float xp, s, h, v ,p ,x[MAX],fx[MAX],bd[MAX];
	char q;
	printf("\n Enter the no. of data pairs : ");
	scanf("%d", &n);
	printf("\n ENTER data pairs x(i) and values f(i) (one set in each line) :");
	for(i =1; i<=n; i++){
		scanf("%f %f", &x[i], &fx[i]);
	}
	h = x[2] - x[1];
	do{
		printf("\n INPUT x at which interplation is needed:");
		scanf("%f", &xp);
		s =(xp -x[n])/h;
		p =1;
		v = fx[n];   // this is the value of last function
		for(i=1; i<=n ; i++){
			bd[i] = fx[i];
		}
		for(i = n, k = 1; i >= 1,  k <n ; i--,  k++){
			for(j=n; j>=n-1;j--){
				bd[j]= bd[j]-bd[j-1];
			}
			p =p*(s+k-1)/k;
			v = v + p*bd[n];		
		}

		//RESULTS 
		printf("\n Interpolated function value at x = %f is %f",xp,v);
		printf("\n Do you want to continue ?(y/n): ");
		scanf("%s", &q);
	}
	while(q == 'y');
	getch();
	return 0;
}