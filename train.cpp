#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>

int login();
void registeration();
void reciept();
void booking();
int catering();
void trainn();
char name[100],age[100];
int n,nhalf,b,distance,type;
char date[100],s[100],train[1000]="";int price;char a;

int catering()
{ char n,f[100];
int cost;
  cout<<"Press 1.Non_Veg 2.Veg \n";
  cin>>n;
  if(n=='1')
  {
  strcpy(f,"Non_Veg");
  cout<<"Enter 1 for full plate Rs 500 or 2 for half plate Rs 300\n";
  cout<<"Full plate consist of Full plate chicken,10 Chapatis,Full plate salad and a 2L Coca Cola";
  cout<<"Half plate consist of Half plate chicken,5 Chapatis,Full plate salad and a 1L Coca Cola";
  cin>>n;
  if(n=='1')
  cost=500;
  else
  cost=300;
  }
  else if(n=='2')
  {
  strcpy(f,"Veg");
  cout<<"Enter 1 for full plate for Rs 400 or 2 for half plate for 250 \n";
  cout<<"Full plate consist of Full Curry,full Daal ,10 Chapatis,Full salad and a 2L Coca Cola";
  cout<<"Half plate consist of Half Curry ,Half Daal,5 Chapatis,Full salad and a 1L Coca Cola";
  cin>>n;
  if(n=='1')
  cost=400;
  else
  cost=250;
  }
  return 1;
  }

void trainn()
{
for(int y=1;y<=3;y++)
{
clrscr();
cout<<"   _____                 . . . . . . . . . o\n";
cout<<"  __|[_]|__ ___________ _______    ____      o\n";
cout<<" |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.\n";
cout<<"_|________|_[_________]_[________]_|__|________)<\n";
cout<<"  oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_\n";
cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

for(long int j=1;j<=10000000;j++)
    {}

    clrscr();
cout<<"     _____                 . . . . . . . . o o\n";
cout<<"    __|[_]|__ ___________ _______    ____      o\n";
cout<<"   |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.\n";
cout<<"  _|________|_[_________]_[________]_|__|________)<\n";
cout<<"    oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_\n";
cout<<"  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

for(j=1;j<=10000000;j++)
    {}

    clrscr();
cout<<"       _____                 . . . . . . . o o o\n";
cout<<"      __|[_]|__ ___________ _______    ____      o\n";
cout<<"     |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.\n";
cout<<"    _|________|_[_________]_[________]_|__|________)<\n";
cout<<"      oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_\n";
cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

for(j=1;j<=10000000;j++)
    {}

    clrscr();
cout<<"         _____                 . . . . . . o o o o\n";
cout<<"        __|[_]|__ ___________ _______    ____      o\n";
cout<<"       |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.\n";
cout<<"      _|________|_[_________]_[________]_|__|________)<\n";
cout<<"        oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

for(j=1;j<=10000000;j++)
    {}
}
}
void booking()
{
int d,e;
clrscr();
cout<<"--WELCOME to BOOKING section "<<name<<"--\n";
cout<<"Enter your full name\n";
gets(name);
cout<<"Enter your age\n";
cin>>age;
cout<<"Enter no. of tickets you want to book\n";
cin>>n;
e:cout<<"Total no. of people below 6 or above 60 ?\n";
cin>>nhalf;
if(nhalf>n)
{cout<<"Wrong input/n";
goto e;}
cout<<"Any seat preference?\n 1.UpperBerth\n 2.MiddleBerth\n 3.LowerBerth\n";
cin>>b;
cout<<"Enter date of Journey in ddmmyyyy format\n";
cin>>date;
clrscr();
d:cout<<"Departure Station is Amritsar \nEnter Station of Arrival\n";
cout<<"1.Ludhiana \n2.Delhi\n3.Kota\n4.Mumbai\n5.Kanyakumari\n";
cin>>a;
if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
{
 if(a=='1')
 {price=250;strcpy(s,"Ludhiana");distance=300;
 cout<<"\npress 1.H Nizamuddin\n      2.Asr. Shatabdi\n";
 cin>>type;
 if(type==1)
 strcpy(train,"H Nizamuddin");
 else if(type==2)
 strcpy(train,"Asr. Shatabdi");
}
 else if(a=='2')
 {price=500;strcpy(s,"Delhi");distance=560;
 cout<<"\npress 1.Superfast Train\n      2.Passenger\n";
 cin>>type;
 if(type==1)
 strcpy(train,"H Nizamuddin");
 else if(type==2)
 strcpy(train,"Asr. Shatabdi");
}
 else if(a=='3')
 {price=800;strcpy(s,"Kota");distance=1050;
 cout<<"\npress 1.Goldn Temple\n      2.Paschim Express\n";
 cin>>type;
 if(type==1)
 strcpy(train,"Goldn Temple");
 else if(type==2)
 strcpy(train,"Paschim Express");
}
 else if(a=='4')
 {price=1400;strcpy(s,"Mumbai");distance=2357;
 cout<<"\npress 1.Goldn Temple\n      2.ASR CSTM EXP.\n";
 cin>>type;
 if(type==1)
 strcpy(train,"Goldn Temple");
 else if(type==2)
 strcpy(train,"ASR CSTM EXP.");
}
 else if(a=='5')
 {price=2000;strcpy(s,"Kanyakumari");distance=3000;
 cout<<"\npress 1.Kanyakumari EXP.\n      2.TamilNadu EXP.\n";
 cin>>type;
 if(type==1)
 strcpy(train,"Kanyakumari EXP.");
 else if(type==2)
 strcpy(train,"TamilNadu EXP.");
}
}
else
{cout<<"WRONG INPUT\n";
goto d;
}
}

void reciept()
{
clrscr();
cout<<"Making your reciept\n";
clrscr();
ofstream o("Reciept.txt",ios::app);
cout<<"**Thanx for Booking ticket with IRCTC**\n";
o<<"**Thanx for Booking ticket with us**\n";
cout<<"Name - "<<name<<"\n";
o<<"\nName - "<<name<<"\n";
cout<<"Age - "<<age<<"\n";
o<<"Age - "<<age<<"\n";
cout<<"Total no. of tickets - "<<n<<"\n";
o<<"Total no of tickets - "<<n<<"\n";
cout<<"You are travelling by - "<<type<<"\n";
o<<"You are travelling by - "<<type<<"\n";
cout<<"Booking on "<<date<<" from Amritsar Jn. to "<<s<<" Jn.\n";
o<<"Booking on date "<<date<<" from Amritsar to "<<s<<" Jn.\n";
cout<<"Distance travelling is "<<distance<<" kms\n";
o<<"Distance travelling is "<<distance<<" kms\n";
cout<<"Half ticket applicable for - "<<nhalf<<" passengers\n";
o<<"Half ticket applicable for - "<<nhalf<<" passengers\n";
cout<<"Sorry your preferance for berths is not available\n";
o<<"Sorry your preferance for berths is not available\n";
cout<<"Price per ticket = "<<price<<" Rs\n";
o<<"Price per ticket = "<<price<<" Rs\n";
cout<<"Total price = "<<(n*price)<<"\n";
o<<"Total price = "<<(n*price)<<"\n";
int discount = (nhalf*price)/2;
cout<<"Price discouted due to children and old = "<<discount<<"\n";
o<<"Price discouted due to children and old = "<<discount<<"\n";
float net=(n*price)-discount;
cout<<"Price after discount = "<<net<<"\n";
o<<"Price after discount = "<<net<<"\n";
cout<<"Net Price(including 5% gst) "<<net*1.05<<"\n";
o<<"Net Price(including 5% gst) "<<net*1.05<<"\n";
cout<<"\n****HAVE A SAFE JOURNEY****\n";
o<<"\n****HAVE A SAFE JOURNEY****\n";
getch();
}

void registeration()
{
clrscr();
ofstream ou("dhruvu.txt",ios::app);
ofstream op("dhruvp.txt",ios::app);
char un[100];char pw[100];
char us[100];char pn[100];
int z;
cout<<"<<<WELCOME to Registeration Section>>>\n\n";
cout<<"Enter your full name\n";
gets(name);
cout<<"Enter your age\n";
cin>>age;
z:cout<<"Type your username\n";
cin>>un;
ifstream iu("dhruvu.txt",ios::app);
 for(int i=1;i<=50;i++)
 {
  iu>>us;
  if(strcmp(us,un)==0)
  {
  cout<<"username already exist\n";
  goto z;
  }
 }
cout<<"Now Enter your password \n";
cin>>pn;
ou<<"\n"<<un;
op<<"\n"<<pn;
cout<<"Registeration Successful\n";
}

int login()
{

 clrscr();
 int ret=0;
 ifstream obj("dhruvu.txt");
 ifstream obj2("dhruvp.txt");
 cout<<" -WELCOME- to LOGIN section \n";
 cout<<"enter your username\n";
 char us[100];
 cin>>us;
 cout<<"enter your password\n";
 char ps[100];
 cin>>ps;

 char un[100];
 char pw[100];

 for(int i=1;i<=50;i++)
  {
  obj>>un;
  obj2>>pw;
  if(strcmp(us,un)==0)
  {
   if(strcmp(pw,ps)==0)
   {
    cout<<"Please wait...";
    for(long int j=1;j<=30000000;j++)
    {}
    cout<<"login successful";
    ret=1;
    break;
   }
   else
   cout<<"invalid username/password";
  }
}
  return ret;

}

void main()
{
clrscr();
int d;
cout<<"   _____                 . . . . . o o o o o\n";
cout<<"  __|[_]|__ ___________ _______    ____      o\n";
cout<<" |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.\n";
cout<<"_|________|_[_________]_[________]_|__|________)<\n";
cout<<"  oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_\n";
cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";

d:cout<<"WELCOME TO IRCTC\n";
cout<<"Press 1 to Login\n";
cout<<"Press 2 for Registeration \n";
cout<<"Press any other key to Exit \n";
int c;
cin>>c;
switch (c)
{
 case 1:
 trainn();
 int g=login();
 if(g==1)
 {
 char m;
 cout<<"\nPress 1 to go to Booking section or any other key to exit\n";
 cin>>m;
 if(m=='1')
 {
  trainn();
  booking();
  trainn();
  reciept();
  break;
 }
 else
 break;
 }
 else
 {cout<<"Wrong username/password";
 getch();
 break;
 }

 case 2:
 trainn();
 registeration();
 cout<<"\nPress 1 to go to login screen or any other key to exit \n";
 char l,z;
 cin>>l;
 if(l=='1')
 {
 trainn();
 int n=login();
 if(n==1)
  {
  cout<<"\nPress 1 to go to Booking section or any other key to exit\n";
  cin>>z;
  if(z=='1')
   {
   trainn();
   booking();
   trainn();
   reciept();
   }
  else
  break;
  }
 else if(n==0)
 {cout<<"Wrong username/password";
 getch();
 break;}
 }
 else
 break;
 }

}