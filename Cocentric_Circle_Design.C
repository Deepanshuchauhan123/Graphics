#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

int main(void)
{
	//gd= Graphic Driver, gm=GraphicMode
	 int gd,gm,errorcode;

	 int midx,midy,i;
	 clrscr();

	// Detect automatically the driver which is available
	 gd=DETECT;

	//Take path of the BGI folder
	 initgraph(&gd,&gm,"C:\\TC\\BGI");

	 errorcode=graphresult();
	 if(errorcode != grOk)
	{
 		 printf("%s%s","Graphics ",grapherrormsg(errorcode));
 	 	 printf("%s","Press key");
 		 getch();
 		 exit(1);
	}

	//Functions used to calculate height and width of screen.
 	midx=getmaxx()/2;
	 midy=getmaxy()/2;

	// setbkcolor(WHITE);
	 setcolor(RED);
	 for(i=1;i<=10;i++)
 	{
 	     setfillstyle(i,i);
    	     delay(100);
    	     circle(midx,midy,i*20);
    	     floodfill(midx-2+i*20,midy,RED);
 	}
 getch();
 closegraph();
 return 0;
}
