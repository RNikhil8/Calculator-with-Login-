#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
void main()
{
 clrscr();
 long int x,y,opt,sum,sub,mult,a,b,d;
 float div;
 cout<<"\t\t   WELCOME TO THE MATHEMATICAL SIMULATOR"<<endl;
 cout<<"\t\tPlease enter the credentails to gain acess"<<endl;
 cout<<"ENTER THE ID NO. ::\n";
 cin>>b;
 cout<<"ENTER THE PASSWORD ::\n";
 cin>>y;
 if ((b==12345)&&(y==12345))
    { clrscr();
      cout<<"\t\t\t    ACCESS GRANTED"<<endl;
      {delay(500);
      for(x=0;x<101;x++)
      {delay(38);
      {clrscr();
      cout<<"\t\t\tInitialzing simulator ";
      cout<<x<<"%"; }  }             }
      cout<<"\n\t\t\tPlease wait"<<endl;
      cout<<"\t\t\tLoding Files  ";
      for (a=1;a<20;a++)
      {delay(50);
      { cout<<"."; } }
      do{
      clrscr();
      cout<<"\t\t\t THE MATHEMATICS SIMULATOR"<<endl;
      cout<<"\n\t\t\tWelcome USER-"<<b<<endl;
      cout<<"\nPlease choose the following"<<endl;
      cout<<"1. Sum Operation"<<endl;
      cout<<"2. Subtraction operation"<<endl;
      cout<<"3. Multiplication operation"<<endl;
      cout<<"4. Division operation"<<endl;
      cout<<"5. Exit ==> ";
      cin>>opt;
      switch(opt){
      case 1: clrscr();
	      cout<<"\t\t\tYOU HAVE CHOSE TO SUM"<<endl;
	      cout<<"Enter the first number"<<endl;
	      cin>>x;
	      cout<<"Enter the second number"<<endl;
	      cin>>y;
	      cout<<"There sum is "<<endl;
	      sum=x+y;
	      cout<<sum;
	      break;
      case 2: clrscr();
	      cout<<"\t\t\tYOU HAVE CHOSE TO SUBTRACT"<<endl;
	      cout<<"Enter the first number"<<endl;
	      cin>>x;
	      cout<<"Enter the second number"<<endl;
	      cin>>y;
	      cout<<"There difference is"<<endl;
	      sub=x-y;
	      cout<<sub;
	      break;
      case 3: clrscr();
	      cout<<"\t\t\tYOU HAVE CHOSE TO MULTIPLICATION"<<endl;
	      cout<<"Enter the first number"<<endl;
	      cin>>x;
	      cout<<"Enter the second number"<<endl;
	      cin>>y;
	      cout<<"There product is"<<endl;
	      mult=x*y;
	      cout<<mult;
	      break;
      case 4: clrscr();
	      cout<<"\t\t\tYOU HAVE CHOSE TO DIVIDE"<<endl;
	      cout<<"Enter the first number"<<endl;
	      cin>>x;
	      cout<<"Enter the second number"<<endl;
	      cin>>y;
	      cout<<"There qoutient is"<<endl;
	      div=x/y;
	      cout<<div;
	      break;
      case 5 :clrscr();
	      cout<<"\t\t\tYOU HAVE CHOSE TO EXIT"<<endl;
	      cout<<"Thanking you for running the program"<<endl;
	      cout<<"Developed by NIKHIL ROHAL\n"<<"CLASS = XI A"<<endl;
	      cout<<"\t\tShutting down the simulator";
	      for (a=1;a<15;a++)
	      {delay(120);
	      { cout<<"."; } }
	      delay(500);
	      exit(0);
	      break;
     default : cout<<"INVALID NUMBER ENTERED"<<endl;
	       break; }
	       cout<<"\n\nWould you like to do again ( 1 for Retry 2 for Exit) = ";
	       cin>>d;      }
	       while(d==1);
	       clrscr();
	       cout<<"\t\t\tYOU HAVE CHOSE TO EXIT"<<endl;
	       cout<<"Thanking you for running the program"<<endl;
	       cout<<"Developed by NIKHIL ROHAL\n"<<"CLASS = XI A"<<endl;
	       cout<<"\t\tShutting down the simulator";
	       for (a=1;a<15;a++)
	       {delay(120);
	       { cout<<"."; } }
	       delay(500);
	       exit(0);
		     }

 else
 { clrscr();
 cout<<"\t\t\t\tACCESS DENIED"<<endl;
 cout<<"\t\tShutting down the simulator ";
 for (a=1;a<20;a++)
 {delay(150);
 { cout<<"."; } }
 delay(200);
 exit(0); }
 getch();
}
