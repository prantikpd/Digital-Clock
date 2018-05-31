/*****C Program For Display DigitaL Clock *****/

#include<stdio.h>
#include <graphics.h>
#include<time.h>
int main()
{
	int gd,gm;
 	gd = DETECT;    	
   	int i=0,a[5],j;
        initgraph(&gd, &gm, "");  //Initializing Graphics mode//
 
while (1)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
if(tm.tm_hour>=12)
	{ 
  	tm.tm_hour = tm.tm_hour-12;
 	outtextxy(550,150,"PM");
  	}
else
	{
	outtextxy(550,150,"AM");
	}
	a[0]=tm.tm_hour/10;
	a[1]=tm.tm_hour%10;
	a[2]=tm.tm_min/10;
	a[3]=tm.tm_min%10;
	a[4]=tm.tm_sec/10;
  	a[5]=tm.tm_sec%10;
  	circle(240,150,2);
  	setcolor(YELLOW);
  	circle(240,160,2);
  	circle(390,150,2);
  	circle(390,160,2);
for(i=0;i<6;i++)
	{
switch(a[i])	//Out the particular digit according to the input//
	{
   case 0:
	    {
	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
   	line(100+i*75,155,100+i*75,195);
   	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	break;
    	}
   case 1:
    	{
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	break;
   	 }
    case 2:
   	 {
   	 line(105+i*75,100,145+i*75,100);
   	 line(100+i*75,155,100+i*75,195);
   	 line(105+i*75,200,145+i*75,200);
   	 line(150+i*75,105,150+i*75,145);
   	 line(105+i*75,150,145+i*75,150);
   	 break;
   	 }
    case 3:
   	 {
   	 line(105+i*75,100,145+i*75,100);
   	 line(105+i*75,200,145+i*75,200);
   	 line(150+i*75,155,150+i*75,195);
   	 line(150+i*75,105,150+i*75,145);
   	 line(105+i*75,150,145+i*75,150);
   	 break;
   	 }
    case 4:
   	 {
   	 line(100+i*75,105,100+i*75,145);
   	 line(150+i*75,155,150+i*75,195);
   	 line(150+i*75,105,150+i*75,145);
   	 line(105+i*75,150,145+i*75,150);
   	 break;
   	 }
    case 5:
   	 {
   	 line(105+i*75,100,145+i*75,100);
   	 line(100+i*75,105,100+i*75,145);
   	 line(105+i*75,200,145+i*75,200);
   	 line(150+i*75,155,150+i*75,195);
   	 line(105+i*75,150,145+i*75,150);
   	 break;
   	 }
    case 6:
   	 {
   	 line(105+i*75,100,145+i*75,100);
   	 line(100+i*75,105,100+i*75,145);
   	 line(100+i*75,155,100+i*75,195);
   	 line(105+i*75,200,145+i*75,200);
   	 line(150+i*75,155,150+i*75,195);
   	 line(105+i*75,150,145+i*75,150);
   	 break;
   	 }
    case 7:
   	 {
    	line(105+i*75,100,145+i*75,100);
  	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
   	 break;
    	}
    case 8:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(100+i*75,155,100+i*75,195);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    case 9:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	}
    	}
   delay(700);
   cleardevice();
   }
   closegraph();
}
