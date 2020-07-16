/*
Car-Model Using Graphics in C-Language
Main-Shapes used:
		1. Ellipse.
		2.Circle.
		3.Arc.
		4.Line.
*/


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

        if(errorcode!=grOk)
        {
        printf("%s%s","Graphics ",grapherrormsg(errorcode));
        printf("%s","Press key");
        getch();
        exit(1);
        }
        //Tyre 
        //Rear Tyre
        circle(120,300,35);
        circle(120,300,30);
        circle(120,300,3);

        //Rear Tyre Color
        setfillstyle(7,WHITE);
        floodfill(120+34,300,WHITE);

        //Rear Tyre Rims
        line(120,300,91,305);
        line(120,300,91,297);
        line(120,300,105,325);
        line(120,300,112,328);
        line(120,300,132,327);
        line(120,300,139,323);
        line(120,300,148,306);
        line(120,300,150,298);
        line(120,300,140,280);
        line(120,300,135,274);
        line(120,300,112,272);
        line(120,300,103,275);


        //Front Tyre
        circle(380,300,35);
        circle(380,300,30);
        circle(380,300,3);

        //Front Tyre Rims
        line(380,300,351,305);
        line(380,300,351,297);
        line(380,300,365,325);
        line(380,300,372,328);
        line(380,300,392,327);
        line(380,300,399,323);
        line(380,300,408,306);
        line(380,300,410,298);
        line(380,300,400,280);
        line(380,300,395,274);
        line(380,300,372,272);
        line(380,300,363,275);

        //Tyre Cover of body
        arc(120,300,-28,208,40);
        arc(380,300,-28,208,40);

        //Bottom of car
        line(156,318,343,318);

        //back of car
        line(84,318,66,316);
        line(66,316,69,310);
        line(69,310,66,301);
        line(66,301,71,285);
        line(71,285,69,263);

        //Top of car/Roof
        ellipse(198,277,110,150,150,30); //back to middle
        ellipse(229,224,240,308,180,30);//front to middle
        ellipse(240,333,57,123,190,100);//Roof
        ellipse(202,274,110,153,150,30);

        //Front of Car
        line(415,320,455,320);
        line(455,320,462,315);
        line(462,315,459,310);
        line(459,310,462,282);
        ellipse(337,298,20,90,132,50);

        //Front Head Light
        setfillstyle(9,9);
        line(420,265,440,285);
        line(440,285,440,292);
        line(440,292,420,280);
        line(420,280,420,265);

        //Front Light OuterLine
        line(422,267,442,287);
        line(442,287,442,294);
        line(442,294,422,282);
        line(422,282,422,267);

        floodfill(430,283,WHITE);

        //Back Light
        setfillstyle(1,RED);
        circle(80,270,6);
        circle(80,270,4);
        floodfill(80,270,WHITE);

        //mirror
        ellipse(315,255,0,360,14,5);
        line(328,255,337,250);
        line(328,252,337,250);

        //front Spoiler
        ellipse(455,320,50,180,10,44);
        setfillstyle(8,12);
        floodfill(448,300,WHITE);

        //front tyre color
        setfillstyle(7,WHITE);
        floodfill(380+34,300,WHITE);


        //Rear Spoiler
        line(95,245,95,253);
        line(90,248,90,253);
        line(75,247,90,248);
        line(75,247,95,245);

       settextjustify(1,1);
       settextstyle(8,0,6);
       outtextxy(getmaxx()/2,100,"Hybrid-Car");

        getch();
        closegraph();
        return 0;
}
