#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<alloc.h>
#include<iomanip.h>
#define maxlabels 8
void switch_case();
void details();
void startmenu();
void load();
void load()
{
 void *buffer;
 unsigned int size;
 line(230,330,370,330);
 line(230,350,370,350);
 line(226,335,226,345);
 line(226,335,230,330);
 line(226,345,230,350);
 line(374,335,374,345);
 line(374,335,370,330);
 line(374,345,370,350);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
 outtextxy(255,365,"Loading...");
 int x=232,y=336,x1=236,y1=344;
 for(int i=1;i<5;i++)
 {
  setfillstyle(9,BLUE);
  bar(x,y,x1,y1);
  x=x1+2;
  x1=x1+6;
 }
 size=imagesize(232,336,256,344);
 buffer=malloc(size);
 getimage(232,336,256,344,buffer);
 x=232;
 int m=0;
 while(!kbhit())
 {
  putimage(x,336,buffer,XOR_PUT);
  x=x+2;
  if(x>=350)
  {
   m++;
   x=232;
   if(m==2)
    break;
  }
  putimage(x,336,buffer,XOR_PUT);
  delay(20);
 }
}
struct addr
{
 char area[30];
 char city[30];
 char state[30];
 long pin;
 long doorno;
};
struct userdetails
{
 char name[30];
 char sex[30];
 char contact[11];
 addr address;
}usd;

struct clothing
{
 char category[30];
 char brand[30];
 int size,price;
}cloth;

struct bks
{
 char Genre[30];
 char Name[30];
 char Author[30];
 int Price;
}books;

struct accessories
{
 char category[30];
 char company[30];
 char name[30];
 int price;
}access;

struct at_mob
{
 float price;
 char colour[20];
 char name[20];
 char company[20];
}car;
//---------------------MAIN.
void main()
{
 switch_case();
}
//---------------------MAIN.
void switch_case()
{
  int g=DETECT,d;
  initgraph(&g,&d,"c:\\tc\\bgi");
  setbkcolor(WHITE);
  int ch_bauto,bauto,bbike,ch_sell,ch,ch_buy;
  int acc,sh_cart,mob,book,cgad,mp3;
  int bot,bot_s,sty_app;
  int cloth,top,top_s;
  char sh;
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
  INTRO:
  clrscr();
  cleardevice();
  setcolor(4);
  outtextxy(240,5,"WELCOME");
  cout<<"\n\n\n\nWhat would you like to do?";
  cout<<"\n1)BUY";
  cout<<"\n2)SELL";
  cout<<"\n3)EXIT";
  AG:
  cout<<"\n\nEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1: load();
	   BUY:
	   clrscr();
	   cleardevice();
	   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	   outtextxy(100,5,"CATEGORIES AVAILABLE");
	   cout<<"\n\n\n\n\n\n1)AUTOMOBILES";
	   cout<<"\n2)ACCESSORIES+GADGETS";
	   cout<<"\n3)BOOKS";
	   cout<<"\n4)CLOTHING";
	   cout<<"\n5)RETURN";
	   cout<<"\n6)EXIT";
	   BUY_CAT:
	   cout<<"\nEnter your choice: ";
	   cin>>ch_buy;
	   switch(ch_buy)
	   {
	       case 1: clrscr();
		       cleardevice();
		       outtextxy(240,5,"AUTOMOBILE");
		       cout<<"\n\n\n\nChoose the type of vehicle:";
		       cout<<"\n1)CARS";
		       cout<<"\n2)BIKES";
		       cout<<"\n3)RETURN";
		       BUY_CH:
		       cout<<"\nEnter your choice: ";
		       cin>>ch_bauto;
		       switch(ch_bauto)
		       {
			case 1: clrscr();
				cleardevice();
				outtextxy(240,5,"CARS AVAILABLE");
				cout<<"\n\n\n\n1) Honda City";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nRed color";
				cout<<"\nPrice: Rs.7,99,999";
				cout<<"\nUsed for 12,000KM";
				cout<<"\n9 Months Warranty";

				cout<<"\n\n2)Suzuki Swift";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nWhite color";
				cout<<"\nPrice: Rs.5,99,999";
				cout<<"\nUsed for 10,000KM";
				cout<<"\n9 Months warranty";

				cout<<"\n\n3)Tata Manza";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nBlack color";
				cout<<"\nPrice: Rs.8,99,999";
				cout<<"\nUsed for 14,000KM";
				cout<<"\n9 Months Warranty";
				AGAIN:
				cout<<"\n\nEnter serial no. of needed item(press 4 to return to BUY window): ";
				cin>>bauto;
				if(bauto==4)
				 goto BUY;
				else if(bauto==1||bauto==2||bauto==3)
				{
				 cout<<"\nPlease Wait...";
				 delay(1900);
				 cout<<"\nCongratulations on your purchase";
				 SH8:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH8;
				}
				else
				 cout<<"\nNOT AVAILABLE!";
				goto AGAIN;

			case 2: clrscr();
				cleardevice();
				outtextxy(200,5,"BIKES AVAILABLE");
				cout<<"\n\n\n\n\n1)Bajaj Pulsar 220cc";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nBlue color";
				cout<<"\nPrice: Rs.60,000";
				cout<<"\nUsed for 2,000KM";
				cout<<"\n9 Months Warranty";

				cout<<"\n\n2)Yamaha R15";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nLimited Edition";
				cout<<"\nPrice: Rs.1,19,999";
				cout<<"\nUsed for 3000KM";
				cout<<"\n9 Months warranty";

				cout<<"\n\n3)KTM Duke";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nColor: Orange";
				cout<<"\nPrice: Rs.90,000";
				cout<<"\nUsed for 500KM";
				cout<<"\n9 Months warranty";
				AGAIN1:
				cout<<"\n\nEnter the serial no. of needed item(Press 4 to return to BUY window): ";
				cin>>bbike;
				if(bbike==4)
				 goto BUY;
				else if(bbike==1||bbike==2||bbike==3)
				{
				 cout<<"Please Wait...";
				 delay(1900);
				 cout<<"\nCongratulations on your purchase";
				 SH7:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH7;
				}
				else
				 cout<<"\nNOT AVAILABLE!";
				goto AGAIN1;

			case 3: goto BUY;

			default: cout<<"\nWrong choice!";
				 goto BUY_CH;
		       }

	       case 2: clrscr();
		       cleardevice();
		       outtextxy(100,5,"ACCESSORIES+GADGETS");
		       cout<<"\n\n\n\n1)Mobiles";
		       cout<<"\n2)MP3 Players";
		       cout<<"\n3)Computer Gadgets";
		       ACC:
		       cout<<"\nEnter your choice: ";
		       cin>>acc;
		       switch(acc)
		       {
			case 1: clrscr();
				cleardevice();
				outtextxy(2110,5,"MOBILES");
				cout<<"\n\n\n\n1)Nokia Lumia 1020";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nColor: Yellow";
				cout<<"\nPrice: Rs.39,999";
				cout<<"\nWarranty:1 Year";

				cout<<"\n\n2)Samsung Galaxy S3";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nColor: White";
				cout<<"\nPrice: Rs.29,999";
				cout<<"\nWarranty:1 Year";

				cout<<"\n\n3)Sony Xperia C";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nColor: Black";
				cout<<"\nPrice: Rs.19,999";
				cout<<"\nWarranty:1 Year";
				AGAIN2:
				cout<<"\nEnter Serial No. of needed item(Press 4 to return to BUY window): ";
				cin>>mob;
				if(mob==4)
				 goto BUY;
				else if(mob==1||mob==2||mob==3)
				{
				 cout<<"\nPlease wait...";
				 delay(1900);
				 cout<<"\nCongratulations on your purchase";
				 SH6:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH6;
				}
				else
				 cout<<"\nWrong choice";
				goto AGAIN2;

			case 2: clrscr();
				cleardevice();
				outtextxy(240,5,"MP3 PLAYERS");
				cout<<"\n\n\n\n1)iPOD CLASSIC";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPrice:Rs.6,999";
				cout<<"\nColor:Black";
				cout<<"\nWarranty:1 Year";

				cout<<"\n\n2)Walkman";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPrice:Rs.5,999";
				cout<<"\nColor:White";
				cout<<"\nWarranty:1 Year";

				cout<<"\n\n3)Kensi MP3 Player";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPrice: Rs.2,999";
				cout<<"\nColor: Grey";
				cout<<"\nWarranty:6 Months";
				AGAIN3:
				cout<<"\nEnter serial no if needed item(Press 4 to return to BUY window): ";
				cin>>mp3;
				if(mp3==4)
				 goto BUY;
				else if(mp3==1||mp3==2||mp3==3)
				{
				 cout<<"\nPlease Wait...";
				 delay(1900);
				 cout<<"\nCongratulations on your purchase1";
				 SH5:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH5;
				}
				else
				 cout<<"\nWrong choice!";
				goto AGAIN3;


			case 3: clrscr();
				cleardevice();
				outtextxy(200,5,"COMPUTER GADGETS");
				cout<<"\n\n\n\n1)RAM";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPRICE: Rs.12,999";
				cout<<"\nSPECS: Crucial DDR2 1GB(x2)";
				cout<<"\nWARRANTY: N/A";

				cout<<"\n\n2)PROCESSOR";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPRICE: 31,999";
				cout<<"\nSPECS: Intel CORE i5 2.3GHZ L2 Cache 2MB";
				cout<<"\nWARRANTY: N/A";

				cout<<"\n\n3)GRAPHIC CARD";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPRICE: 29,999";
				cout<<"\nSPECS: AMD RADEON GDDR3 3.5GB";
				cout<<"\nWARRANTY: N/A";
				AGAIN4:
				cout<<"\n\nEnter serial no of needed item(Press 4 to return to BUY window): ";
				cin>>cgad;
				if(cgad==4)
				 goto BUY;
				else if(cgad==1||cgad==2||cgad==3)
				{
				 cout<<"\nPlease wait...";
				 delay(1900);
				 cout<<"\nCongratulations on your purchase";
				 SH4:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH4;
				}
				else
				 cout<<"\nWrong choice!";
				goto AGAIN4;
		       }
		       break;
	       case 3: clrscr();
		       cleardevice();
		       outtextxy(240,5,"BOOKS");
		       cout<<"\n\n\n\n1)Famous Five";
		       cout<<"\n--------------------";
		       cout<<"\nIMAGE UNAVAILABLE!";
		       cout<<"\n--------------------";
		       cout<<"\nPrice: Rs.399";
		       cout<<"\nAuthor: Enid Blyton";

		       cout<<"\n\n2)Shiva Triology";
		       cout<<"\n--------------------";
		       cout<<"\nIMAGE UNAVAILABLE!";
		       cout<<"\n--------------------";
		       cout<<"\nPrice: Rs.1,099";
		       cout<<"\nAuthor: Amish Thripathi";

		       cout<<"\n\n3)Best Of Dan Brown";
		       cout<<"\n--------------------";
		       cout<<"\nIMAGE UNAVAILABLE!";
		       cout<<"\n--------------------";
		       cout<<"\nBundle of Three: Digital Fortress, Da Vinci Code, Angels & Deamons";
		       cout<<"\nPrice: Rs.1,499";
		       AGAIN5:
		       cout<<"\n\nEnter serial no of needed item(Press 4 to return to BUY window): ";
		       cin>>book;
		       if(book==4)
			goto BUY;
		       else if(book==1||book==2||book==3)
		       {
			cout<<"\nPlease Wait...";
			delay(1900);
			cout<<"\nCongratulations on your purchase";
			SH3:
			cout<<"\nContinue Shopping(y/n): ";
			cin>>sh;
			if(sh=='y'||sh=='Y')
			{
			 goto INTRO;
			}
			else if(sh=='n'||sh=='N')
			 details();
			else
			 cout<<"\nPress (y/n):";
			goto SH3;
		       }
		       else
			cout<<"\nWrong choice";
		       goto AGAIN5;



	       case 4: clrscr();
		       cleardevice();
		       outtextxy(240,5,"CLOTHING");
		       cout<<"\n\n\n\n1)TOPS";
		       cout<<"\n2)BOTTOMS";
		       cout<<"\n3)STYLISH APPARELS";
		       cout<<"\n4)RETURN TO PREVIOUS SCREEN";
		       CLOTH:
		       cout<<"\nEnter your choice: ";
		       cin>>cloth;
		       switch(cloth)
		       {
			case 1: clrscr();
				cleardevice();
				outtextxy(290,5,"TOPS");
				cout<<"\n\n\n\n1)Fancy Tees";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\n\Unisex";
				cout<<"\nSIZES AVAILABLE: 1)32  2)38  3)40";
				cout<<"\nPRICE: Rs.499 per piece";


				cout<<"\n\n2)Silk Saree";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\n\FEMALE";
				cout<<"\nPRICE: Rs.3,999";

				cout<<"\n\n3)Formal Shirt";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE";
				cout<<"\n--------------------";
				cout<<"\nMALE";
				cout<<"\nSIZES AVAIL. 1)38  2)42  3)44";
				cout<<"\nPRICE: Rs.899";
				AGAIN6:
				cout<<"\n\nEnter serial no of needed item(press 4 to return to BUY windows): ";
				cin>>top;
				if(top==4)
				 goto BUY;
				else if(top==1||top==2||top==3)
				{
				 TOP_S:
				 cout<<"\nPlease enter size: ";
				 cin>>top_s;
				 if(top_s==1||top_s==2||top_s==3)
				 {
				  cout<<"\nPlease wait...";
				  delay(1900);
				  cout<<"\nCongratulations on your purchase";
				  SH2:
				  cout<<"\nContinue Shopping(y/n): ";
				  cin>>sh;
				  if(sh=='y'||sh=='Y')
				  {
				   goto INTRO;
				  }
				  else if(sh=='n'||sh=='N')
				   details();
				  else
				   cout<<"\nPress (y/n):";
				  goto SH2;
				 }
				 else
				  cout<<"\nPlease enter corrext serial no of the requited size: ";
				  goto TOP_S;
				}
				else
				 cout<<"\nWrong choice";
				goto AGAIN6;


			case 2: clrscr();
				cleardevice();
				outtextxy(280,5,"BOTTOMS");
				cout<<"\n\n\n\n1)Levi Jeans(Regular Fit)-BLUE";
				cout<<"\n---------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n---------------------";
				cout<<"\nUnisex";
				cout<<"\nSIZES AVAIL. 1)32/40  2)38/40  3)30/42";
				cout<<"\nPRICE: Rs.999";

				cout<<"\n\n2)Levi Jeans(Slim Fit)-BLACK";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nUnisex";
				cout<<"\nSIZES AVAIL. 1)30/38  2)30/40  3)36/44";
				cout<<"\nPRICE: Rs.1,999";

				cout<<"\n\n3)American Eagle(Regular Fit)-NAVY BLUE";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nUnisex";
				cout<<"\nSIZES AVAIL. 1)30/40  2)32/42  3)34/44";
				cout<<"\nPRICE: Rs.2,999";
				AGAIN7:
				cout<<"\n\nEnter serial no of needed item(press 4 to return to BUY window): ";
				cin>>bot;
				if(bot==4)
				 goto BUY;
				else if(bot==1||bot==2||bot==3)
				{
				 BOT_S:
				 cout<<"\nPlease enter size: ";
				 cin>>bot_s;
				 if(bot_s==1||bot_s==2||bot_s==3)
				 {
				  cout<<"\nPlease wait...";
				  delay(1900);
				  cout<<"\nCongratulations on your purchase";
				  SH:
				  cout<<"\nContinue Shopping(y/n): ";
				  cin>>sh;
				  if(sh=='y'||sh=='Y')
				  {
				   goto INTRO;
				  }
				  else if(sh=='n'||sh=='N')
				   details();
				  else
				   cout<<"\nPress (y/n):";
				  goto SH;
				 }
				 else
				  cout<<"\nPlease enter correct size: ";
				 goto BOT_S;
				}
				else
				 cout<<"\nWrong choice";
				goto AGAIN7;

			case 3: clrscr();
				cleardevice();
				outtextxy(200,5,"STYLISH APPARELS");
				cout<<"\n\n\n\n1)RayBan Sunglass";
				cout<<"\n-------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n-------------------";
				cout<<"\nPrice: Rs.299";

				cout<<"\n\n2)Nike Head Band-WHITE";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPrice: Rs.499";

				cout<<"\n\n3)Fastrack Watch(Deamon 365)-GREEN";
				cout<<"\n--------------------";
				cout<<"\nIMAGE UNAVAILABLE!";
				cout<<"\n--------------------";
				cout<<"\nPRICE: Rs.2,699";
				AGAIN8:
				cout<<"\n\nEnter serial no of needed item(press 4 to return to BUY window): ";
				cin>>sty_app;
				if(sty_app==4)
				 goto BUY;
				else if(sty_app==1||sty_app==2||sty_app==3)
				{
				 cout<<"\nPlease wait...";
				 delay(1900);
				 cout<<"\nCongratulation on your purchase";
				 SH1:
				 cout<<"\nContinue Shopping(y/n): ";
				 cin>>sh;
				 if(sh=='y'||sh=='Y')
				 {
				  goto INTRO;
				 }
				 else if(sh=='n'||sh=='N')
				  details();
				else
				 cout<<"\nPress (y/n):";
				 goto SH1;
				}
				else
				 cout<<"\nWrong choice";
				goto AGAIN8;

			case 4: goto BUY;

			default: cout<<"\nWrong choice!";
				 goto CLOTH;
		       }



	       case 5: goto INTRO;

	       case 6: exit(0);

	       default: cout<<"\nWrong Choice";
			goto BUY_CAT;
	      }
	      break;

      case 2: load();
	      clrscr();
	      cleardevice();
	      settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	      outtextxy(240,5,"SELL");
	      cout<<"\n\n\n\nCATEGORIES AVAILABLE";
	      cout<<"\n1)AUTOMOBILES";
	      cout<<"\n2)ACCESSORIES+GADGETS";
	      cout<<"\n3)BOOKS";
	      cout<<"\n4)RETURN";
	      cout<<"\n5)EXIT";
	      SELL:
	      cout<<"\nEnter your choice: ";
	      cin>>ch_sell;
	      switch(ch_sell)
	      {
	       case 1: clrscr();
		       cleardevice();
		       outtextxy(240,5,"AUTOMOBILE");
		       cout<<"\n\n\n\nUpload your car";
		       cout<<"\nEnter price: ";
		       cin>>car.price;
		       cout<<"\nColour: ";
		       gets(car.colour);
		       cout<<"\nName: ";
		       gets(car.name);
		       cout<<"\nCompany: ";
		       gets(car.company);
		       cout<<"\nPlease wait uploading...";
		       delay(1900);
		       cout<<"\nUPLOADED!";
		       details();
		       break;

	       case 2: clrscr();
		       cleardevice();
		       outtextxy(240,5,"ACCESSORIES");
		       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"Enter the category:";
		       gets(access.category);
		       cout<<"\n"<<"Enter company:";
		       gets(access.company);
		       cout<<"\n"<<"Enter name:";
		       gets(access.name);
		       cout<<"\n"<<"Enter price:";
		       cin>>access.price;
		       cout<<"\nPlease wait uploading...";
		       delay(1900);
		       cout<<"\nUPLOADED!";
		       delay(1000);
		       details();
		       break;

	       case 3: clrscr();
		       cleardevice();
		       outtextxy(240,5,"BOOKS");
		       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"Enter the genre:";
		       gets(books.Genre);
		       cout<<"\n"<<"Enter the name:";
		       gets(books.Name);
		       cout<<"\n"<<"Enter The author:";
		       gets(books.Author);
		       cout<<"\n"<<"Enter price:";
		       cin>>books.Price;
		       cout<<"\nPlease wait uploading...";
		       delay(1900);
		       cout<<"\nUPLOADED!";
		       details();
		       break;

		       case 4: goto INTRO;

		       case 5: exit(0);

		       default: cout<<"\nWrong choice!";
				goto SELL;
  }
  case 3: exit(0);

  default: cout<<"\n\nWrong choice!";
	   goto AG;
 }
}

void details()
{
 clrscr();
 cleardevice();
 int h=0;
 outtextxy(240,5,"USER DETAILS");
 cout<<"\n\n\n\nEnter name:";
 gets(usd.name);
 cout<<"\n"<<"Enter sex:";
 gets(usd.sex);
 CONT:
 cout<<"\nEnter contact number:";
 gets(usd.contact);
 if(strlen(usd.contact)==8||strlen(usd.contact)==10)
 {
  for(int i=0;i<11;i++)
  {
   if(isdigit(i))
    h++;
  }
 }
  else if(h<8)
  {
   cout<<"\nIncorrect Contact Numner";
   goto CONT;
  }
  else
  {
   cout<<"\nWrong Contact Number";
   goto CONT;
  }
 PIN:
 cout<<"\nEnter PIN: ";
 cin>>usd.address.pin;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  cout<<"\nEnter only digits!";
  goto PIN;
 }
 else if(usd.address.pin<559999||usd.address.pin>570000)
 {
  cout<<"\nONLY IN BANGALORE!";
  goto PIN;
 }
 cout<<"\n\n\nThank you for the details!";
 cout<<"\nPAYMENT: ON DELIVERY";
 cout<<"\nESTIMATED TIME OF ARRIVAL: 3 DAYS";
 cout<<"\n\nRedirecting PLEASE WAIT...";
 delay(2000);
 switch_case();
 getch();
}