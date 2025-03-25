#include<iostream>
#include<iomanip>
#include <sstream>
#include <string>
#include <conio.h>
#include<stdlib.h>
#include <ctime>
#include <cstring>
#include <windows.h>
using namespace std;

class ludo{
public:


int Rank(int WIN[4]){
int win2[4]={0,0,0,0};
for(int lo=0;lo<4;lo++){
    for(int ko=0;ko<4;ko++){
        if((WIN[lo]/WIN[ko])!=0){win2[lo]++;}

    }}

WIN[0]=win2[0];
WIN[1]=win2[1];
WIN[2]=win2[2];
WIN[3]=win2[3];
 return win2[4];


}
    int score(int j,int U){
        int Y=j;
    if(j==45){cout<<"Bad Luck !You were eaten by a snake(1)\You have to go back to 23" ; Y=23;cin.get();return Y;}
  else if(j==49){cout<<"Bad Luck !You were eaten by a snake(2)\You have to go back to 20" ; Y=20;cin.get();return Y;}
   else if(j==93){cout<<"Bad Luck !You were eaten by a snake(3)\You have to go back to 41" ; Y=41;cin.get();return Y;}
  else if(j==63){cout<<"What luck!You have climbed a ladder(1)\You have advanced to 77" ; Y=77;cin.get();return Y;}
  else if(j==16){cout<<"What luck!You have climbed a ladder(1)\You have advanced to 89" ; Y=89;cin.get();return Y;}
   else if(j==38){cout<<"What luck!You have climbed a ladder(1)\You have advanced to 80" ; Y=70;cin.get();return Y;}
   else if(j==26){cout<<"What luck!You have climbed a ladder(1)\You have advanced to 98" ; Y=98;cin.get();return Y;}
   else if(j>100){cout<<"Your score went over 100 \nYou have to get perfect 100 try again \n(Your last score wont be added)";
    Y=j-U;
   cin.get();return Y;}
return Y;

}

int assign(int pl1,int pl2,int pl3,int pl4){
P1=pl1;
P2=pl2;
P3=pl3;
P4=pl4;
}

string mid(string h){
string x="";int g=0;
for(int m=0;(12-3*h.size())/2>=m;m++){
    x=x+" ";
g++;}
x=x+h;
for(int p=0;(10-h.size()-g)>=p;p++){
    x=x+" ";
}
x+="|";
return x;
}


string convInt(int f){
  string s1="";

   if(f==100){s1="end";}
  else if(f==1){s1="strt";}
  else if(f==P1&&f!=1&&f!=100){s1+="P1";}
 else if(f==P2&&f!=1&&f!=100){s1+="P2";}
else if(f==P3&&f!=1&&f!=100){s1+="P3";}
else if(f==P4&&f!=1&&f!=100){s1+="P4";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==23){s1="S1.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==45){s1="S1.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==20){s1="S2.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==49){s1="S2.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==41){s1="S3.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==91){s1="S3.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==77){s1="L1.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==63){s1="L1.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==89){s1="L2.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==16){s1="L2.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==70){s1="L3.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==38){s1="L3.s";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==98){s1="L4.e";}
else if(f!=P1&&f!=P2&&f!=P3&&f!=P4&&f==26){s1="L4.s";}


 else{
ostringstream strg;
strg<< f;
s1 = strg.str();
}
return mid(s1);
}
int random(){int h;
srand(time(0));
h=(rand()%6)+1;
return h;
}
private:
    char c;
    int P1,P2,P3,P4,S;
};

int main(){r:
    system("cls");
    int pn=0,l=0,a1=1;
    cout<<"Please enter the number of players (minimum 2 and maximum 4 players) : ";pn1: cin>>pn;
    if(pn<2||pn>4){cout<<"Please enter a number between 2 to 4 : ";goto pn1;}

     system("cls");
int s[4]={0,0,0,0};int JO=0,d1=0;
    ludo a;
    int u=0;
    int p1=0,p2=0,p3=0,p4=0;
    if(pn<4){p4=100;s[3]=9999999; }
    if(pn<3){p3=100;p4=100;s[2]=99999;s[3]=9999999;}


cout<<"\n\n\n\n";
int b=0;
s1:

    int z=0;
    cout<<"\n\n\n";
for(int j=0;j<31;j++){
for(int i=0;i<121;i++){
if(j%3==0&& i%12!=0){cout<<"_";}
if(i%12==0&&j!=0&&j%3==0){cout<<"|";}

if(i%12==0&&j!=0&&j%3!=0){
if(i==0){cout<<"|";}
if(i!=0&&j%2==0)
    {
z++;
    cout<<a.convInt(z);

    }

if(i!=0&&j%2!=0){cout<<setw(12)<<"|";}
}}
b++;
if(j==15){cout<<"\tPlayer 1 is at : "<<p1;JO++;}
if(j==16){cout<<"\tPlayer 2 is at : "<<p2;JO++;}
if(j==17){
      if(pn>=3){cout<<"\tPlayer 3 is at : "<<p3;JO++;}
}
if(j==18){
       if(pn==4) {cout<<"\tPlayer 4 is at : "<<p4;JO++;}
       }
if(d1==1){

if(j==23)                         {cout<<"\t\t-------------";}
if(j==24){
       if(l==2||l==3)             {cout<<"\t\t|  #        |";}
  else if(l==4||l==5||l==6)       {cout<<"\t\t|  #     #  |";}
  else if (l==1)                  {cout<<"\t\t|           |";}}
if(j==25)                         {cout<<"\t\t|           |";}
if(j==26){
        if(l==4||l==2)            {cout<<"\t\t|           |";}
  else if(l==6)                   {cout<<"\t\t|  #     #  |";}
  else if (l==1||l==5||l==3)      {cout<<"\t\t|     #     |";}}
if(j==27)                         {cout<<"\t\t|           |";}
if(j==28){
       if(l==2||l==3)             {cout<<"\t\t|        #  |";}
  else if(l==4||l==5||l==6)       {cout<<"\t\t|  #     #  |";}
  else if (l==1)                  {cout<<"\t\t|           |";}}
if(j==29)                         {cout<<"\t\t-------------";}

}

   if(j==0)cout<<"__________";
   cout <<endl;}
if(d1==1){Sleep(400);}
int r;



int s01=0,s02=0,s03=0,s04=0;

if (p1<100||p2<100||p3<100||p4<100){
        if(p1==100){s01=1;}
         if(p2==100){s02=1;}
          if(p3==100){s03=1;}
           if(p4==100){s04=1;}
           if((s01+s02+s03+s04)==3){u=5;}

   for(int y=0;y<1;y++){

        if(u==0){
            if(p1<100){
                    if(d1==1){ u=1;
                     cout<<setw(150)<<"Your score is "<<l;Sleep(500);
                     cout<<"\n\n\nPress enter to continue ";
         cin.get();
         d1=0;goto d2;
         }

            if(d1==0){d1=1;a1=1;
            cout<<"\n\nTurn for Player 1 \nPlease enter to roll the dice .";
            cin.get();
s[0]=JO;
l=a.random();


         p1+=l;
      p1=a.score(p1,l);}

a.assign(p1,p2,p3,p4);
d2:
      system("cls");
      goto s1;
      }else{u=1;}}
           if(u==1){
            if(p2<100){
                    if(d1==1){ u=2;a1=1;
                     cout<<setw(150)<<"Your score is "<<l;Sleep(500);
                     cout<<"\n\n\nPress enter to continue ";
         cin.get();
         d1=0;goto d3;
         }
         if(d1==0){d1=1;a1=0;
            cout<<"\n\nTurn for Player 2 \nPlease enter to roll the dice .";
s[1]=JO;
         cin.get();
           l=a.random();


         p2+=l;
         p2= a.score(p2,l);}

         a.assign(p1,p2,p3,p4);
         d3:
     system("cls");
      goto s1;
        }else{u=2;}}
           if(u==2){
             if(p3<100&&pn>=3){
                    if(d1==1){ u=3;a1=1;
                     cout<<setw(150)<<"Your score is "<<l;Sleep(500);
                     cout<<"\n\n\nPress enter to continue ";
         cin.get();
         d1=0;goto d4;
         }
               if(d1==0){d1=1;cout<<"\n\nTurn for Player 3\nPlease enter to roll the dice .";
s[2]=JO;
         cin.get();
           l=a.random();

         p3+=l;
         p3=a.score(p3,l);}
d4:
         a.assign(p1,p2,p3,p4);
      system("cls");
      goto s1;
        }else{u=3;}}

           if(u==3){
             if(p4<100&&pn==4){
                    if(d1==1){ u=0;a1=1;
                     cout<<setw(150)<<"Your score is "<<l;Sleep(500);
                     cout<<"\n\n\nPress enter to continue ";
         cin.get();
         d1=0;goto d5;
         }
            if(d1==0){d1=1; cout<<"\n\nTurn for Player 4\nPlease enter to roll the dice .";
s[3]=JO;
         cin.get();
           l=a.random();

         p4+=l;
          p4=a.score(p4,l);

         a.assign(p1,p2,p3,p4);}
         d5:
     system("cls");
      goto s1;
        }else{u=0;system("cls");goto s1;}}
}}
int r01,r02,ss=0;
a.Rank(s);

for(int r1=0;r1<pn;r1++){
    if(s[r1]==pn){r01=r1;}
     if(s[r1]==(pn-1)){r02=r1;}



}


ss=s[r01];
s[r01]=s[r02];
s[r02]=ss;




cout<<"\n\n\n"<<setw(15)<<"Player No"<<setw(13)<<"Rank"<<endl<<endl;
cout<<setw(15)<<"Player 01"<<setw(13)<<s[0]<<endl;
cout<<setw(15)<<"Player 02"<<setw(13)<<s[1]<<endl;
if(pn>=3){cout<<setw(15)<<"Player 03"<<setw(13)<<s[2]<<endl;}
if(pn==4){cout<<setw(15)<<"Player 04"<<setw(13)<<s[3]<<endl;}


char e;
cout<<"\n\n\nPlease enter E to exit and R to play again .";

e1:
cin>>e;
if(e!='e'&&e!='E'&&e=='R'&&e=='r'){cout<<"Please enter e or r only : ";goto e1;}
if(e=='r'||e=='R'){goto r;}
return 0;}
