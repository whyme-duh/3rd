// forward difference : newton
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 15
int main(){
	int i ,j ,n;
	float xp, s, h, v ,p ,x[MAX],fx[MAX],fd[MAX];
	char q;
	printf("\n Enter the no. of data pairs : ");
	scanf("%d", &n);
	printf("\n ENTER data pairs x(i) and values f(i) (one set in each line:)");
	for(i =1; i<=n; i++){
		scanf("%f %f", &x[i], &fx[i]);
	}
	h = x[2] - x[1];
	do{
		printf("\n INPUT x at which interplation is needed:");
		scanf("%f", &xp);
		s =(xp-x[1])/h;
		p =1;
		v = fx[1];
		for(i=1; i<=n ; i++){
			fd[i] = fx[i];
		}
		for(i=1; i<=n-1;i++){
			for(j=1; j<=n-i;j++){
				fd[j]= fd[j+1]-fd[j];
			}
			p =p*(s-i+1)/i;
			v = v + p*fd[1];	
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