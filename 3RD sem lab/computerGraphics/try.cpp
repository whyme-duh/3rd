#include<iostream>
#include<graphics.h> 
#include<conio.h>
int main()
{
	int gd = 0, gm = VGA;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	char another[] ="C:\\TC\\BGI";
	initgraph(&gd, &gm, data);

	circle(200, 200, 100);
	getch();
	closegraph();
	return 0;
}	