#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void screen();
void main()
{int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "C:\TURBOC3\BGI");
int i=0 ;
//{outtextxy(i,j,"S");
//setcolor(WHITE);

//life icon
ellipse(220,37,0,360,5,6);
setfillstyle(SOLID_FILL,BROWN);
floodfill(220,37,15);
//graph
outtextxy(0,0,"0");
outtextxy(100,0,"1");
outtextxy(200,0,"2");
outtextxy(300,0,"3");
outtextxy(400,0,"4");
outtextxy(500,0,"5");
outtextxy(600,0,"6");
outtextxy(616,0,"616");
outtextxy(0,100,"1");
outtextxy(0,200,"2");
outtextxy(0,300,"3");
outtextxy(0,400,"4");
outtextxy(0,460,"460");
line(0,0,616,0);//border
line(0,0,0,460);
//border           xmax=639
line(0,400,649,400);
line(0,460,649,460);
line(639,0,639,460);
setfillstyle(SOLID_FILL,BROWN);
setcolor(0);
floodfill(10,450,15);
line(0,420,649,420);
line(0,440,649,440);
for(i=20;i<=600;i=i+20)
{line(i,401,i,459);}
setcolor(15);

//1 box
rectangle(100,280,140,320);
setfillstyle(SOLID_FILL,BROWN);
floodfill(110,283,15);
//4 box
line(200,280,360,280);
line(200,320,360,320);
line(200,280,200,320);
line(360,280,360,320);
floodfill(210,283,15);
line(240,280,240,320);
line(280,280,280,320);
line(320,280,320,320);
//1 upper box
rectangle(240,190,280,230);
floodfill(241,191,15);
setcolor(0);
circle(205,285,2);  //circle in corner box2
circle(235,285,2);
circle(205,315,2);
circle(235,315,2);
setfillstyle(SOLID_FILL,0);
/*
floodfill(205,285,0);
floodfill(235,285,0);
floodfill(205,315,0);
floodfill(235,315,0); */
circle(285,285,2);    //box4
circle(315,285,2);
circle(285,315,2);
circle(315,315,2);
/*
floodfill(285,285,0);
floodfill(315,285,0);
floodfill(285,315,0);
floodfill(315,315,0);   */
circle(245,195,2);   //upper box
circle(275,195,2);
circle(245,225,2);
circle(275,225,2);
setcolor(0);
for(i=290;i<=310;i=i+10) //brick in box2
{line(241,i,279,i);}
line(260,281,260,290);
line(250,291,250,300);
line(270,291,270,300);
line(260,301,260,310);
line(250,311,250,319);
line(270,311,270,319);
for(i=290;i<=310;i=i+10) //brick in box4
{line(321,i,359,i);}
line(340,281,340,290);
line(330,291,330,300);
line(350,291,350,300);
line(340,301,340,310);
line(330,311,330,319);
line(350,311,350,319);
for(i=290;i<=310;i=i+10) //brick in single
{line(101,i,139,i);}
line(120,281,120,290);
line(110,291,110,300);
line(130,291,130,300);
line(120,301,120,310);
line(110,311,110,319);
line(130,311,130,319);
setcolor(15);
//question mark of box 3
arc(300,292,-90,180,8);
line(300,300,300,308);
putpixel(300,314,15);
circle(300,314,2);
arc(300,292,-90,180,7);
//question mark of upper box
arc(260,202,-90,180,8);
line(260,210,260,218);
circle(260,224,2);
arc(260,202,-90,180,7);

//tunnel
line(500,360,500,400);
line(560,360,560,400);
rectangle(490,340,570,360);
setfillstyle(SOLID_FILL,GREEN);
floodfill(495,341,15);
floodfill(510,361,15);
//cloud
ellipse(200,80,0,180,20,10);//1cloud
ellipse(180,85,90,270,10,5);
ellipse(220,85,270,90,10,5);
ellipse(200,90,180,0,20,5);
ellipse(450,80,0,180,20,10);//2cloud
ellipse(430,85,90,270,10,5);
ellipse(450,90,180,0,20,5);
ellipse(490,80,0,180,20,10);
ellipse(490,90,180,0,20,5);
ellipse(510,85,270,90,10,5);
setfillstyle(SOLID_FILL,WHITE);
floodfill(210,82,15);
floodfill(455,85,15);
//blue color
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(10,10,15);

//info
outtextxy(70,25,"MARIO");
outtextxy(70,35,"000000");
outtextxy(230,35,"x00");
outtextxy(360,25,"WORLD");
outtextxy(360,35,"1-1");
outtextxy(500,25,"TIME");
outtextxy(500,35,"0000");
/*
//   MARIO small
//setcolor(RED);
line(3,384,8,384);
line(3,384,3,385);
line(8,384,9,385);
line(3,385,2,385);
line(9,385,12,385);
line(2,385,2,386);
line(12,385,12,386);
line(2,386,12,386);
setcolor(WHITE);
//setfillstyle(SOLID_FILL,RED);
floodfill(4,385,15);  */

//   MARIO big
//hat
setcolor(RED);
line(6,368,16,368);
line(6,368,6,370);
line(16,368,16,370);
line(6,370,4,370);
line(16,370,22,370);
line(4,370,4,372);
line(22,370,22,372);
line(4,372,22,372);
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(7,369,RED);

//hair and moustache and eye green
//hair
setcolor(GREEN);
line(4,373,10,373);
line(4,373,4,374);
line(4,374,6,374);
line(6,374,6,378);
line(6,378,10,378);
line(10,378,10,376);
line(10,376,8,376);
line(8,376,8,374);
line(8,374,10,374);
line(10,374,10,373);
line(4,373,2,373);
line(2,374,2,380);
line(2,380,6,380);
line(6,380,6,379);
line(6,379,3,379);
line(3,379,3,374);
setfillstyle(SOLID_FILL,GREEN);
floodfill(7,376,GREEN);
floodfill(3,379,GREEN);
//EYE
rectangle(14,372,16,376);
floodfill(15,373,GREEN);
//moustache
rectangle(16,376,18,378);
rectangle(14,378,22,380);
floodfill(17,377,GREEN);
floodfill(15,379,GREEN);

//face and ear skin color  nose
//ear
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(4,374,5,378);
//FACE
line(11,373,13,373);
line(11,373,11,375);
line(11,375,9,375);
line(9,375,9,376);
line(9,376,11,376);
line(11,376,11,379);
line(11,379,7,379);
line(7,379,7,382);
line(7,382,20,382);
line(20,382,20,381);
line(20,381,13,381);
line(13,381,13,377);
line(13,377,15,377);
line(15,377,15,376);
line(15,376,13,376);
line(13,376,13,373);
floodfill(12,380,YELLOW);
//nose
line(17,373,18,373);
line(17,373,17,375);
line(17,375,19,375);
line(19,375,19,377);
line(19,377,24,377);
line(24,377,24,376);
line(24,376,22,376);
line(22,376,22,374);
line(22,374,18,374);
line(18,374,18,373);
floodfill(20,376,YELLOW);

//red cloth
setcolor(RED);
line(8,383,10,383);
line(8,383,8,388);
line(8,388,6,388);
line(6,388,6,392);
line(6,392,4,392);
line(4,392,4,396);
line(4,396,10,396);
line(10,396,10,394);
line(10,394,14,394);
line(14,394,14,396);
line(14,396,20,396);
line(20,396,20,392);
line(20,392,18,392);
line(18,392,18,388);
line(18,388,16,388);
line(16,388,16,384);
line(16,384,14,384);
line(14,384,14,386);
line(14,386,10,386);
line(10,386,10,383);
setfillstyle(SOLID_FILL,RED);
floodfill(9,384,RED);
//rectangle(4,383,20,394);
//floodfill(5,384,RED);
//two square in cloth
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(8,388,10,390);
rectangle(14,388,16,390);
floodfill(9,389,YELLOW);
floodfill(15,389,YELLOW);

//left hand cloth
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(4,383,7,387);
rectangle(4,388,5,390);
rectangle(2,384,4,388);
rectangle(0,386,2,388);
floodfill(5,384,GREEN);
floodfill(5,389,GREEN);
floodfill(3,385,GREEN);
floodfill(1,387,GREEN);
//middle cloth
rectangle(11,383,13,385);
rectangle(14,383,16,383);
floodfill(12,384,GREEN);
//right hand cloth
rectangle(17,384,22,387);
rectangle(19,388,20,390);
rectangle(22,386,24,388);
floodfill(18,385,GREEN);
floodfill(20,389,GREEN);
floodfill(23,387,GREEN);
//left leg
rectangle(2,396,8,399);
rectangle(0,398,2,399);
floodfill(3,397,GREEN);
//right leg
rectangle(16,396,22,399);
rectangle(22,398,24,399);
floodfill(17,397,GREEN);
//right hand
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(0,388,3,394);
rectangle(4,390,5,392);
floodfill(1,389,YELLOW);
floodfill(5,391,YELLOW);
//left hand
rectangle(19,390,20,392);
rectangle(21,388,24,394);
floodfill(20,391,YELLOW);
floodfill(22,389, YELLOW);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(0,200,20,220);
floodfill(15,205,15);
int f=20,i1,i2,key,c=0,f1=200;
do
{
getch();
key=getch();
//scanf("%d",&key);
i1=f;
i2=f1;
if(key==77) //right
{
for(f;f<=i1+30;f=f+5)
{
//cleardevice();
rectangle(f,f1,f+20,f1+20);
floodfill(f+10,f1+4,15);
//delay(10);
}}
else if(key==75)//left
{for(f;f>=i1-30;f=f-5)
{//cleardevice();
rectangle(f,f1,f+20,f1+20);
floodfill(f+10,f1+4,15);
//delay(10);
}}
else if(key==72)   //up
{for(f1;f1>=i2-30;f1=f1-5)
{//cleardevice();
rectangle(f,f1,f+20,f1+20);
floodfill(f+10,f1+4,15);
setcolor(9);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(f,f1+21,f+20,f1+25);
floodfill(f+10,f1+22,0);
setcolor(15);
//delay(20);
}}
else if(key==80)   //down
{for(f1;f1<=i2+30;f1=f1+5)
{//cleardevice();
rectangle(f,f1,f+20,f1+20);
floodfill(f+10,f1+16,15);
//delay(20);
}}
else
{break;}
c++;
printf("%d",c);
}while(1);
//getch();
closegraph();
}
