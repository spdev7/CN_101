#include<bits/stdc++.h>

using namespace std;
//string starting from a containing a,bb only
bool function1(char array[]){
    bool value;
     char * p = &array[0];
// for(int i=0;i<strlen(array);i++)
     if(*p=='\0')
       return;
      if(*p=='a')
       {  
          value=true;
         function1(array+1); 
           }
       
      if(*p=='b' )
        {p++;
         if(*p=='b')
           {value = true;
           function1(array+2);
           }
         else
          {p--;}  
        }     
     else{
         return 5;
     }          
    return value;
}
int main(){
     char array[10];
    
     cin.get(array,10);
    //  cout<<array;
    //  cout<<endl;
    //   cout<<p<<endl;
    //  cout<<*p<<endl;
    //  cout<<array[0]<<endl;
    bool c=function1(array);
    cout<<c;
}