#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<time.h>
int hr,sec,min;
void drawcircle(int xc,int yc,int hr1,int sec1, int min1)
{
int i,inr=55,outr=65;
int hdeg,mindeg,secdeg,x,y;
circle(xc,yc,outr);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(xc,yc,2,2);
for(i=180;i>-360;i-=6)
{
if(i%5==0)
 fillellipse(xc+inr*sin(i*3.14f/180),yc+inr*cos(i*3.14f/180),2,2);
else
 fillellipse(xc+inr*sin(i*3.14f/180),yc+inr*cos(i*3.14f/180),1,1);
//draw hands
hdeg=hr1*360/12+30*min1/60;
mindeg=min1*6;
secdeg=sec1*6;
x=xc+40*sin(hdeg*3.14f/180);
y=yc-40*cos(hdeg*3.14f/180);
line(xc,yc,x,y);
x=xc+55*sin(mindeg*3.14f/180);
y=yc-55*cos(mindeg*3.14f/180);
line(xc,yc,x,y);
x=xc+65*sin(secdeg*3.14f/180);
y=yc-65*cos(secdeg*3.14f/180);
line(xc,yc,x,y);
}

}


void drawClock(int xc,int yc)
{
int i,inr=70,outr=80;
int hdeg,mindeg,secdeg,x,y;
circle(xc,yc,outr);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(xc,yc,2,2);
for(i=180;i>-360;i-=6)
{
if(i%5==0)
 fillellipse(xc+inr*sin(i*3.14f/180),yc+inr*cos(i*3.14f/180),2,2);
else
 fillellipse(xc+inr*sin(i*3.14f/180),yc+inr*cos(i*3.14f/180),1,1);
//draw hands
hdeg=hr*360/12+30*min/60;
mindeg=min*6;
secdeg=sec*6;
x=xc+40*sin(hdeg*3.14f/180);
y=yc-40*cos(hdeg*3.14f/180);
line(xc,yc,x,y);
x=xc+55*sin(mindeg*3.14f/180);
y=yc-55*cos(mindeg*3.14f/180);
line(xc,yc,x,y);
x=xc+65*sin(secdeg*3.14f/180);
y=yc-65*cos(secdeg*3.14f/180);
line(xc,yc,x,y);
}

}

int main()
{
time_t now;
struct tm *timeinfo;
int gd=DETECT,gm,midx,midy;
int tsec,tmin,thr;
int n;
  clrscr();
  gotoxy(24,2);
  textcolor(2);
  cprintf("WELCOME TO ANALOGUE CLOCK SYSTEM");
  printf("\n*----------------------------------------------------------------------------*");
  printf("\n1: PAKISTAN CLOCK");
  printf("\n2: U.A.E  CLOCK");
  printf("\n3: INDIA CLOCK");
  printf("\n4: SRILANKA CLOCK ");
  printf("\n5: UNITED STATE CLOCK");
  printf("\n6: UNITED KINGDON CLOCK");
  printf("\n7: RUSSIA CLOCK      ");
  printf("\n8: ARGENTINA CLOCK      ");
  printf("\n9: BRAZIL CLOCK    ");
  printf("\n10: BANGLADESH CLOCK ");
  printf("\n11: ALL CLOCK SHOW ");
  textcolor(4);
  cprintf("\nENTER A NUMBER YOU WANT T0 SEE CLOCK: " );
  scanf("%d", &n);
  clrscr();
  if(n==1)

  {
 printf("\nPAKISTAN CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("PAKISTAN");
getch();
time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}



 }
else if (n==2)
{

printf("\nU.A.E CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,12);
printf("UAE");
getch();
time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr--;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}


}
else if(n==3)
{
printf("\nINDIA CLOCK ");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("INDIA");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

min=min+30;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if(n==4)
{
printf("\nSRILANKA CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("SRILANKA");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

min=min+30;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if(n==5)
{
printf("\nUNITED STATE CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("UNITED STATE");
getch();
time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr-10;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if (n==6)
{
printf("\nUNITED KINGDOM CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("UNITED KINGDOM");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr-5;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if (n==7)
{
printf("\nRUSSIA CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy("RUSSIA");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr-2;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if(n==8)
{
printf("\nARGENTINA CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(36,8);
printf("ARGENTINA");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr-2;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if(n<=9)
{
printf("\nBRAZIL CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(34,8);
printf("BRAZIL");


time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr-8;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if(n<=10)
{
printf("\nBANGALDES CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx()/2;
midy=getmaxy()/2;
gotoxy(34,8);
printf("bangladesh");
getch();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;

hr=hr+1;
while(!kbhit())
{
drawClock(midx,midy);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}
else if (n<=11)
{
printf("\nALL CLOCK");
initgraph(&gd,&gm,"..\\BGI\\");
midx=getmaxx();
midy=getmaxy();

time(&now);
timeinfo=localtime(&now);
hr=timeinfo->tm_hour;
min=timeinfo->tm_min;
sec=timeinfo->tm_sec;


while(!kbhit())
{
drawcircle(midx/9,midy/6.5,hr,min,sec);
drawcircle(midx/2,midy/6.5,hr-1,min,sec);
drawcircle(midx/1.2,midy/6.5,hr,min+30,sec);
drawcircle(midx/9,midy/2,hr,min+30,sec);
drawcircle(midx/2.9,midy/2,hr-10,min,sec);
drawcircle(midx/1.7,midy/2,hr-5,min,sec);
drawcircle(midx/1.2,midy/2,hr-2,min,sec);
drawcircle(midx/9,midy/1.2,hr-2,min,sec);
drawcircle(midx/2,midy/1.2,hr-8,min,sec);
drawcircle(midx/1.2,midy/1.2,hr+1,min,sec);
delay(995);
cleardevice();
tsec=(sec+1)%60;
tmin=(min+(tsec==0?1:0))%60;
thr=(hr+(tmin==0?1:0))%12;
hr=thr;
sec=tsec;
min=tmin;
}

}

else{  }
{
printf("WRONG INPUT");
}
getch();
return 0;
}




