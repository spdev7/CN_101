#include<iostream>
 
using namespace std;

void replaceCharacter(char input[],char c1,char c2){
  
 if(input[0]=='\0')
    return ;
 if(input[0]==c1)
    {input[0]=c2;
    cout<<input[0];
    replaceCharacter(input+1,c1,c2);}
 else
   {   cout<<input[0];
       replaceCharacter(input+1,c1,c2);}  
  
}
int main(){
    char a,b;
    char c[10];
    cin.get(c,10);
    cin>>a>>b;
    replaceCharacter(c,a,b);
}