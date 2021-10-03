#include<iostream>
#include<graphics.h> 
#include<conio.h>
int main()
{
	int gd = DETECT , gm;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	char another[] ="C:\\TC\\BGI";
	initgraph(&gd, &gm, another);

	circle(200, 200, 100);
	getch();
	closegraph();
	return 0;
}	