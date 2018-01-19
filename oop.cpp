#include <iostream>
#include<string.h>
#include <cstdlib>
# include <windows.h>
# include <mmsystem.h>


int score=0;
using namespace std;
int track=0;
class game
{

public:
  //int score;
  string s;
  game();
  ~game();
};


class RockPaper : public game
{
public:
char option;
RockPaper();

};

class Music : public game
{
public:
char option;
Music();

};

class mineSweeper : public game
{
public:
mineSweeper();
mineSweeper(int);

};


mineSweeper::mineSweeper()
{
int nl=5;
int i;
int j;
int k=0;
cout<<"\n\n"<<endl;
for(i=0;i<nl;i++)
{
cout<<"\t\t";
for(j=0;j<nl;j++)
{k=k+1;

if(k/10==0)
{
cout<<"[0"<<k<<"]\t";
}
else
{cout<<"["<<k<<"]\t";}


}
cout<<"\n\n";
}
int arr[40];
cout<<"Enter "<<((nl*nl)/3)<<" places, where you think , there are no bombs\n"<<endl;
for(i=0;i<(nl*nl)/3;i++)
{
 cin>>arr[i];
}
int flag;
int p;

int r;
k=0;
cout<<"\n\n"<<endl;
for(i=0;i<nl;i++)
{
cout<<"\t\t";
for(j=0;j<nl;j++)
{
 r = (rand() % 5) + 1;
k=k+1;
flag=0;

for(p=0;p<((nl*nl)/3);p++)
{
if(arr[p]==k && (r<=2))
{
flag=-1;
}
else if(arr[p]==k && (r>2))
{
flag=-3;
}

}


if(flag==-1)
{
   score=score-k;
   //cout<<"**decremented"<<score<<"\t"<<k<<endl;
}
else if(flag==-3)
{
 score=score+k;
   //cout<<"**incremented"<<score<<"\t"<<k<<endl;

}
if(k/10==0 && r>=3 )
{
cout<<"[0"<<k<<"]\t";
}
else if(r>=3)
{cout<<"["<<k<<"]\t";}
else if(r<3)
{
cout<<""<<"<!>"<<"\t";
}
}
cout<<"\n\n";
}



cout<<"\n\t\t\t"<<s<<"'s SCORE : "<<score<<endl;

}





mineSweeper::mineSweeper(int nl)
{
int i;
int j;
int k=0;
cout<<"\n\n"<<endl;
for(i=0;i<nl;i++)
{
cout<<"\t\t";
for(j=0;j<nl;j++)
{k=k+1;

if(k/10==0)
{
cout<<"[0"<<k<<"]\t";
}
else
{cout<<"["<<k<<"]\t";}


}
cout<<"\n\n";
}
int arr[40];
cout<<"Enter "<<((nl*nl)/3)<<" places, where you think , there are no bombs\n"<<endl;
for(i=0;i<(nl*nl)/3;i++)
{
 cin>>arr[i];
}
int flag;
int p;

cout<<"\t\tBOMB-  "<<"<!>"<<"\n"<<endl;

int r;
k=0;
cout<<"\n\n"<<endl;
for(i=0;i<nl;i++)
{
cout<<"\t\t";
for(j=0;j<nl;j++)
{
 r = (rand() % 5) + 1;
k=k+1;
flag=0;

for(p=0;p<((nl*nl)/3);p++)
{
if(arr[p]==k && (r<=2))
{
flag=-1;
}
else if(arr[p]==k && (r>2))
{
flag=-3;
}

}


if(flag==-1)
{
   score=score-k;
   //cout<<"**decremented"<<score<<"\t"<<k<<endl;
}
else if(flag==-3)
{
 score=score+k;
   //cout<<"**incremented"<<score<<"\t"<<k<<endl;
}
if(k/10==0 && r>=3 )
{
cout<<"[0"<<k<<"]\t";
}
else if(r>=3)
{cout<<"["<<k<<"]\t";}
else if(r<3)
{
cout<<""<<"<!>"<<"\t";
}
}
cout<<"\n\n";
}

cout<<"\n\t\t\t"<<s<<"'s SCORE : "<<score<<endl;

}




Music::Music()
{
 int j=1;
int i=1;
int y;

cout<<"\n\n\t\tGUESS MUSIC"<<endl;
while(j)
{
switch(i)
{
case 1  :cout<<"\nPlaying Music......."<<endl;
         PlaySound(TEXT("MaaTujheSalaam.wav"),NULL,SND_SYNC);
         break;
case 2  :cout<<"\nPlaying Music......."<<endl;
         PlaySound(TEXT("wav.wav"),NULL,SND_SYNC);
         break;
case 3  :cout<<"\nPlaying Music......."<<endl;
         PlaySound(TEXT("The_Pink_Panther_Theme_Song_Original_Version_.wav"),NULL,SND_SYNC);
         break;

//case 3  :
//         break;

}
cout<<"\nGuess the music-\n\n\n1.Music composed by A.R.Rehman\n2.Indian Sensation - Baahubali\n3.Pink Panther\n4.Music by Taylor Swift\n5.Music by Illiyaraja\n\n";
cin>>y;
if(y==i)
{
 PlaySound(TEXT("correct_sound.wav"),NULL,SND_SYNC);
cout<<"\nYou are correct!"<<endl;
score=score+2;
cout<<"\n\t\t\t"<<s<<"'s SCORE : "<<score<<endl;

}
else
{
PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);
cout<<"\nOOPs! you lost!"<<endl;

score=score-1;
cout<<"\n\t\t\t"<<s<<"'s SCORE : "<<score<<endl;

}

i=i+1;
if(i==4)
{

j=0;
}
}

}

RockPaper::RockPaper()

{


int r;
int i;
score=0;
//cout<<"\n\nE
for(i=0;i<5;i++)
{
cout<<"\n\nEnter\n\t\t'r'-rock\t'p'-paper\t's'-scissor"<<endl;
cin>>option;
 r = (rand() % 3) + 1;

 switch(r)
 {
 case 1:
         if(option=='p' || option=='P')
         { PlaySound(TEXT("correct_sound.wav"),NULL,SND_SYNC);
           cout<<"You win"<<endl;
           score=score+1;
         }
         else if(option =='s'|| option=='S')
         {            PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

           cout<<"You lose"<<endl;
           score=score-1;
         }
         else if(option =='r'|| option=='R')
         {
           cout<<"Tie"<<endl;
           score=score+0;
         }
         else
         {
                     PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

         cout<<"Exception occurred"<<endl;

         }
         cout<<"The computer entered Rock\n";
         break;
 case 2:
         if(option=='s'|| option=='S')
         { PlaySound(TEXT("correct_sound.wav"),NULL,SND_SYNC);
           cout<<"You win"<<endl;
           score=score+1;
         }
         else if(option =='r'|| option=='R')
         {            PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

           cout<<"You lose"<<endl;

           score=score-1;
         }
         else if(option =='p'|| option=='P')
         {
           cout<<"Tie"<<endl;
           score=score+0;
         }
         else
         {
                     PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

         cout<<"Exception occurred"<<endl;

         }
         cout<<"The computer entered Paper\n";
         break;


 case 3:
         if(option=='R'|| option=='r')
         { PlaySound(TEXT("correct_sound.wav"),NULL,SND_SYNC);

           cout<<"You win"<<endl;
           score=score+1;
         }
         else if(option =='p'|| option=='P')
         {                    PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

           cout<<"You lose"<<endl;

           score=score-1;
         }
         else if(option =='s'|| option=='S')
         {
           cout<<"Tie"<<endl;
           score=score+0;

         }
         else
         {
                     PlaySound(TEXT("Wrong_Buzzer_-_Sound_Effect.wav"),NULL,SND_SYNC);

         cout<<"Exception occurred"<<endl;

         }
         cout<<"The computer entered Scissor\n";
         break;

 }


}
cout<<"\n\t\t\t"<<s<<"'s SCORE : "<<score<<endl;

}
game::game()
{

  {cout<<"\nEnter User-name to start the game\n";
  cin>>s;}

}
game::~game()
{
  s="\0";
  score=0;
}


int main()
{
 int run=1;
 int s;
 string sl;
while(run)
   {
  Music m;
   cout<<"\n\n\t\t\t'ROCK-PAPER-SCISSOR'"<<endl;
   RockPaper scissor;
    int box;
    cout<<"\n\n\t\t\t'MINE SWEEPER'"<<endl;
    cout<<"\n\nDo you want to decide no of boxes in minesweeper. Enter 1 for yes!"<<endl;
    cin>>s;
    if(s==1)
    {
         cout<<"\n\nEnter no of boxes :\n\n\n\t\tMIN:3\tMAX:6\n"<<endl;
         cin>>box;
         if(box<3)
         {
          box=3;
         }
         else if(box>6)
         {
          box=6;
         }
         mineSweeper name(box);
         sl=name.s;
    }
    else
    {
     mineSweeper name;
         sl=name.s;

    }

cout<<"\n\nEnter 0 , if you want to stop GAMING with OOP\n\n"<<endl;
cin>>run;
if(run==0)
{
cout<<"\t\t\tTHANK YOU player1-"<< m.s <<" FOR GAMING\n\n";
cout<<"\t\t\tTHANK YOU player2-"<< scissor.s <<" FOR GAMING\n\n";
cout<<"\t\t\tTHANK YOU player3-"<< sl <<" FOR GAMING\n\n";

}
   }
    return 0;
}
