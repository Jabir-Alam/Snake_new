#include<iostream>
#include<iomanip>
#include <sstream>
#include <string>
#include <conio.h>
#include<stdlib.h>
#include <ctime>


using namespace std;

class ludo{
public:

int boxName(){
int;

}
void convInt(){}
int random(){int h;

    h=(rand()%6)+1;

return h;


}




private:
    char c;
    int n,S;


};




int main(){

    ludo a,P1,P2,P3,P4;
    int s1,s2,s3,s4,u=0;
    int p1=0,p2=0,p3=0,p4=0;
cout<<"\n\n\n\n";
int b=0;
s1:
for(int j=0;j<31;j++){
for(int i=0;i<121;i++){
if(j%3==0&& i%12!=0){cout<<"_";}
if(i%12==0&&j!=0&&j%3==0){cout<<"|";}

if(i%12==0&&j!=0&&j%3!=0){
if(i==0){cout<<"|";}
if(i!=0&&j%2==0)
    {


        cout<<setw(12)<<"|";}




if(i!=0&&j%2!=0){cout<<setw(12)<<"|";}
}}
b++;
if(j==15){cout<<"\tPlayer 1 is at : "<<p1;}
if(j==16){cout<<"\tPlayer 2 is at : "<<p2;}
if(j==17){cout<<"\tPlayer 3 is at : "<<p3;}
if(j==18){cout<<"\tPlayer 4 is at : "<<p4;}
   if(j==0)cout<<"__________";
   cout <<endl;}

char r;int l;



while(p1<100&&p2<100&&p3<100&&p4<100){

   for(int y=0;y<1;y++){

        if(u==0){u++;
            cout<<"\n\nTurn for Player 1 \nPlease any key to roll the dice .";

         cin.get();
         l=a.random();
         cout<<"Your score is "<<l;
         cin.get();
         p1+=l;

      system("cls");
      goto s1;
        }
           if(u==1){u++;
            cout<<"\n\nTurn for Player 2 \nPlease any key to roll the dice .";

         cin.get();
           l=a.random();
         cout<<"Your score is "<<l;
         cin.get();
         p2+=l;
     system("cls");
      goto s1;
        }
           if(u==2){u++;
            cout<<"\n\nTurn for Player 3\nPlease any key to roll the dice .";

         cin.get();
           l=a.random();
         cout<<"Your score is "<<l;
         cin.get();
         p3+=l;
      system("cls");
      goto s1;
        }
           if(u==3){u=0;
            cout<<"\n\nTurn for Player 4\nPlease any key to roll the dice .";

         cin.get();
           l=a.random();
         cout<<"Your score is "<<l;
         cin.get();
         p4+=l;
     system("cls");
      goto s1;



        }}}






cout<<"\n\n\n";

return 0;}
