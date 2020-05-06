/*********************************************************************************************************************
     **
     **  BDAY Code  
     **  Use turbo C to get more effect of graphics 
     
     **  Written By:    Akash Vishwas Londhe
     **
*********************************************************************************************************************/

//include header files

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void birthStart()
{

	cleardevice();

	setbkcolor(0);
	setcolor(15);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	outtextxy(35, 150, "Let's celebrate Your Birthday together...!");
	delay(1000);
	delay(1000);

}

void car()
{
	int gd=DETECT ,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	for(i=0;i<500;i++)
	{
		line(0,387,639,387);
		setbkcolor(6);
		settextstyle(3,0,4);
		outtextxy(140,100,"Let's go to long-drive");
		line(50+i,370,90+i,370);
		arc(110+i,370,0,180,20);
		line(130+i,370,220+i,370);
		arc(240+i,370,0,180,20);
		line(260+i,370,300+i,370);
		line(300+i,370,300+i,350);
		line(300+i,350,240+i,330);
		line(240+i,330,200+i,300);
		line(200+i,300,110+i,300);
		line(110+i,300,80+i,330);
		line(80+i,330,50+i,340);
		line(50+i,340,50+i,370);

		line(165+i,305,165+i,330);
		line(165+i,330,230+i,330);
		line(230+i,330,195+i,305);
		line(195+i,305,165+i,305);
		circle(177+i,317,7);

		line(160+i,305,160+i,330);
		line(160+i,330,95+i,330);
		line(95+i,330,120+i,305);
		line(120+i,305,160+i,305);

		circle(110+i,370,17);
		circle(240+i,370,17);
		delay(30);
		cleardevice();
	}

}

void cake()
{
	int gd=DETECT ,gm;
	int m,i,l,r1,r2,l1,r3,r4,l2,l3;
	int j=0,a=391,b=440,c=493,d=523,e=587,f=659,g=698,h=783;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	for(m=0;m<1;m++)
	{
	   setbkcolor(0);
	   delay(100);

		for(i=0;i<60;i++)
		{
		    setcolor(RED+m);
		    ellipse(300,400-i,0,360,200,60);
		    l=400-i;
		    setfillstyle(SOLID_FILL,WHITE);
		    delay(20);
		}
	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(d);	delay(150);
		for(i=0;i<40;i++)
		{
		   setcolor(YELLOW+m);
		   ellipse(300,l,0,360,200-3*i/2,60-i/2);
		   setfillstyle(SOLID_FILL,WHITE);
		   r1=200-3*i/2,r2=60-i/2;
		}
		for(i=0;i<40;i++)
		{
		setcolor(RED+m);
		ellipse(300,l-i,0,360,r1,r2);
		setfillstyle(SOLID_FILL,WHITE);
		l1=l-i;
		delay(20);
		}
	sound(c);	delay(250);
	sound(j);	delay(150);
	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(250);
		for(i=0;i<40;i++)
		{
		  setcolor(YELLOW+m);
		  ellipse(300,l1,0,360,r1-2*i/2,r2-i/2);
		  setfillstyle(SOLID_FILL,WHITE);
		  r3=200-2*i,r4=60-i/2;
		}
	sound(g);	delay(150);
	sound(g);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(300);

	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(250);
	sound(j);	delay(100);

		for(i=0;i<44;i++)
		{
			setcolor(RED+m);
			ellipse(300,l1-i,0,360,r3,r4-10);
			setfillstyle(SOLID_FILL,WHITE);
			l2=l1-i;
			delay(20);
		}

		for(i=0;i<40;i++)
	       {
			setcolor(YELLOW+m);
			ellipse(300,l2,0,360,r3-3*i/2,r4-i);
			setfillstyle(SOLID_FILL,WHITE);
		}
	sound(a);	delay(150);
	sound(a);	delay(150);
	sound(h);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(150);
	sound(b);	delay(200);
	sound(a);	delay(150);
	sound(j);	delay(10);
	sound(a);	delay(150);
	sound(b);	delay(150);
	sound(a);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(250);
	sound(a);	delay(150);
	sound(a);	delay(150);
	sound(h);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(c);	delay(150);
	sound(b);	delay(200);
	for(i=0;i<60;i++)
	{
		setcolor(RED+m+2);
		circle(300,l2-i,10);
		l3=l2-i;
		delay(20);
	}

	for(i=0;i<30;i++)

	      {	setcolor(RED+m+3);
		ellipse(300,l3-15,0,360,6-i/2,15-i);
	      delay(10);
	      }
	sound(g);	delay(150);
	sound(g);	delay(150);
	sound(f);	delay(150);
	sound(d);	delay(150);
	sound(e);	delay(150);
	sound(d);	delay(300);
	nosound();


	setcolor(RED+m+3);
	settextstyle(7,0,3);
	outtextxy(80,135,"Happy birthday !!! GBU LIVE LONGER ");
	setcolor(RED+m-1);
	settextstyle(3,0,1);
	outtextxy(20,110,"May every day of ur life be blessed with rays of hope,joy,love");
	delay(5);

	}

}

void welcome()
{
	int gd=DETECT ,gm,i,j,x=0,y=0;
	int a=391,b=440,c=493,g=698,h=783;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	for(j=0;j<5;j++)
	{
		settextstyle(j,HORIZ_DIR,j);
		for(i=1;i<=15;i++)
		{
			cleardevice();
			settextstyle(3,HORIZ_DIR,4);

			setbkcolor(i);
			outtextxy(x,y,"Welcome to my world..!");
			delay(90);
			sound(300+i*i+j);
			sound(a);delay(10);   sound(b);delay(10);
			sound(b);delay(10);   sound(c);delay(10);
			sound(g);delay(10);   sound(a);delay(10);
			sound(h);delay(10);   sound(b);delay(10);
			x+=5;
			y+=5;
		}
	}
	nosound();
}

void main()
{
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	cleardevice();

	welcome();
	delay(300);
	car();
	delay(300);
	birthStart();
	delay(300);
	cake();
	delay(300);

	getch();

}