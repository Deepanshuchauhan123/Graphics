#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>

int main(void)
{
	int gd,gm,errorcode,x1,y1,x2,y2,x,y,p;

	clrscr();
	printf("\nEnter X1: ");
	scanf("%d",&x1);
	printf("\nEnter Y1: ");
	scanf("%d",&y1);
	printf("\nEnter X2: ");
	scanf("%d",&x2);
	printf("\nEnter Y2: ");
	scanf("%d",&y2);


	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	errorcode=graphresult();
	if(errorcode !=grOk)
	{
		printf("%s",grapherrormsg(errorcode));
		getch();
		exit(1);
	}
	x=x1;
	y=y1;
	putpixel(x1,y1,YELLOW);
	p=2*(y2-y1)-(x2-x1);

	while(x < x2)
	{

		if(p < 0)
			p=p+2*(y2-y1);
		else
		{
			y++;
			p = p+2*(y2-y1)-2*(x2-x1);
		}
		x++;
		putpixel(x,y,YELLOW);
		delay(10);
	}


 getch();
 closegraph();
 return 0;

}