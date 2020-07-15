#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

int main(void)
{
	int gd,gm,errorcode;
	int midx,midy;
	clrscr();
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	errorcode=graphresult();
	if(errorcode != grOk)
	{
		printf("%s%s","Graphics ",grapherrormsg(errorcode));
		printf("%s","Press key");
		getch();
		exit(1);
	}

	midx=getmaxx()/2;
	midy=getmaxy()/2;

	setcolor(RED);

	//ss(pattern no. , color No.)
	setfillstyle(1,6);
	circle(midx,midy,80);
	//point inside shape x,y,color same as border
	floodfill(midx,midy,RED);
           
	//rect(x1,y1,x2,y2)
	rectangle(midx-80,midy-80,midx+80,midy+80);
	setfillstyle(1,2);
	floodfill(midx-79,midy-79,RED);

	setfillstyle(1,3);
	floodfill(midx+79,midy+79,RED);

	setfillstyle(1,4);
	floodfill(midx-79,midy+79,RED);

	setfillstyle(1,5);
	floodfill(midx+79,midy-79,RED);

	getch();
	closegraph();
	return 0;
}
