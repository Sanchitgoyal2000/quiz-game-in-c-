using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include<algorithm>
#include<vector>
#include<iomanip>
class Mainmenu
{
public:
 void funMain()
 {
  	cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tGAME QUIZ\t\t\t\t\t\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t WELCOME\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   TO\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t OUR GAME\n";
			cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
				cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
				cout<<"\t\t\t\t\t\t\t\t\t\t\t****BE A BILLIONAIRE****\n";
							cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
				cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
						cout<<"\t\t\t\t\t\t\t\t\t\t\t> Press S to start the game\n";
						cout<<"\t\t\t\t\t\t\t\t\t\t\t> Press U to view the highest score\n";
						cout<<"\t\t\t\t\t\t\t\t\t\t\t> Press R to reset score\n";// through file handling
						cout<<"\t\t\t\t\t\t\t\t\t\t\t> Press H for help\n";
						cout<<"\t\t\t\t\t\t\t\t\t\t\t> Press Q to quit\n";
							cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
							cout<<"\t\t\t\t\t\t\t\t\t\t\t        Enjoy\n";
 }
};
class Quiz
{
public:
  string s;
  void score()
  {
   ifstream ifile;
   ifile.open("score.txt");
   vector<int>v;
   int num;
   char ch;
   ifile>>num;
   while(ch=ifile.get()!=EOF)
   {
    v.push_back(num);
    ifile>>num;
   }
   ifile.close();
   int p=0;
   for(int i=0;i<v.size();i++)
   {
    if(v[i]>p)
     p=v[i];
   }
    cout<<setw(90)<<p;
  }
 void funQuiz()
 {
  cout<<"\n\n\n\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t_________________________________________________________\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t Dude Enter Your Name\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t     ";
  cin>>s;
  cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  LOADING.........\n";
  system("cls");
  	cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n";
  cout<<"\t\t\t\t\t\t\t\t\t            WELCOME "<<s<<" To Our Quiz Game \n\n";
  cout<<"\t\t\t\t\t\t\t\t\tHere are some tips for you before playing:\n";
  cout<<"\t\t\t\t\t\t\t\t\t*There are two rounds in the Quiz Game:\n";
  cout<<"\t\t\t\t\t\t\t\t\t   ~WARMUP ROUND \n";
  cout<<"\t\t\t\t\t\t\t\t\t   ~CHALLENGE ROUND \n\n";
  cout<<"\t\t\t\t\t\t\t\t\t*In WarmUp round you will be asked a total of 5 questions \n";
  cout<<"\t\t\t\t\t\t\t\t\t to test your computer skills.You can eligible for next round\n";
  cout<<"\t\t\t\t\t\t\t\t\t if you give atleast 3 right answers , otherwise you can't \n";
  cout<<"\t\t\t\t\t\t\t\t\t proceed further to Challenge Round!!\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t*In Challenge Round , you will be asked a total of 10 questions.\n";
  cout<<"\t\t\t\t\t\t\t\t\t Each right answer will be awarded $1000.00!!\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t*You will be given 4 options and you have to press A,B,C,D for \n";
  cout<<"\t\t\t\t\t\t\t\t\t the corrext answer.\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t*You will be asked question continuously, till right answer is given.\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t*No negative marking for wrong answer.\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t              !!!!!All The Best!!!!!\n";
  cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n";
  cout<<"\t\t\t\t\t\t\t\t\tPress S to start the game!!\n\n";
  cout<<"\t\t\t\t\t\t\t\t\tPress M to return to the main menu!!\n\n";
 }
 int funQuiz1()
 {
  system("cls");
  int t=0;
  char ch2;
  cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t              !!WELCOME TO WARMUP ROUND!!\n";
  cout<<"\t\t\t\t\t\t\t\t\tQuestion 1. Shortcut for creating new folder is:\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) Alt + Shift + N\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) Ctrl + N\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) Alt + Alt + N\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) Ctrl + Shift + N\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='D')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
      cout<<"\t\t\t\t\t\t\t\t\tQuestion 2. Which is a programming language among?:\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) HTML\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) FTP\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) SMTP\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) SmNP\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 3. .gif is extension for?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) Images\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) Audio\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) Word\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) Video\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 4. 1Byte consist of?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 2  Bits\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 8  Bits\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 16 Bits\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 32 Bits\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='B')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
    cout<<"\t\t\t\t\t\t\t\t\tQuestion 5. Facebook was launched in?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 2009\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 2008\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 2007\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 2004\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='D')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
    return t;
 }
 int funQuiz2()  //for challenge round;
 {
  system("cls");
  int t=0;
  char ch2;
    cout<<"\t\t\t\t\t\t\t\t\t                   !!WELCOME TO CHALLENGE ROUND!!\n";
    cout<<"\t\t\t\t\t\t\t\t\tQuestion 1. How long is iPv6 address is?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 32bits\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 64bits\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 128bytes\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 128bits\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='D')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
      cout<<"\t\t\t\t\t\t\t\t\tQuestion 2. Which protocol does DHCP use at the Transport layer??:\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) TCP\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) FTP\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) UDP\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) IP\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='C')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 3. Where is a hub specified in the OSI model?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) Session\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) Physical\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) Datalink\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) Application\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='B')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 4. Which class of IP address has the most host addresses available by default?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) A\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) B\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) C\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) D\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
    cout<<"\t\t\t\t\t\t\t\t\tQuestion 5. Which protocol does Ping use\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) TCP\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) ICMP\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) ARP\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) UDP\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='B')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
        cout<<"\t\t\t\t\t\t\t\t\tQuestion 6. Acknowledgments ,flow control are characteristics of which OSI layer?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) Layer4\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) Layer2\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) Layer3\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) Laye\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
      cout<<"\t\t\t\t\t\t\t\t\tQuestion 7. Segmentation of a data stream happens at which layer of the OSI model?:\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) Transport\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) Physical\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) Application\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) Datalink\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 8. What is the frequency range of the IEEE 802.11a standard?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 3Ghz\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 10Ghz\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 11Ghz\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 5Ghz\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='D')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
     cout<<"\t\t\t\t\t\t\t\t\tQuestion 9. What is the maximum data rate for the 802.11g standard?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 122Mbps\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 54Mbps\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 3Mbps\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 4Mbps\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='B')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
    system("cls");
    cout<<"\t\t\t\t\t\t\t\t\tQuestion 10. How many non-overlapping channels are available with 802.11b?\n";
  cout<<"\t\t\t\t\t\t\t\t\tA) 3\n";
  cout<<"\t\t\t\t\t\t\t\t\tB) 34\n";
  cout<<"\t\t\t\t\t\t\t\t\tC) 5\n";
  cout<<"\t\t\t\t\t\t\t\t\tD) 2\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
  cin>>ch2;
  if(ch2=='A')
  {
   t++;
      cout<<"\t\t\t\t\t\t\t\t\tCorrect Answer\n";
  }
  else
   cout<<"\t\t\t\t\t\t\t\t\tWrong Answer\n";
             ofstream ofile;
          ofile.open("score.txt");
          ofile<<t*1000;
             ofile.close();
    return t;
 }
 char Quit()
 {
  char p;
           cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n\n";
         cout<<"\t\t\t\t\t\t\t\t\t              Are You Sure\n\n";
         cout<<"\t\t\t\t\t\t\t\t\t              Press Q if you want to quit\n";
         cout<<"\t\t\t\t\t\t\t\t\t              Press M to return to the Main menu\n";
         cout<<"\t\t\t\t\t\t\t\t\t              Press S to play\n";
         cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n";
         cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
         cin>>p;
         if(p=='Q')
          exit(0);
         return p;
 }
 char help()
 {
  char p;
  return p;
 }
};
int main()
{
 x:
  system("cls");
       Mainmenu ob;
       ob.funMain();
							char ch;
							cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
							cin>>ch;
							system("cls");
							Quiz ob1;
							if(ch!='S'&&ch!='U'&&ch!='R'&&ch!='H'&&ch!='Q')
       {
        while(ch!='S'&&ch!='U'&&ch!='R'&&ch!='H'&&ch!='Q')
        {
         cout<<"\t\t\t\t\t\t\t\t\t              Enter Valid Input\n";
         cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
         cin>>ch;
        }
       }
       if(ch=='U')
       {
        ob1.score();
       }
       if(ch=='H')
       {
        system("cls");
        ch=ob1.help();
       }
       if(ch=='Q')
       {
        system("cls");
        ch=ob1.Quit();
       }
       if(ch=='M')
         goto x;
							if(ch=='S')
       {
         ob1.funQuiz();
       }
      char ch1;
      cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
      cin>>ch1;
       if((ch!='M')&&(ch!='S'))//error
       {
        while((ch!='M')&&(ch!='S'))
        {
         cout<<"\t\t\t\t\t\t\t\t\t              Enter Valid Input\n";
         cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
         cin>>ch1;
        }
       }
             if(ch1=='M')
                goto x;
int p,q;
      if(ch=='S')
      {
        p=ob1.funQuiz1();
      }
      if(p>=3)
      {
       system("cls");
         cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n\n";
         cout<<"\t\t\t\t\t\t\t\t\t                    !!CONGRATULATIONS!!\n";
         cout<<"\t\t\t\t\t\t\t\t\t              !!YOU ARE ELIGIBLE FOR CHALLENGE ROUND!!\n";
         q=ob1.funQuiz2();
         if(q>=1)
         {
          cout<<"\t\t\t\t\t\t\t\t\t                    !!CONGRATULATIONS!!\n";
          cout<<"\t\t\t\t\t\t\t\t\t                 !!You have earned "<<q*1000<<"$!!\n";
          cout<<"\t\t\t\t\t\t\t\t\tPress M to return to the main menu!!\n\n";
          cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
          cin>>ch1;
         }
      }
      else{
        cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________________\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t      !!OOPS YOU ARE NOT ELIGIBLE FOR CHALLENGE ROUND!!\n\n";
        cout<<"\t\t\t\t\t\t\t\t\tPress M to return to the main menu!!\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t";
        cin>>ch1;
        if(ch1=='M')
        goto x;
      }
}
