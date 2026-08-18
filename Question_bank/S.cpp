#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<conio.h>

class quest
	{int clas,marks,qno;
	 char Que[150];
	  public:
	    quest()
	     {clas=marks=qno=0;
	      strcpy(Que,"Null");
	     }
	    ~quest()
	      {cout<<" ";}
	    void enter(char ch[150]);
	    void disp()
		{cout<<clas<<" "<<qno<<" "<<marks<<" "<<Que;
		}
	};


void quest::enter(char ch[150])
	 {int c=0,k=0;
		char a[5];
		for(int i=0;ch[i]!='\0';i++)
		   {if(c==0)
		      {if(ch[i]=='#')
			 {clas=atoi(a);
			  c++;
			  k=0;
			 }
		       else
			 {a[k++]=ch[i];
			  a[k]='\0';
			 }
		      }
		    else if(c==1)
		      {if(ch[i]=='#')
			 {qno=atoi(a);
			  c++;
			  k=0;
			 }
		       else
			 {a[k++]=ch[i];
			  a[k]='\0';
			 }
		      }
		   else if(c==2)
		      {if(ch[i]=='#')
			 {marks=atoi(a);
			  c++;
			  k=0;
			 }
		       else
			 {a[k++]=ch[i];
			  a[k]='\0';
			 }
		      }
		   else if(c==3)
		     Que[k++]=ch[i];
		  }
		 Que[k]='\0';
		}

void transfer()
	{quest q;

	 char ch[150];
	 ifstream fin;
	 ofstream fout;
	 fin.open("subj.txt");
	 fout.open("masters.dat",ios::binary);
	 if(!fin || !fout)
	    cout<<"error";
	 else
	    {fin.seekg(0);
while(!fin.eof())
		 {//cout<<"yas ";
		//  getch();
		  fin.getline(ch,150);
		  cout<<ch;
		  getch();
		  q.enter(ch);
		  q.disp();
		  fout.write((char*)&q,sizeof(q));
//		  cout<<"good";
		 }
	     cout<<"\t\t..........Binary file created..........";
	     getch();
	    }
	fin.close();
	fout.close();
     }


void main()
{clrscr();
 char ch;
 transfer();

getch();
}

