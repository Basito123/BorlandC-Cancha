#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <stdlib.h>

int main (void)
{
int gdriver=DETECT,gmode,i;
initgraph(&gdriver,&gmode,"..//BGI");

int poly[40];

setfillstyle(1,GREEN);

poly[0]=20; //arr izq
poly[1]=30;

poly[2]=400+40; //arri der
poly[3]=30;
 
poly[4]=460+40; //abajo der
poly[5]=300;

poly[6]=80; //abajo izq
poly[7]=300;


fillpoly(4,poly);
//lineas profundidad 

line(60,300+25,440+40,300+25);
line(0,50,60,325);
line(20,30,0,50);
line(60,325,80,300);
line(440+40,325,460+40,300);

int polylinea[40];



//lineas medio
line(225,30,295,300);

//circulo
circle(260,155,45);

//arcos
arc(30,40,267,30,20); //arriba izq
arc(440,30,183,285,25);//arriba der
arc(80,300,0,100,27);//abajo izq
arc(500,300,100,180,30);//abajo der

//area grande izq
int poly2[20];

setfillstyle(1,WHITE);
poly2[0]=40;
poly2[1]=110;

poly2[2]=110;
poly2[3]=105;

poly2[4]= 140;
poly2[5]= 220;

poly2[6]=65;
poly2[7]=225;
drawpoly(4,poly2);

//elipse porteria izq
ellipse(124+1,160+2,290,100,25,25);

//area chica izq
int poly3[40];
setfillstyle(1,WHITE);
poly3[0]=45;
poly3[1]=110+30;

poly3[2]=80;
poly3[3]=105+30;

poly3[4]= 95;
poly3[5]= 215-20;

poly3[6]=60;
poly3[7]=220-23;


drawpoly(4,poly3);
//area grande der
int poly4[40];

setfillstyle(1,WHITE);

poly4[0]=453;
poly4[1]=90;

poly4[2]=377;
poly4[3]=95;

poly4[4]=400;
poly4[5]=205;

poly4[6]=477;
poly4[7]=203;

drawpoly(4,poly4);

//elipse der
ellipse(388+1,147+2,105,280,25,25);

//area chica der
int poly5[40];
setfillstyle(1,WHITE);

poly5[0]=457;
poly5[1]=110+5;

poly5[2]=410+7;
poly5[3]=113+5;

poly5[4]=423+7;
poly5[5]=178-5;

poly5[6]=470;
poly5[7]=176-5;

drawpoly(4,poly5);
//laterales
setfillstyle(9,BROWN);
floodfill(10,50,15);

setfillstyle(9,BROWN);
floodfill(120,310,15);


//jugadores
setcolor(BLACK);
setfillstyle(1,CYAN);
//portero
fillellipse(90,160,20,20);
//centrales

fillellipse(157,95,20,20);
fillellipse(150,165,20,20);
fillellipse(180,240,20,20);

//carrileros
fillellipse(220,57,20,20);
fillellipse(267,255,20,20);

//Centrocampistas
fillellipse(240,120,20,20);
fillellipse(255,185,20,20);

//Atacantes
fillellipse(290+23,65+5,20,20);
fillellipse(310+45,150,20,20);
fillellipse(320+23,250-5,20,20);

//nombres

setcolor(WHITE);
settextstyle(1,0,1);
outtextxy(90-15,160-9,"16");
outtextxy(157-7,95-10,"2");
outtextxy(150-7,165-10,"6");
outtextxy(180-15,240-9,"28");

outtextxy(220-15,57-9,"21");
outtextxy(267-15,255-10,"24");

outtextxy(240-7,120-10,"5");
outtextxy(255-7,185-10,"7");

outtextxy(290+8,65-3,"19");
outtextxy(310+30,150-9,"11");
outtextxy(320+8,250-12,"29");


//texto
settextstyle(1,0,1);
outtextxy(20,400-40,"CHELSEA  2020-2021");
outtextxy(20,400,"Entrenador: Thomas Tuchel");


// pizarron electronico
while(!kbhit()) {
i++;//++i,i+=1,i=i+1;
if(i>=610)
i=-1600;

settextstyle(1,HORIZ_DIR,2);
setcolor(WHITE);

outtextxy(i,450," 29.-Havertz  11.-Werner  19.-Mount  ||  24.-James  7.-Jorginho  5.-Kante  21.-Chilwell  ||  28.-Azpilicueta (C)  6.-Thiago Silva   2.-Rudiger  ||  16.-Mendy  ");
delay(1);

setfillstyle(SOLID_FILL,CYAN);
bar(0,450,640,480);


}

getch();
closegraph();
return 0;
}


