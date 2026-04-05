#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "C:\TURBOC3\BGI");
//   MARIO big
//hat
setcolor(RED);
line(260,80,360,80);
line(260,80,260,100);
line(360,80,360,100);
line(260,100,240,100);
line(360,100,420,100);
line(240,100,240,120);
line(420,100,420,120);
line(240,120,420,120);
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(261,81,RED);

//hair and moustache and eye green
//hair
setcolor(GREEN);
line(240,121,300,121);
line(240,121,240,140);
line(240,140,260,140);
line(260,140,260,180);
line(260,180,300,180);
line(300,180,300,160);
line(300,160,280,160);
line(280,160,280,140);
line(280,140,300,140);
line(300,140,300,121);
line(240,140,220,140);
line(220,140,220,200);
line(220,200,260,200);
line(260,200,260,181);
line(260,181,239,181);
line(239,181,239,140);
setfillstyle(SOLID_FILL,GREEN);
floodfill(261,160,GREEN);
floodfill(240,190,GREEN);
//EYE
rectangle(340,121,360,161);
floodfill(341,122,GREEN);
//moustache
rectangle(360,160,380,180);
rectangle(340,180,420,200);
floodfill(361,161,GREEN);
floodfill(341,181,GREEN);

//face and ear skin color  nose
//ear
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(240,140,260,180);
floodfill(250,150,YELLOW);
//FACE
line(301,121,340,121);
line(301,121,301,141);
line(301,141,281,141);
line(281,141,281,160);
line(281,160,301,160);
line(301,160,301,181);
line(301,181,261,181);
line(261,181,261,220);
line(261,220,400,220);
line(400,220,400,201);
line(400,201,321,201);
line(340,201,340,161);
line(340,160,340,121);
rectangle(341,161,360,180);
floodfill(320,200,YELLOW);
floodfill(344,162,YELLOW);
//nose
rectangle(361,121,380,160);
rectangle(380,140,420,180);
rectangle(420,160,440,180);
floodfill(362,122,YELLOW);
floodfill(382,141,YELLOW);
floodfill(421,161,YELLOW);

//red cloth
setcolor(RED);
line(280,221,300,221);
line(280,221,280,280);
line(280,280,260,280);
line(260,280,260,320);
line(260,320,240,320);
line(240,320,240,360);
line(240,360,300,360);
line(300,360,300,340);
line(300,340,340,340);
line(340,340,340,360);
line(340,360,400,360);
line(400,360,400,320);
line(400,320,380,320);
line(380,320,380,280);
line(380,280,360,280);
line(360,280,360,240);
line(360,240,340,240);
line(340,240,340,260);
line(340,260,300,260);
line(300,260,300,221);
setfillstyle(SOLID_FILL,RED);
floodfill(281,240,RED);
//rectangle(240,221,400,340);
//floodfill(241,240,RED);
//two square in cloth
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(280,280,300,300);
rectangle(340,280,360,300);
floodfill(281,281,YELLOW);
floodfill(341,281,YELLOW);

//left hand cloth
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(240,221,279,279);
rectangle(240,280,259,300);
rectangle(220,240,240,280);
rectangle(200,260,220,280);
floodfill(241,240,GREEN);
floodfill(241,281,GREEN);
floodfill(221,241,GREEN);
floodfill(201,261,GREEN);
//middle cloth
rectangle(301,221,340,260);
rectangle(340,221,360,240);
floodfill(320,240,GREEN);
floodfill(341,222,GREEN);
//right hand cloth
rectangle(361,240,420,280);
rectangle(381,280,400,300);
rectangle(420,260,440,280);
floodfill(380,241,GREEN);
floodfill(382,281,GREEN);
floodfill(421,261,GREEN);
//left leg
rectangle(220,360,280,380);
rectangle(200,380,280,400);
floodfill(221,361,GREEN);
floodfill(221,381,GREEN);
//right leg
rectangle(360,360,420,380);
rectangle(360,380,440,400);
floodfill(361,361,GREEN);
floodfill(361,381,GREEN);
//left hand
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(200,280,239,340);
rectangle(240,300,259,320);
floodfill(201,281,YELLOW);
floodfill(241,301,YELLOW);
//right hand
rectangle(381,300,400,320);
rectangle(401,280,440,340);
floodfill(382,301,YELLOW);
floodfill(420,281,YELLOW);

getch();
closegraph();

}