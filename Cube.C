#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main(void)
{
	 int gd,gm,errorcode,midx,midy;
 	gd=DETECT;
 	initgraph(&gd,&gm,"C:\\TC\\BGI");
 	errorcode=graphresult();

 	if(errorcode !=grOk)
	{
  		printf("%s",grapherrormsg(errorcode));
  		getch();
  		exit(1);
 	}
 	rectangle(300,200,400,300);
 	rectangle(260,160,360,260);
 	line(360,160,400,200);
 	line(260,160,300,200);
 	line(260,260,300,300);
 	line(360,260,400,300);
 	getch();
 	closegraph();
 	return 0;

}