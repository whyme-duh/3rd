
#include<graphics.h>
int main()
{   

	int gd=DETECT,gm;
	char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, NULL);
	int circle_x = 300, circle_y = 100, r = 50;
	int left = 220, top = 150, right = 370, bottom = 350;
	int floor_width =700, floor_height= 400;
	//this for the head
	int n = 10;
	circle(circle_x,circle_y,r );
	
	//for eyes
	circle(circle_x-25,circle_y-5,r-40);
	
	circle(circle_x+20,circle_y-5,r-40);
	//for eye lens
	circle(circle_x+20,circle_y-5,r-45);
	circle(circle_x-25,circle_y-5,r-45);
	
	

	//for the nose
	line(circle_x,circle_y,circle_x,circle_y+10);

	//for mouth
	circle(circle_x,circle_y+25,r-45);
	
	// for the body
	rectangle(left , top, right, bottom);
	for(int i =0; i<8;i++){
		rectangle(left +n , top + n, right-n, bottom -n);
		n += 10;	
	}
	
	//for the leg
	rectangle(left+20 , top+200, right -100, bottom +50);
	rectangle(left+100 , top+200, right -20, bottom +50);
	// for the floor
	line(0 ,400, 700,400);
	
	// ball
	circle(100, 300, 50);
	
	getch();
	closegraph();

}
