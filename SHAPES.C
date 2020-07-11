#include<stdio.h>
        #include<conio.h>
        #include<stdlib.h>
        #include<graphics.h>

        int main(void)
        {
                int gd,gm,errorcode;
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
                
                setbkcolor(GREEN);
                setcolor(WHITE);
                outtextxy(10,40,"Line");
                line(150,43,220,43);
        
                outtextxy(10,100,"Circle");
                circle(180,100,30);
                
                outtextxy(10,170,"Arc");
                arc(180,180,0,180,30);
                
                //Filled/solid slice
                outtextxy(10,240,"Pie-Slice");
                pieslice(180,250,0,180,40);
                
                outtextxy(10,310,"Arc-Ellipse");
                ellipse(190,320,0,180,50,25);
                
                //Arc ellipse but sector is filled or solid
                outtextxy(10,380,"Sector");
                sector(190,390,0,180,50,25);
                
                //filledellipse is complete ellipse not an arc
                outtextxy(300,40,"Filled-Ellipse");
                fillellipse(550,50,60,30);
        
                getch();
                closegraph();
                return 0;
        }