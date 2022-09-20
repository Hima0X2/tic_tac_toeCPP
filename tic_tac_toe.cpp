#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
#define endl '\n'
char s[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool ok=true;
char checkwinner(){
     if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][1]=='O'){
          return 'O';
     }
     else if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][1]=='X'){
          return 'X';
     }
     else if(s[1][0]==s[1][1]&&s[1][0]==s[1][2]&&s[1][0]=='O'){
          return 'O';
     }
     else if(s[1][0]==s[1][1]&&s[1][0]==s[1][2]&&s[1][0]=='X'){
          return 'X';
     }
      else if(s[2][0]==s[2][1]&&s[2][0]==s[2][2]&&s[2][0]=='X'){
          return 'X ';
     }
     else if(s[2][0]==s[2][1]&&s[2][0]==s[2][2]&&s[2][0]=='O'){
          return 'O';
     }
     else if(s[0][0]==s[1][0]&&s[0][0]==s[2][0]&&s[0][0]=='X'){
          return 'X';
     }
     else if(s[0][0]==s[1][0]&&s[0][0]==s[2][0]&&s[0][0]=='O'){
          return 'O';
     }
      else if(s[0][1]==s[1][1]&&s[0][1]==s[2][1]&&s[0][1]=='X'){
          return 'X';
     }
      else if(s[0][1]==s[1][1]&&s[0][1]==s[2][1]&&s[0][1]=='O'){
          return 'O';
     }
     else if(s[0][2]==s[1][2]&&s[0][2]==s[2][2]&&s[0][2]=='O'){
          return 'O';
     }
     else if(s[0][2]==s[1][2]&&s[0][2]==s[2][2]&&s[0][2]=='X'){
          return 'X';
     }
     else if(s[0][0]==s[1][1]&&s[0][0]==s[2][2]&&s[0][0]=='O'){
          return 'O';
     }
      else if(s[0][0]==s[1][1]&&s[0][0]==s[2][2]&&s[0][0]=='X'){
          return 'X';
     }
     else if(s[0][2]==s[1][1]&&s[0][2]==s[2][0]&&s[0][2]=='X'){
          return 'X';
     }
     else if(s[0][2]==s[1][1]&&s[0][2]==s[2][0]&&s[0][2]=='O'){
          return 'O';
     }
return 'c';
}
bool add(int c){
     bool right=true;
     if(ok){
     ok=false;
if(c==1){
     if(s[0][0]!='O'&&s[0][0]!='X'){
         s[0][0]='O';
     }
     else{
               right=false;
               ok=true;
     }
}
else if(c==2){
 if(s[0][1]!='O'&&s[0][1]!='X'){
s[0][1]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==3){
if(s[0][2]!='O'&&s[0][2]!='X'){
s[0][2]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==4){
if(s[1][0]!='O'&&s[1][0]!='X'){
s[1][0]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==5){
if(s[1][1]!='O'&&s[1][1]!='X'){
s[1][1]='O';
     }
     else{
          right=false;
          ok=true;
     }
}
else if(c==6){
if(s[1][2]!='O'&&s[1][2]!='X'){
s[1][2]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==7){
if(s[2][0]!='O'&&s[2][0]!='X'){
s[2][0]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==8){
if(s[2][1]!='O'&&s[2][1]!='X'){
s[2][1]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else if(c==9){
if(s[2][2]!='O'&&s[2][2]!='X'){
s[2][2]='O';
     }
     else{
                right=false;
                ok=true;
     }
}
else{
 right=false;
 ok=true;
}
}
else{
   ok=true;
   if(c==1){
     if(s[0][0]!='O'&&s[0][0]!='X'){
s[0][0]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==2){
 if(s[0][1]!='O'&&s[0][1]!='X'){
s[0][1]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==3){
if(s[0][2]!='O'&&s[0][2]!='X'){
s[0][2]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==4){
if(s[1][0]!='O'&&s[1][0]!='X'){
s[1][0]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==5){
if(s[1][1]!='O'&&s[1][1]!='X'){
s[1][1]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==6){
if(s[1][2]!='O'&&s[1][2]!='X'){
s[1][2]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==7){
if(s[2][0]!='O'&&s[2][0]!='X'){
s[2][0]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==8){
if(s[2][1]!='O'&&s[2][1]!='X'){
s[2][1]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else if(c==9){
if(s[2][2]!='O'&&s[2][2]!='X'){
s[2][2]='X';
     }
     else{
           right=false;
           ok=false;
     }
}
else{
  right=false;
 ok=false;
}
}
return right;
}
void showdisplay(){
    cout<<"\t\t\t  "<<s[0][0]<<" | "<<s[0][1]<<"  | "<<s[0][2]<<"  \n";
    cout<<"\t\t\t--------------\n";
     cout<<"\t\t\t  "<<s[1][0]<<" | "<<s[1][1]<<"  | "<<s[1][2]<<"  \n";
     cout<<"\t\t\t--------------\n";
     cout<<"\t\t\t  "<<s[2][0]<<" | "<<s[2][1]<<"  | "<<s[2][2]<<"  \n\n";
     cout<<"-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n";
}
int main()
{
    cout<<"\t\t\t  Tic-Tac-Toe\n\n";
   cout<<"Choose a cell numbered from 1 to 9 as below and play\n\n";
     showdisplay();
     string a,b;
     cout<<"ENTER THE PLAYER NAME WHO PLAY WITH 'O' : ";
     cin>>b;
     cout<<"ENTER THE PLAYER NAME WHO PLAY WITH 'X': ";
     cin>>a;
     int c;
     int d=0;
     while(1){
          if(ok){
               be1:
     cout<<b<<" has put a O in cell : ";
     cin>>c;
     if(!add(c)){
          system("Color 47");
           cout<<"You can't put here\n";
           goto be1;
     }
     system("Color 07");
     showdisplay();
          }
          else{
          be:
     cout<<a<<" has put a X in cell : ";
     cin>>c;
     if(!add(c)){
          system("Color 47");
           cout<<"You can't put here\n";
           goto be;
     }
     system("Color 07");
     showdisplay();
          }
     if(checkwinner()=='c'){
          d++;
     }
     else{
           system("Color 03");
               if(checkwinner()=='O'){
          cout<<"Winner is "<<b<<endl;
               }
               else if(checkwinner()=='X'){
                    cout<<"Winner is "<<a<<endl;
               }
          return 0;
     }
     if(d==9){
          cout<<"NONE IS WINNER."<<endl;
          cout<<"BETTER LUCK NEXT TIME."<<endl;
          return 0;
     }
     }
}



