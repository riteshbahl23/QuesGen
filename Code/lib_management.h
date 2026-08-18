#include<logo.h>
#include<alloc.h>
#include<graphics.h>
#include<iostream.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int i,k=0,a[10],l=0;
       char chf;
       char b[10][80];
int q,h,r=0,p=0,z=0,flag2=0,e=0,flag1=0,w,g=0,password[80],j=0,flag=0;
   char usernm[80],c;


void glog1()
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

int y=0;
void passo1()
{gotoxy(15,13.5);
   do{c=getch();
      if(c!=13 && flag==0)
	{if((c>=65 && c<=90)||(c>=97 && c<=122)||c==32||c==8)
	    {if(c!=8)
		y+=8;
		 outtextxy(110+y,194,"|");
		 outtextxy(110+y,196,"|");
		 outtextxy(110+y,192,"|");
		 outtextxy(110+y,198,"|");
		 outtextxy(110+y,200,"|");
	     cout<<c;
	     usernm[k++]=(char)c;
	     if(c==8)
	       {--k;

				      y-=16;
	       }
	    }
	 else
	    {
	     outtextxy(100,400,"Enter name not digit");
	    }
	}
      else
	 {flag=1;
	  if(c==13)
	     {g++;
	       outtextxy(109,320,"|");
	    }
	  else
	    {if(c>=48&&c<=57)
	       {z+=9;
		outtextxy(100+z,320,"*");
				      outtextxy(100+z+9,320,"|");

		password[l++]=(int)(c-48);
			if(c==8)
		   {--l;
		    --j;
		   }
	       }
	     else
	       outtextxy(100,400,"Enter name not digit");

	    }

	 }
    }while(g!=2);
}

struct info
{int regno;
char nm[80];
};
info I[80]={{10701,"Abhimanyu Singh"},
	    {10702,"Abhisneha Singh"},
	    {10703,"Aditi Aggarwal"},
	    {10704,"Aditya Kumar"},
	    {10705,"Akshat Surana"},
	    {10706,"Anjali Kumari"},
	    {10707,"Anjali Sharma"},
	    {10708,"Ankit Choudhary"},
	    {10809,"Arjun Singh"},
	    {10710,"Arpit Mandawat"},
	    {10711,"Ashish Kumar"},
	    {10712,"Ashutosh Sonel"},
	    {10713,"Chhayansh Vashistha"},
	    {10714,"Chirag Mathur"},
	    {10715,"Divyansh Panwar"},
	    {10716,"Duke Soni"},
	    {10717,"Gagan Sipani"},
	    {10718,"Giriraj Parihar"},
	    {10719,"Harsh Uttamchandani"},
	    {10720,"Harshita Leela"},
	    {10721,"Harshul Verma"},
	    {10722,"Harshvardhan Singh"},
	    {10723,"Isha Beaspal"},
	    {10724,"Jason Daniel"},
	    {10725,"Jatin Sinwria"},
	    {10726,"Jeetendra Choudhary"},
	    {10727,"Kadambari Purohit"},
	    {10728,"Kanak Sharma"},
	    {10729,"Kartik Chouhan"},
	    {10730,"Kritika Deora"},
	    {10731,"Kishore Choudhary"},
	    {10732,"Lakshay Anand"},
	    {10733,"Mahima Choudhary"},
	    {10734,"Mukul Mundiyara"},
	    {10735,"Parul Choudhary"},
	    {10736,"Pawan Kumar"},
	    {10737,"Pragyesh Gupta"},
	    {10738,"Prashul Vaishnav"},
	    {10739,"Rajat Pareek"},
	    {10740,"Ratneesh Pareek"},
	    {10741,"Raunak Sharma"},
	    {10742,"Reuben Joseph"},
	    {10743,"Rishabh Vyas"},
	    {10744,"Ruchit Rajput"},
	    {10745,"Sanket Sworoop"},
	    {10746,"Sanskriti Aggarwal"},
	    {10747,"Shubhankit Pandey"},
	    {10748,"Siddharth Kumbhat"},
	    {10749,"Siddharth Mehrotra"},
	    {10750,"Telson Thomas"},
	    {10751,"Vaibhav Purohit"},
	    {10752,"Vanshita Mittal"},
	    {10753,"Vatsal Bishnoi"},
	    {10754,"Yash Bharti"},
	    {10755,"Archana Aggarwal"}};

void login1()
{ do{
       if(flag1==1)

       flag1=y=flag2=r=p=g=l=j=z=k=flag=0;
  cprintf("This is case sensitive program......");
    glog1();
    passo1();
    w=-1;
    for(i=0;i<=54;i++)
       {flag2=0;
	e=0;
	h=k;
	while(I[i].nm[e++]!='\0');
	--e;
	while(h!=0 || e!=0)
	     {if(I[i].nm[--e]!=usernm[--h])
		{flag2=1;
		 break;
		}
	      }
	if(flag2==0)
	  {w=i;
	   break;
	  }
       }
    if(w==-1)
      {flag1=1;
       outtextxy(100,400,"Invalid Username");
       getch();
      }
    else
      {
q=I[w].regno;
       for(r=0;q!=0;q/=10)
	   {r=q%10;
	    if(r!=password[--l])
	      {flag1=1;
	       outtextxy(100,400,"Invalid Password");
	       getch();
	       break;
	      }
	   }
      }
   }while(flag1==1);

 /*clean up */
cleardevice();
 closegraph();

 clrscr();
 gotoxy(26,13);
 cprintf("Thank you for loging in.....");

}


   int cho;

char main_menu()
 {//cleardevice();

 int gdriver=DETECT, gmode, errorcode;
   int bkcol;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "g:\\bgi");


   {
      /* clear the screen */
      cleardevice();

      /* select a new background color */
      setbkcolor(0);

      /* output a messsage */
      if (bkcol == WHITE)
	 setcolor(EGA_BLUE);
	 getch();

   }
 int a1=293,b1=46,a2=50,b2=120,a3=530,b3=125,a4=160,b4=195,a5=430,b5=200,c=265,d=260;

    int midx2=80,midy2=125,midx3=560,midy3=128,midx4=190,midy4=200,midx5=450,midy5=200;
   int stangle = 0, endangle = 360;
   int xradius = 70, yradius =40 ;
    char c1;
   setcolor(2);
   ellipse(midx2,midy2,stangle,endangle,xradius,yradius);
   ellipse(midx3,midy3,stangle,endangle,xradius,yradius);
   ellipse(midx4,midy4,stangle,endangle,xradius,yradius);
   ellipse(midx5,midy5,stangle,endangle,xradius,yradius);

   /* output text starting at the C.P. */
   outtextxy(a1,b1,"MENU");
   outtextxy(a2,b2,"1.EXPLORE");
   outtextxy(a3,b3,"2.ISSUE");
   outtextxy(a4,b4,"3.REVIEW");
   outtextxy(a5,b5,"4.EXIT");
   outtextxy(c,d," Enter Choice - ");
   c1= getch();
   cleardevice();
   closegraph();
   return c1;
   }


struct review
{char L1[80],L2[80],L3[80];
};
struct biographies
{int bno;
char bnm[80],authrnm[80];
};
struct autobiographies
{int bno;
char bnm[80],authrnm[80];
};
struct fiction
{int bno;
char bnm[100],authrnm[100];
};
struct academics
{int bno;
char bnm[80],authrnm[80];
};
struct children
{int bno;
char bnm[80],authrnm[80];
};

review  BR[12]={{"Traces the life of the short story writer, describing his early years, his\n","prison sentence, his writing success, and his untimely death.It provides a gl-\n","impse of prison life and the feelings prisoners have."},
		{"Well,‘Playing it My Way’ proved to be a book on Tendulkar’s achievements and\n","his life as a player rather than Tendulkar as a person. The book talks about \n","everything: Ranji centuries, his maiden century, Australia tours,world cups etc."},
		{"Professor Norman Sherry's battle to understand and explain the life of Graham\n","Greene is a legend of modern biography.When they first met 30 years ago,Greene\n","had read and admired one of Sherry's books - a study of Conrad."},
		{"This book examines the extraordinary contribution of Sardar Patel,from his \n","unflinching support to Gandhi's satyagrahas and the Indian freedom struggle,to\n","his farsighted and courageous approach in a strong,integrated India."},
		{"Mary Lutyens makes it easy to grasp an accurate picture and history of this \n","complicated theosophist philosopher. As with most of us, Krishnamurti lived \n","what I would describe as different lifetimes during his decades of speaking."},
		{"Fortieth anniversary edition with a new preface by the author. A best-selling\n","book and award-winning film and television series, THE PAPER CHASE is at its\n","heart the story of a young midwesterner, James Hart, who finds himself."},
		{"In this sensitive memoir an Indian architect living in England since 1960 wri-\n","tes of his life there and tells of the aspects and attitudes ofBritish society\n","that the stories of his childhood had never prepared him for: ugly industries."},
		{"In this Judith Cornell has potraid the life of a saintly person called Aman,he\n","is one the most influenced person of his times.He has also\n","potraid the simplicity of aman's life."},
		{"The Indian consensus that Jawaharlal Nehru (1889–1964) constructed as the nat-\n","ion's first prime minister, Tharoor writes with unsparing objectivity,has \n","frayed: democracy endures, secularism is besieged, nonalignment is all."},
		{"On the morning of October 31, 1984, as she walked through her garden, smiling\n","with hands raised and palms pressed together in the traditional Indian namaste\n","greeting, Indira Nehru Gandhi was assassinated by her own bodyguards."},
		{"Walter Isaacson’s biography of Steve Jobs is in some ways another product cre-\n","ated from the mind of its subject. Though Jobs was insistent that he wouldn’t\n","interfere with the writing of the book and in fact he seems not to have read."},
		{"Humans in suffering tend to feel hopeless with a deep sense of failure. MAN's\n","SEARCH FOR MEANING (Frankl, 1984) is a helpful book during such times: it is\n","highly probable that one would find a solution to their depressed feelings."}};
review ABR[15]={{"It is the autobiography of the veteran actor, Yousuf Khan, popularly known as\n","Dilip Kumar. This book consists of various interesting anecdotes from the life\n","of Dilip Kumar, the legend who captured many hearts with his pformances."},
		{"Wings of Fire is an autography of APJ Abdul Kalam covering his early life and\n","his work in Indian space research and missile programs. It is the story of a\n","boy from a humble background who went on to become key player in space research."},
		{"Gandhiji’s influence on India is a topic for another post.This book is his au-\n","tobiography and his views of what was going on around him during the beginni-\n","ngs of the movement for a free and independent India. It is a classic book."},
		{"My Autobiography, A Fragment by F. Max Müller. This book is a reproduction of\n","the original book published in 1901 and may have some imperfections such as\n","marks or hand-written notes.Its an amazing book to read."},
		{"The story of Malala Yousafzai, a Pashtun girl from Pakistan’s Swat Valley who\n","was born of an illiterate mother, grew up in her father’s school, read Stephen\n","Hawking’s “A Brief History of Time” by age11 and has gift for stirring oratory."},
		{"Virtually self-taught,a man of letters, a printer, a scientist,an inventor, an\n","editor, and a writer, and he was probably the most successful diplomat in Ame-\n","rican history.David Hume hailed him as the first great philosopher & great man."},
		{"There are many important messages in this book,but the most important message-","that all people have the right to live in freedom. Anne’s story shows us that \n","just because people may differ in religion or race,should be treated equal."},
		{"“Long Walk to Freedom”,the autobiography of Nelson Mandela,describes the South\n","African antiapartheid struggle from the perspective of one of its most import-\n","ant participants.It was published in the year 1995."},
		{"Supreme,tyrant,Powerful- history has given Adolf Hitler many names. In Mein\n","Keimf My Struggle, often called the Nazi bible, Hitler describes his life,\n","frustrations,ideals,and dreams.Young Hitler had a desire to be a painter."},
		{"Dreams From My Father is a remarkable story, beautifully told, and inspired by\n","its author's divided family history. The son of a black African farmer from \n","Kenya and a white American mother from the Midwest.Interesting thoughts he had."},
		{"Not surprisingly, he returns to both themes and many more in what publishers\n","call his final thoughts.Pioneering thinkers leave their names on their science.\n","The late Stephen Hawking did not believe in afterlife,but he has one the same."},
		{"When Michelle Obama, aged four,began her piano lessons with a great aunt on\n","the proletarian South Side of Chicago,the first instruction barked at herby her\n","crabby relative was “Find middle C”.That key,its ivory chipped carius tooth."},
		{"A Moveable Feast is Hemingway's memoir of his life in Paris in the 1920s,and\n","I read it while I was living in Paris in my twenties. It'sa short,perfect book.\n","Hemingway wrote it when he was a successful man."},
		{"The book is an autobiography of Helen Keller, who is one of the most respected\n","and internationally recognised visually impaired and deaf ladies,who struggled\n","against all odds to educate herself,was bilnd at 19 months of age."},
		{"Even those not convinced that Andre Agassi was the best tennis player of his \n","time will readily admit he outdid all others in attracting attention, beginning\n","in the 1980s, when he was a teenage from Las Vegas who blazed in flamboyant."}};

review  CR[16]={{"Memories of thrilling adventures, mischievous plots, shocking secrets and new\n","friendships still excite me to this day. The stories of Darrell Rivers and her\n","friends at their new school,Malory Towers,delight me and the unexpected twists."},
		{"Disgusted when he is denied access to the pyramids of Dahshoor and assigned to\n","a rubble heap, Emerson finds his curiosity piqued when an antiquities dealer \n","is murdered and a mummy case disappears.May interest mystery lovers."},
		{"Alice's Adventures in Wonderland by Lewis Carroll is a story about Alice who \n","falls down a rabbit hole and lands into a fantasy world that is full of weird,\n","wonderful people and animals.It'sclassic children's book that is also popular."},
		{"Townsend, author of the phenomenally successful Adrian Mole books,here brings\n","off an audacious notion with considerable elan.She imagines a Britain where an\n","unforgiving, newly elected Republican Party in a provincial city."},
		{"The second novel of Maggie Furey's Aurian saga unfolds in a sweeping blaze of\n","glory,terror,and mystic enchantment,as Lady Aurian and her lover Anvar return\n","to the holy city of Nexis to find that the crazed Archmage Miathan's sorcery."},
		{"It is certainly the most arrogant piece of science writing I have ever read.\n","It also displays a jawdropping ignorance of some key issues,of which more later\n","Yet,despite its shortcomings,it may be the most important contribution todecade\n"},
		{"Parents need to know that this thrill-a-minute story, the first in the Harry\n","Potter series, respects kids' intelligence and motivates them to tackle its\n","greater length and complexity,play imaginative games,and try to solve puzzles."},
		{"Siddharth Basu is a renowned author known for his compassionate skills for \n","writing books related to general knowledge and related subjects to G.K. He is\n","been writing many such books for junio classes."},
		{"Essays are an important part of our english language culture.English society\n","is doing the important work of updating this book every year with the latest\n","change in language pattern and intoducing new writing techniques."},
		{"It's a controversial comedy that introduces to us the prejudices of Shakespe-\n","are's time towards Jews while seeming to perpetuate them. A merchant of Venice\n","named Anthony borrows money from a moneylender named Shylockfor his friend."},
		{"This tragedy by William Shakespeare was published in the First Folio of 1623.\n","Since then many different publishing houses have published it. It was written\n","for adultsbutoften read in high school classrooms.The age reflects readability."},
		{"Richard Pevear and Larissa Volokhonsky,the highly acclaimed translators of War\n","and Peace, Doctor Zhivago, and Anna Karenina, which was an Oprah Book Club pic\n","and million-copy bestseller, their unmatched talents to The Selected Stories."},
		{"Noble prizes are the most awaited prizes every year.Noble society has brought\n","an amazing book for children giving an insight of noble prizes in the past 100\n","years and describing what were the expriences of noble laurets."},
		{"The inspiring stories of 25 IIM Ahmedabad graduates who chose the rough road\n","of entrepreneurship. They are diverse in age, in outlook and the industries\n","made a mark in. But they have one thing in common: they believed in the power."},
		{"English Channel is one of the oldest magzine published by Indian Society for\n","updating the english stories for children,it also includes some english grammer\n","practicse exercises which are very useful for children who beginners in it."},
		{"Bob Slocum was living the American dream.He had a beautiful wife,three lovely\n","children,a nice house...and all the mistresses he desired. He had it all,that\n","is but happiness. Slocum was discontent. Inevitably, inexorably, his discontent."}};


review  FR[20]={{"Everyone who is even remotely interested in fiction has heard of War and Peace\n","it is one of the most famous works of literature in history and generally co-\n","nsidered to be an absolute masterpiece.This book has reached mythical status."},
		{"20 years after the events of her childhood,Jean Louise Finch goes back to her \n","childhood home (Maycomb, Alabama) to visit her family and friends – though she\n","quickly begins to realise that everything is not as it seems and has changed."},
		{"British travel editor O'Brien makes an impressive debut with a gritty proced-\n","ural set in the south of France. Chief Insp.Daniel Jacquot faces a baffling se-\n","ries of murders—the victims are all women who've been sexually assaulted & left."},
		{"The Terminal Beach (1964) was published as a paperback in the US from Berkeley\n","Books,and as a hardcover from Gollancz in the UK. The contents of the two col-","lections are very different, and my review will cover the UK version."},
		{"New Year’s Eve, 1975: Arturo Belano and Ulises Lima, founders of the visceral\n","realist movement in poetry, leave Mexico City in a borrowed white Impala. Their\n","quest: to track down the obscure, vanished poet Cesárea Tinajero."},
		{"Two Europeans stroll through a meadow. As accomplished miniaturists, their \n","work sets out to render both the individualism of the object depicted and the \n","inner truth which issues from the artist's mind.Its a story of western art."},
		{"Who was Zodiac?A serial killer who claimed 37 dead.A sexual sadist who taunted\n","police with anonymous notes. A madman who was never apprehended. This is the \n","first,complete account of Zodiac's reign of terror.An amazing murder mystery ."},
		{"Ira Levin's oeuvre includes more bestselling novels than is decent,considering\n","he was also an accomplished playwright,screenwriter and composer Corsair is on\n","to a good thing republishing some of his classic popular thrillers."},
		{"Reissued a decade after its first publication to coincide with the release of\n","Christopher Nolan's film,The Prestige takes us into the world of 19th-century \n","stage magic and thereafter into an altogether more fantastical world of doubles."},
		{"Edward Bellamy's classic look at the future has been translated into over twen-\n","ty languages and is the most widely read novel of its time.A young Boston ge\n","tleman is mysteriously transported from the nineteenth to the twenty-first cent."},
		{"When Detective Reardon is found dead, motive is a big question mark. But when \n","his partner becomes victim number two, it looks like open-and-shut grudge \n","killings. That is, until a third detective buys it.An amazing book to read."},
		{"This is a stunning collection of short stories acclaimed fantasy writer Neil\n","Gaiman.His distinctive genius has been championed by writers as diverse as No-\n","rman Mailer &Stephen King.The Sandman Neil Gaiman created one of the best novel."},
		{"Has chosen one of the most interesting Texas figures as the central character\n","in No Country for Old Men - the county sheriff. The old Texas sheriffs served \n","as law men, psychiatrists, Mr Fixits, social workers, medical aides and lonely."},
		{"Two different people from two very different worlds. Can a mermaid and a human\n","boy find love? Can they survive in his world and hers?A regal and highly tra-\n","ined young mermaid, Marina, is on her first spy mission to Skyeworld in 2020."},
		{"They call it denial marketing the process whereby the contents of JK Rowling's\n","books are guarded like the crown jewels until publication day.It made sense \n","with Harry Potter,when the world wanted to know what happened to the boy wizard."},
		{"Like a mother who flagrantly dotes on her wildest child, Joanne Harris has al-\n","ways lavished love on her darkest characters - think of Renaud in Chocolat, \n","Brismand in Coastliner Now inHoly Fools she has given birth to greatest villain."},
		{"Margaret Mitchell's monumental epic of the South won a Pulitzer Prize, gave \n","rise to the most popular motion picture of our time,and inspired a sequel that\n","became the fastest selling novel of century.One of popular ever written books."},
		{"The true, absorbing and sometimes frightening documentary of the world's most\n","successful narcotics investigation,The French Connection is one of the most \n","fascinating crime accounts of our time.Abook full of suspense is a must read."},
		{"A friend asked what I was reading.When I responded that it was a new novel ba-\n","sed on the life and legacy of Robert Oppenheimer he said, “You know, there’s\n","a real book about him.A real book being nonfiction,won  the Pulitzer Prize."},
		{"John Grisham is now an institution a writer whose bestselling status is assure\n","So assured, in fact, that expectations for each new book are as high as can be\n","imagined. Does The Appeal make the grade?And will it appeal to Grisham admirers."}};


review ACR[20]={{"Genetics by Russel has simply changed the the world looks at the genetic pat-\n","tern of living beings.The explanations whic he has given with the help of il-\n","lustrations are amazing and very useful for the students at the +2 level."},
		{"This book is indispensable for science students at the +2 level,especially \n","for the entrance examinations of engineering and medical colleges.This book\n","highlights the importance of the mole concept in problem solvings quickly."},
		{"This book is meant for helping students prepare for JEE-IIT & other technical\n","institutes.It will also be useful for preparing for those examinations in \n","which multiple choice questions are asked & understand differnt types of MCQs."},
		{"Those who have followed Dr. Verma's scientific work always enjoyed the outstan\n","-ding contributions he has made in carious reaserach areas.He was an outstand-\n","ing teacher of physics department of IIT kanpur during his career."},
		{"Those who have followed Dr. Verma's scientific work always enjoyed the outstan\n","-ding contributions he has made in carious reaserach areas.He was an outstand-\n","ing teacher of physics department of IIT kanpur during his career."},
		{"Offering time-tested problems, conceptual and visual pedagogy, and a state-of-\n","the-art media package, this 11th edition looks to the future of university ph-\n","ysics, in terms of both content and approach.This one is one of of a kind."},
		{"This book draws together the key contributions to the major areas of microeco-\n","nomic theory from the last few decades. It is intended to provide both underg-\n","raduate and graduate students with an essential guide to the current state."},
		{"This book is the one of the most beautifully written book by the author. Trig-\n","onometry is considered to be one of the easiest topics in mathematics by the \n","aspirants of IIT JEE, AIEEE and other state level engineering examination."},
		{"This book is the one of the finest piece of work which has a right mix of bas-\n","ics and standard problems. The book contains a good level of concepts and exe-\n","rcises in the complete syllabus of coordinate geometry pertaining to IIT JEE."},
		{"No doubt without Aptitude no competitive examination is there. Fast Track Obj-\n","ective Arithmetic book is preferred and selected by subject expert and ranker\n","who got success in competitive exams.So take a look and don't ignore."},
		{"Theory and Policy provides students with comprehensive coverage of all the esse-","ntial concepts of macroeconomics.A balanced approach between theoretical and","mathematical aspects of the subject has been adopted to ensure ease in learning."},
		{"Comprehensively written, this book presents the political theories,concepts,a-\n","nalysis,thoughts and main currents. The book begins with introduction to poli-\n","tical theory, its history,evolution & approaches while also discussing forms."},
		{"Darwin's theory of natural selection issued a profound challenge to orthodox \n","thought and belief: no being or species has been specifically created; all are","locked into pitiless struggle for existence,with extinction looming thosenot fit"},
		{"This volume falls somewhere between a history of science for young people and \n","a compendium of scientific trivia. Asimov, author of A History of Physics and \n","countless other books, discusses originsfrom human flight to viruses, earth."},
		{"Writing in The Wall Street Journal,David Gress called Francis Fukuyama's Ori-\n","gins of Political Order magisterial in its learning and admirably immodest in\n","its ambition.In The New York Times Book Review, Michael Lind described the book."},
		{"Irving Howe's classic investigation of the role of revolutionary ideas in fic-\n","tion is here reprinted in a new paperback edition. In establishing the role of\n","the political novel and tracing its growth into the twentieth century."},
		{"Modern India is the world's largest democracy, a sprawling, polyglot nation c-\n","ontaining one-sixth of all humankind.The existence of such a complex and dist-\n","inctive democratic regime qualifies as one of the world's bona fide politics."},
		{"Double Entry Bookkeeping is the foundation of Financial Accounting. If a Person\n","does not have proper understanding of Double Entry Bookkeeping, the person may\n","find Financial Accounting difficult.Principle of double entry bookkeeping."},
		{"Ott and Longnecker's AN INTRODUCTION TO STATISTICAL METHODS AND DATA ANALYSIS,\n","Sixth Edition, provides a broad overview of statistical methods for advanced\n","undergraduate and graduate students from a variety of disciplines have little."},
		{"The Complete Book of Maps & Geography provides 352 pages of fun exercises that\n","focus on developing necessary skills such as map interpretation, identifying \n","geography, global navigation, know more about all the geographical features etc."}};




biographies B[]={{1,"O.henry a Biography of William Sydney Porter","David Stuart"},
		{2,"Playing it my Way                           ","Boria Majumdar"},
		{3,"The Life of Graham Greene                   ","Norman Sherry"},
		{4,"Sardar Vallabh Bhai Patel                   ","B. Krishna"},
		{5,"Life and Death of Krishnamurti              "," Marry Lutyer"},
		{6,"The Paper Chase                             "," Hal Porter"},
		{7,"Through Brown Gas                           ","Prafulla Mohani"},
		{8,"Aman a Living Saint                         ","Judith Cornell"},
		{9,"Nehru the Invention of India                ","Shashi Tharoor"},
		{10,"The Life of Indra Nehru                    ","Catheree Frank"},
		{11,"Steve Jobs                                 ","Walter Isaacson"},
		{12,"Man's Search for Meaning                   ","Viktor Frankl"}};

autobiographies A[]={{1,"Dilip kumar                              ","Dilip Kumar"},
	       {2,"Wings of Fire                            "," A.P.J Kalam"},
	       {3,"My experiments with Truth                ","M.K. Gandhi"},
	       {4,"My Autobiography                         ", "F. Max Muller"},
	       {5,"I am Malala                              ", "Malala Youshzhai"},
	       {6,"Autobiography of Benjamin Franklin       ","Benjamin Franklin"},
	       {7,"Diary of a Young Girl                    ","Anne Frank"},
	       {8,"Long Walk to Freedom                     ","Nelson Mandela"},
	       {9,"Mein Kampf                               ","Adolf Hitler"},
	       {10,"Dreams from my Father                   ","Barack Obama"},
	       {11,"Brief Answers to big Questions          ","Stephen Hawking"},
	       {12,"Becoming                                ","Michelle Obama"},
	       {13,"A Movable Feast                         ", "Ernest Hemingway"},
	       {14,"The Story of My Life                    ","Helen Keller"},
	       {15,"Andre Agassi                            ","Andre Agassi"}};

 fiction F[]={{1,"War and Peace                             ","Zoe Tolstoy"},
	      {2,"Go set a Watchman                         ","Harper Lee"},
	      {3,"Jacquot and The Waterman                  ","Martin Oberoi"},
	      {4,"The Terminal Beach                        ","J.G. Ballard"},
	      {5,"The Savage Detectives                     ","Roberto Bolano"},
	      {6,"My Name is Red                            ","Orhan Pamuk"},
	      {7,"Zodiac                                    ","Robert Graysmith"},
	      {8,"The Boys from Brazil                      ","Ira Levin"},
	      {9,"The Prestige                              ","Christopher Priest"},
	      {10,"Looking Backward                         ","Edward Bellany"},
	      {11,"Cop Hater                                ","Ed McBain"},
	      {12,"Fragile Things                           ","Neil Gaiman"},
	      {13,"No Country For Old Men                   ","Cormac McCarthy"},
	      {14,"The Drowning World                       ","J.G. Ballard"},
	      {15,"The Casual Vacancy                       ","JK Rowling"},
	      {16,"Holy Fools                               ","Joanne Harris"},
	      {17,"Gone with the Wild                       ","Margaret Mitchell"},
	      {18,"The French Connection                    ","Robin Moore"},
	      {19,"Trinity                                  ","Leon Uris"},
	      {20,"The Appeal                               ","John Grishame"}};

academics AC[]={{1,"Genetics                                  ","Russel"},
		{2,"Modern Approach to Chemical Calculations  ","R.C. Mukherjee"},
		{3,"Modern Mathematics                        ","A Das Gupta"},
		{4,"Concepts of Physics vol 1                 ","HC Verma"},
		{5,"Concepts of Physics vol 2                 ","HC Verma"},
		{6,"Halidae University Physics                ","Hugh Young"},
		{7,"Introductary microeconomics               ","J.C. Dhingra"},
		{8,"Plane Trignometry                         ","SL Loney"},
		{9,"Coordinate Geometry                       ","SL Loney"},
		{10,"Quantitative Aptitude                    ","R.S. Agarwal"},
		{11,"Macroeconomics Theory and Policy         ","H.L. Ahuja"},
		{12,"Political Theory                         ","V.P. Mahajan"},
		{13,"The Origin of Species                    ","Charles Darwin"},
		{14,"The Origin of Man                        ","M. Nuturkh"},
		{15,"Political Order and Political Decay      ","Francis Yama"},
		{16,"Politics and Novel                       ","Irwin Howe"},
		{17,"Makers of Modern India                   ","Ramchandra Guha"},
		{18,"Double Entry Book Keeping                ","V Vasen"},
		{19,"Statistics Method                        ","SP Gupta"},
		{20,"Indian book of Maps                      ","Mapping Society"}};


children C[]={{1,"Molary Towers                                ","Anid Blyton"},
	      {2,"The Mummy Case                               ","Franklin W. Dixon"},
	      {3,"Alice in Wonderland                          ","Lewis Carroll"},
	      {4,"The Queen and I                              ","Su Townsad"},
	      {5,"Harp of Wings                                ","Maggie Furey"},
	      {6,"The World of Wora                            ","Colin Wilson"},
	      {7,"Harry Potter Part 1                          ","J.K. Rowling"},
	      {8,"G.K. Around the World                        ","Siddharth Basu"},
	      {9,"A Comphrensive Book of Essays                ","English Society"},
	      {10,"The Merchant of Venice                      ","William Shakespeare"},
	      {11,"Julius Ceaser                               ","Willam Shakespeare"},
	      {12,"Best of Anton Chekhov                       ","Anton Chekhov"},
	      {13,"100 years with Nobel Laurets                ","Nobel Society"},
	      {14,"Stay Hungry Stay Foolish                    ","Rashmi Bhansal"},
	      {15,"The English Channel                         ","Indian Express"},
	      {16,"Something Happened                          ","Joseph Heller"}};
void choice1(int cho1)
{                        switch(cho1)
			       {case 1:clrscr();
				       int i,ch1;
				       cout<<"BIOGRAPHIES\nLIST OF BOOKS\n";
				       cout<<"S no.\tName of the book\t\t\t\tAuthor of the book\n";
				       for(i=0;i<12;i++)
					  {cout<<B[i].bno<<"\t"<<B[i].bnm<<"\t"<<B[i].authrnm<<"\n";}
					   cout<<"ENTER CHOICE=\n";
					   cin>>ch1;
					   cout<<B[ch1-1].bno<<"\t"<<B[ch1-1].bnm<<"\tby"<<B[ch1-1].authrnm;
					   a[k]=B[ch1-1].bno;
					   strcpy(b[k],B[ch1-1].bnm);
					   k++;
					   break;
				case 2:clrscr();
				       int j,ch2;
				       cout<<"AUTOBIOGRAPHIES\nLIST OF BOOKS\n";
				       for(j=0;j<15;j++)
					  {cout<<A[j].bno<<"\t"<<A[j].bnm<<"\t"<<A[j].authrnm<<"\n";}
					   cout<<"ENTER CHOICE=\n";
					   cin>>ch2;
					   cout<<A[ch2-1].bno<<"\t"<<A[ch2-1].bnm<<"\tby"<<A[ch2-1].authrnm;
					   a[k]=A[ch2-1].bno;
					   strcpy(b[k],A[ch2-1].bnm);
					   k++;
					   break;
				case 3:clrscr();
				       int k,ch3;
				       cout<<"Fiction\nLIST OF BOOKS\n";
				       for(k=0;k<19;k++)
					  {cout<<F[k].bno<<"\t"<<F[k].bnm<<"\t"<<F[k].authrnm<<"\n";}
					   cout<<"ENTER CHOICE=\n";
					   cin>>ch3;
					   cout<<F[ch3-1].bno<<"\t"<<F[ch3-1].bnm<<"\tby"<<F[ch3-1].authrnm;
					   a[k]=F[ch3-1].bno;
					   strcpy(b[k],F[ch3-1].bnm);
					   k++;
					   break;
				case 4:clrscr();
				       int l,ch4;
				       cout<<"ACADEMICS\nLIST OF BOOKS\n";
				       for(l=0;l<20;l++)
					  {cout<<AC[l].bno<<"\t"<<AC[l].bnm<<"\t"<<AC[l].authrnm<<"\n";}
					   cout<<"ENTER CHOICE=\n";
					   cin>>ch4;
					   cout<<AC[ch4-1].bno<<"\t"<<AC[ch4-1].bnm<<"\tby"<<AC[ch4-1].authrnm;
					   a[k]=AC[ch4-1].bno;
					   strcpy(b[k],AC[ch4-1].bnm);
					   k++;
					   break;
				case 5:clrscr();
				       int m,ch5;
				       cout<<"CHILDREN'S BOOK\nLIST OF BOOKS\n";
				       for(m=0;m<16;m++)
					  {cout<<C[m].bno<<"\t"<<C[m].bnm<<"\t"<<C[m].authrnm<<"\n";}
					   cout<<"ENTER CHOICE=\n";
					   cin>>ch5;
					   cout<<C[ch5-1].bno<<"\t"<<C[ch5-1].bnm<<"\tby"<<C[ch5-1].authrnm;
					   a[k]=C[ch5-1].bno;
					   strcpy(b[k],C[ch5-1].bnm);
					   k++;
					   break;
				default:cout<<"Error=Invalid choice";
			       }
			       }

void choice2(int cho1)
     {switch(cho1)
			      {case 1:clrscr();
				      int i,ch1;
				      cout<<"BIOGRAPHIES\nLIST OF BOOKS\n";
				      cout<<"S no.\tName of the book\t\t\t\tAuthor of the book\n";
				      for(i=0;i<12;i++)
					 {cout<<B[i].bno<<"\t"<<B[i].bnm<<"\t"<<B[i].authrnm<<"\n";}
					  cout<<"ENTER CHOICE=\n";
					  cin>>ch1;
					  clrscr();
					  gotoxy(22,2);
					  cprintf("Overview of:");
					  cout<<B[ch1-1].bnm<<"\n\n\n";
					  cout<<BR[ch1-1].L1<<BR[ch1-1].L2<<BR[ch1-1].L3;
					  break;
			      case 2:clrscr();
				     int j,ch2;
				     cout<<"AUTOBIOGRAPHIES\nLIST OF BOOKS\n";
				     for(j=0;j<15;j++)
					{cout<<A[j].bno<<"\t"<<A[j].bnm<<"\t"<<A[j].authrnm<<"\n";}
					 cout<<"ENTER CHOICE=\n";
					 cin>>ch2;
					 clrscr();
					 gotoxy(22,2);
					 cprintf("Overview of:");
					 cout<<A[ch2-1].bnm<<"\n\n\n";
					 cout<<ABR[ch2-1].L1<<ABR[ch2-1].L2<<ABR[ch2-1].L3;
					 break;
			      case 3:clrscr();
				     int k,ch3;
				     cout<<"Fiction\nLIST OF BOOKS\n";
				     for(k=0;k<19;k++)
					{cout<<F[k].bno<<"\t"<<F[k].bnm<<"\t"<<F[k].authrnm<<"\n";}
					 cout<<"ENTER CHOICE=\n";
					 cin>>ch3;
					 clrscr();
					 gotoxy(22,2);
					 cprintf("Overview of:");
					 cout<<F[ch3-1].bnm<<"\n\n\n";
					 cout<<FR[ch3-1].L1<<FR[ch3-1].L2<<FR[ch3-1].L3;
					 break;
			      case 4:clrscr();
				     int l,ch4;
				     cout<<"ACADEMICS\nLIST OF BOOKS\n";
				     for(l=0;l<20;l++)
					 {cout<<AC[l].bno<<"\t"<<AC[l].bnm<<"\t"<<AC[l].authrnm<<"\n";}
				     cout<<"ENTER CHOICE=\n";
				     cin>>ch4;
				     clrscr();
				     gotoxy(22,2);
				     cprintf("Overview of:");
				     cout<<AC[ch4-1].bnm<<"\n\n\n";
				     //cout<<ACR[ch3-1].L1<<ACR[ch3-1].L2<<ACR[ch3-1].L3;
				     break;
			      case 5:clrscr();
				     int m,ch5;
				     cout<<"CHILDREN'S BOOK\nLIST OF BOOKS\n";
				     for(m=0;m<16;m++)
					{cout<<C[m].bno<<"\t"<<C[m].bnm<<"\t"<<C[m].authrnm<<"\n";}
				     cout<<"ENTER CHOICE=\n";
				     cin>>ch5;
				     clrscr();
				     gotoxy(22,2);
				     cprintf("Overview of:");
				     cout<<C[ch5-1].bnm<<"\n\n\n";
				     cout<<CR[ch5-1].L1<<CR[ch5-1].L2<<CR[ch5-1].L3;
				     break;
			      default:cout<<"Error=Invalid choice";
			     }
      }

void choice3(int cho1)
{ switch(cho1)
			    {case 1:clrscr();
				    int i,ch1;
				    char BF[20][120];
				    cout<<"BIOGRAPHIES\nLIST OF BOOKS\n";
				    cout<<"S no.\tName of the book\t\t\t\tAuthor of the book\n";
				    for(i=0;i<12;i++)
					{cout<<B[i].bno<<"\t"<<B[i].bnm<<"\t"<<B[i].authrnm<<"\n";}
				    cout<<"ENTER CHOICE=\n";
				    cin>>ch1;
				    clrscr();
				    gotoxy(22,2);
				    cprintf("You can enlighten our books with your reviews:\n\n");
				    gotoxy(2,7);
                                                                                 
                                                                                     cin>>BF[ch1-1];
				    break;
			     case 2:clrscr();
				    int j,ch2;
				    char AF[20][120];
				    cout<<"AUTOBIOGRAPHIES\nLIST OF BOOKS\n";
				    for(j=0;j<15;j++)
				       {cout<<A[j].bno<<"\t"<<A[j].bnm<<"\t"<<A[j].authrnm<<"\n";}
					cout<<"ENTER CHOICE=\n";
					cin>>ch2;
					clrscr();
					gotoxy(22,2);
					cprintf("You can enlighten our books with your reviews:\n\n");
					gotoxy(2,7);
					cin>>AF[ch2-1];
					break;
			     case 3:clrscr();
				    int k,ch3;
				    char FF[20][120];
				    cout<<"Fiction\nLIST OF BOOKS\n";
				    for(k=0;k<19;k++)
				       {cout<<F[k].bno<<"\t"<<F[k].bnm<<"\t"<<F[k].authrnm<<"\n";}
				    cout<<"ENTER CHOICE=\n";
				    cin>>ch3;
				    clrscr();
				    gotoxy(22,2);
				    cprintf("You can enlighten our books with your reviews:\n\n");
				    gotoxy(2,7);
				    cin>>FF[ch3-1];
				    break;
			     case 4:clrscr();
				    int l,ch4;
				    char ACF[20][120];
				    cout<<"ACADEMICS\nLIST OF BOOKS\n";
				    for(l=0;l<20;l++)
				       {cout<<AC[l].bno<<"\t"<<AC[l].bnm<<"\t"<<AC[l].authrnm<<"\n";}
				    cout<<"ENTER CHOICE=\n";
				    cin>>ch4;
				    clrscr();
				    gotoxy(22,2);
				    cprintf("You can enlighten our books with your reviews:\n\n");
				    gotoxy(2,7);
				    cin>>ACF[ch4-1];
				    break;
			     case 5:clrscr();
				    int m,ch5;
				    char CF[20][120];
				    cout<<"CHILDREN'S BOOK\nLIST OF BOOKS\n";
				    for(m=0;m<16;m++)
				       {cout<<C[m].bno<<"\t"<<C[m].bnm<<"\t"<<C[m].authrnm<<"\n";}
				    cout<<"ENTER CHOICE=\n";
				    cin>>ch5;
				    clrscr();
				    gotoxy(22,2);
				    cprintf("You can enlighten our books with your reviews:\n\n");
				    gotoxy(2,7);
				    cin>>CF[ch5-1];
				    break;
			    default:cout<<"Invalid choice";
			   }
		      }


void choice(int cho)
     {switch(cho)
	    {case '2':do{clrscr();
			 l++;
			 int cho1;
			 gotoxy(18,1);
			 cprintf("ISSUING A BOOK");
			 gotoxy(18,1);
			 cout<<"\n1.Biographies\n2.Autographies\n3.Fiction\n4.Academics\n5.Children's Book\nEnter the choice=";
			 cin>>cho1;
			 choice1(cho1);
			 cout<<"\n\nDo you want to issue more books?";
			 cin>>chf;
			}while((chf=='y'|| chf=='Y')&&l!=2);
		      clrscr();
		      gotoxy(2,22);
		      if(l==2)
		      cout<<"Error=You can't issue more than 2 books at time";
		      cout<<"\n\n\nThe books that you have issued are:\n";
		      for(i=0;i<k;i++)
		      cout<<a[i]<<"\t"<<b[i]<<"\n";
		      break;
	    case '1':do{clrscr();
			int cho1;
			gotoxy(25,1);
			cprintf("\nEXPLORING THE WORLD OF BOOK");
			gotoxy(18,1);
			cout<<"\n\n\n1.Biographies\n2.Autographies\n3.Fiction\n4.Academics\n5.Children's Book\nEnter the choice=";
			cin>>cho1;
			choice2(cho1);
			cout<<"\n\nDo you want to explore more books?";
			cin>>chf;
		      }while(chf=='y'|| chf=='Y');
		      break;
	     case '3':do{clrscr();
		      int cho1;
		      gotoxy(18,1);
		      cprintf("FEEDBACK");
		      gotoxy(18,1);
		      cout<<"\n1.Biographies\n2.Autographies\n3.Fiction\n4.Academics\n5.Children's Book\nEnter the choice=";
		      cin>>cho1;
		      choice3(cho1);
		     cout<<"\n\nThank you for your feedback.\nDo you wanna give more feedback?";
		     cin>>chf;
		    }while(chf=='y'|| chf=='Y');
		    break;
	    case '4':exit(0);
	    default:gotoxy(14,12);
		    cprintf("\n\nError=Invalid choice");
	   }
      }

void cl()
{clrscr();
    gotoxy(26,8);
    cprintf("To login press enter key\n\n\n\n");
    gotoxy(26,16);
    cprintf("Else press any key.....");
    if(getche()==13)
       login1();
    getch();
    char ch;
    do{char cho= main_menu();
       gotoxy(49,17);
	cout<<cho;
       choice(cho);
       clrscr();
       gotoxy(26,13);
       cout<<"\n\nDo you want to visit the Main menu\n";
       cin>>ch;
      }while(ch=='y' || ch=='Y');
   clrscr();
   gotoxy(22,12);
   cprintf("THANK YOU FOR VISITING OUR LIBRARY .......:-)");
getch();
}
