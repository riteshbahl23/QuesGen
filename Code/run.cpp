#include<final.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<fstream.h>

int mm,n=1;

struct time
{int hrs,min;
}t;

class question
{int clas,marks,qno;
 char que[150];
 public:
   void enter()
      {cout<<"\n\n\t\t\tEnter the Question details:\n\t\t__________________________________________";
       cout<<"\n\n\t\t\t   Class(b\w 6 to 10):\t";
       cin>>clas;
       cout<<"\n\n\t\t\t   Marks:\t";
       cin>>marks;
       cout<<"\n\n\t\t\t   Question no.:\t";
       cin>>qno;
       cout<<"\n\n\t\t\t   The question:";
       gets(que);

      }
   void enter1()
      {cout<<"\n\n\t\t\tEnter the Question details:\n\t\t__________________________________________";
       cout<<"\n\n\t\t\t   Class(b\w 6 to 10):\t";

       cin>>clas;
       cout<<"\n\n\t\t\t   Marks:\t";
       cin>>marks;
       qno=random(16);
      }
   void disp()
      {cout<<n++<<". "<<que<<"\n\t\t\t\t\t\t\t\t\t"<<marks<<"\n";
      }
   int getmark()
      {return marks;
      }
   int check(question q1);
};

int question::check(question q1)
     {if((marks==q1.marks) && (clas==q1.clas) && (qno==q1.qno))
		 return 1;
      else
	 return 0;
     }

void add()
{question q;
 ofstream fout;
 fout.open("master.dat",ios::app|ios::binary);
 if(!fout)
   cout<<"Error";
 else
   {char cho;
    do{clrscr();
       q.enter();
       fout.write((char*)&q,sizeof(q));
       fout<<"\n";
       cout<<"\n\n\t\t\t......Your question have been added......";
       cout<<"\n\n\t\t\tWanna add more questions:";
       cin>>cho;
      }while(cho=='y'||cho=='Y');
   }
 fout.close();
}

void qdisp()
{clrscr();
 question q;
 n=1;
 char ch;
 ifstream fin;
 fin.open("qpaper.dat",ios::binary);
 if(!fin)
   cout<<"\n\n\t\t\t\t\tError";
 else
   {cout<<"\n\n\t\t\tST.ANNE'S SR. SEC. SCHOOL ,JODHPUR\n\t\t__________________________________________________\n";
    cout<<"\nTIME = ";
    if(t.hrs!=0)
      cout<<t.hrs<<"hrs ";
    cout<<t.min<<"min"<<"\t\t\t\t\t\t\tMM ="<<mm<<"\n\n";
    fin.seekg(0);
    while(fin.read((char*)&q,sizeof(q)))
       {
	fin.get(ch);
	q.disp();
       }
   }
 fin.close();
}

void call(char ch)
{randomize();
 question q,q1;
 ifstream fin;
 ofstream fout;
 fout.open("qpaper.dat",ios::binary);
 if(ch=='o')
    fin.open("mastero.dat",ios::binary);
 else if(ch=='s')
    fin.open("masters.dat",ios::binary);
 if(!fin||!fout)
   cout<<"\n\n\t\t\tError";
 else
   {clrscr();
    cout<<"\n\n\t\tEnter the maximum marks=";
    cin>>mm;
    cout<<"\n\n\t\tMaximum time alloted:\nhrs=";
    cin>>t.hrs;
    cout<<"min=";
    cin>>t.min;
    int ch,p,flag=0,c=0;
    char cho;

    cout<<"\n\t\tNote: A notification will be displayed when the maximum marks\n will be display....";
    getch();
    do{clrscr();
       q.enter1();
       c+=q.getmark();
       fin.seekg(0);
       while(fin.read((char*)&q1,sizeof(q1)))
	  {
	   q.disp();
	   getch();
	   if(q.check(q1))
	     {
	      fout.write((char*)&q1,sizeof(q1));
	      fout<<"\n";
	      cout<<"\n\n";
	      q1.disp();
	      getch();
	      cout<<"\n\n\t\t\t......Your question has been added.....";
	      getch();
	      flag=1;
	      break;
	     }
	  }
       if(flag==0)
	  {cout<<"not found";
	   getch();
	  }
      }while(c<mm);
    if(c==mm)
      cout<<"\n\n\t\t\t\t\t\tMaximum Marks Reached";
      getch();
   }
 fin.close();
 fout.close();
 qdisp();
}

void quegen()
{int ch;
 char cho;
 do{clrscr();
    n=1;
    cout<<"\n\n\t\t\tFORMAT\n\t\t\______________________________________________\n\n\t\t\t1.Objective\n\n\t\t\t2.Subjective\n\n\n\t\t\tEnter choice:";
    cin>>ch;
    cout<<"\n\n\t\t_____________________________________________" ;
    switch(ch)
       {case 1:call('o');
	       break;
	case 2:call('s');
	       break;
	default:cout<<"\n\n\t\t\t\t\t\tInvalid choice";
       }
    cout<<"\n\n\t\t\t\t\t\t\tContinue?";
    cin>>cho;
 }while(cho=='y'||cho=='Y');
}

void glog()
{/* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int l1,t1,r1,b1,l2,t2,r2,b2,l3,t3,r3,b3,x1=290,y1=70,x2=105,y2=150,x3=105,y3=270;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "g:\\bgi");

    outtextxy(x1,y1,"LOGIN");
    outtextxy(x2,y2,"USERNAME :");
    outtextxy(x3,y3,"PASSWORD :");

   l1=50;      l2=500;    l3=500;
   t1=40;      t2=190;    t3=310;
   r1=570;     r2=100;    r3=100;
   b1=440;     b2=220;    b3=340;

   /* draw a rectangle */
   rectangle(l1,t1,r1,b1);
   rectangle(l2,t2,r2,b2);
   rectangle(l3,t3,r3,b3);
}

int enterpass()
{int pa=0;
char ch;
 do{
    ch=getche();
    if(ch!=13)
       {cout<<"*";
	pa = pa*10 + (ch-48);
       }
   }while(ch!=13);
 return pa;
}

void passo()
{char user[80];
 long int pass;
 gotoxy(15,13);
 gets(user);
 gotoxy(15,21);
  pass=enterpass();
  if( !(strcmp(user,"Prashul Vaishnav")) || !(strcmp(user,"Siddharth Mehrotra")))
   {if(pass==3132)
      {cleardevice();
       closegraph();
       clrscr();
       gotoxy(28,6);
       cprintf(".....Thank You For Logging in.....");
       getch();
       clrscr();
       add();
      }
    else
      {cleardevice();
       closegraph();
       cout<<"\n\n\t\t\t\t\t\tInvalid password";
      }
   }
 else
   cout<<"\n\n\t\t\t\t\t\tInvalid username";
}


void login()
{clrscr();
 int flag=0;
 do{
    flag++;
    gotoxy(28,6);
    cprintf("\n\n\t\t\t\tThis is case sensitive program......");
    glog();
    passo();
   }while(flag==3);

 /*clean up */
 cleardevice();
 closegraph();
 clrscr();
}


void front_pg()
{/* select a driver and mode that supports */
   /* multiple background colors.            */
   int gdriver=DETECT, gmode, errorcode;
   int bkcol;

 /*  initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "g:\\bgi");


   {
      /* clear the screen */
      cleardevice();

      /* select a new background color */
      setbkcolor(10);

      /* output a messsage */
      if (bkcol == WHITE)
	 setcolor(EGA_BLUE);
     //	 getch();

   }
 int a1=300,b1=150;

    int midx=325,midy=150;
   int stangle = 0, endangle = 360;
  int xradius = 70, yradius =40 ;
  setcolor(1);
  ellipse(midx,midy,stangle,endangle,xradius,yradius);
  /* output text starting at the C.P. */
   outtextxy(a1,b1,"WELCOME");

   gotoxy(29,4);
   printf("Question Paper Generator\n");
   gotoxy(34,5);
   printf("ST.ANNE'S SCHOOL");
   gotoxy(28,15);
   printf("Where the mind is without fear\n");
   gotoxy(2,20);
   printf("Submitted by:\n");
   gotoxy(60,20);
   printf("Submitted to:\n");
   gotoxy(2,22);
   printf("Prashul Vaishnav (XI-A)\n");
   gotoxy(60,22);
   printf("Archana Agarwal Ma'am");
   gotoxy(2,23);
   printf("Siddharth Mehrotra (XI-A)\n");
   gotoxy(2,24);
   cout<<"\n\n\n\n\n\t\t ........Press enter key to continue.......";
   getch();
   cleardevice();
   closegraph();


}


int menu()
 {//cleardevice();

 int gdriver=DETECT, gmode, errorcode;
   int bkcol;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "g:\\bgi");


   {
      /* clear the screen */
      cleardevice();

      /* select a new background color */
      setbkcolor(15);

      /* output a messsage */
      if (bkcol == WHITE)
	 setcolor(EGA_BLUE);


   }
 int a1=293,b1=46,a2=50,b2=120,a3=500,b3=125,a4=300,b4=195,c=265,d=260;

    int midx2=80,midy2=125,midx3=560,midy3=128,midx4=320,midy4=200;
   int stangle = 0, endangle = 360;
   int xradius = 70, yradius =40 ;
   int  c1;
   setcolor(2);
   ellipse(midx2,midy2,stangle,endangle,xradius,yradius);
   ellipse(midx3,midy3,stangle,endangle,xradius,yradius);
   ellipse(midx4,midy4,stangle,endangle,xradius,yradius);

   /* output text starting at the C.P. */
   outtextxy(a1,b1,"MENU");
   outtextxy(a2,b2,"1.ALUMNI");
   outtextxy(a3,b3,"2.GENERATE PAPER");
   outtextxy(a4,b4,"3.EXIT");
   outtextxy(c,d," Enter Choice - ");
   cin>>c1;
   cleardevice();
   closegraph();
   return c1;
   }


int mainmenu()
 {//cleardevice();

 int gdriver=DETECT, gmode, errorcode;
   int bkcol;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "g:\\bgi");


   {
      /* clear the screen */
      cleardevice();

      /* select a new background color */
      setbkcolor(9);

      /* output a messsage */
      if (bkcol == WHITE)
	 setcolor(EGA_BLUE);


   }
 int a1=293,b1=46,a2=14,b2=120,a3=495,b3=125,a4=300,b4=195,c=265,d=260;

    int midx2=80,midy2=125,midx3=560,midy3=128,midx4=320,midy4=200;
   int stangle = 0, endangle = 360;
   int xradius = 70, yradius =40 ;
   int  c1;
   setcolor(4);
   ellipse(midx2,midy2,stangle,endangle,xradius,yradius);
   ellipse(midx3,midy3,stangle,endangle,xradius,yradius);
   ellipse(midx4,midy4,stangle,endangle,xradius,yradius);

   /* output text starting at the C.P. */
   outtextxy(a1,b1,"MAIN MENU");
   outtextxy(a2,b2,"1.Lib. Management");
   outtextxy(a3,b3,"2.Question Paper");
   outtextxy(a4,b4,"3.EXIT");
   outtextxy(c,d," Enter Choice - ");
   cin>>c1;
   cleardevice();
   closegraph();
   return c1;
   }



void main()
{clrscr();
 front_pg();
 char cho;
 do{
    clrscr();
    int ch;
    ch=mainmenu();
    switch(ch)
       {case 1:cl();
	       break;
	case 2:do{clrscr();
		  int ch;
		  ch=menu();
		  switch(ch)
		     {case 1:login();
			     break;
		      case 2:quegen();
			     break;
		      case 3:exit(0);
		      default:cout<<"\n\n\n\t\t\t\t\t\tInvalid choice";
		     }
		  clrscr();
		  gotoxy(26,13);
		  cout<<"\n\n\t\t\t\tDo you want to visit the menu\n";
		  cin>>cho;
		  }while(cho=='y' || cho=='Y');
		  clrscr();
		  gotoxy(22,12);
		  cprintf("..........THANK YOU.......:-)");
		  break;
	default:cout<<"\n\nInvalid choice";
       }
  clrscr();
  gotoxy(26,13);
  cout<<"\n\n\t\t\t\tDo you want to visit the Main menu\n";
  cin>>cho;
  }while(cho=='y' || cho=='Y');
getch();
}
