#include<graphics.h>
#include<math.h>
#include<conio.h>

int DDA(int x1, int y1, int x2, int y2){
	float m, steps, i =0;
	
	float dx = x2- x1;
	float dy = y2- y1;
	if (dx>dy){
		steps = abs(dx);
	}
	else{
		steps = abs(dy);
	}
	float a = dx / steps;
	float b = dy / steps;
	
	float X = x1;
	float Y = y1;
	
	
	while(i<=steps){
		putpixel(round(X),round(Y), BLUE);
		X += a;
		Y += b;
		i += 1;
		delay(100);
	}
	

	
}
int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	int x1, y1, x2, y2, dx, dy ;

	printf("enter the end points fro x1 and x2: ");
	scanf("%d %d", &x1, &x2);
	printf("enter the end points fro y1 and y2: ");
	scanf("%d %d", &y1, &y2);
	DDA(x1, y1, x2, y2);
	
	getch();
	closegraph();
	return 0;
	
}
