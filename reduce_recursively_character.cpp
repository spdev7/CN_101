#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
    //Attempt 1
//     vector <char> v1;
//     vector <char>::iterator i;
    
   
//    if(input[0]==input[1])
//      {
//      v1.push_back(input[0]);
//      removeConsecutiveDuplicates(input+2);
//      }
//    else
//     {  
//      v1.push_back(input[0]);
//      removeConsecutiveDuplicates(input+1);}

//     for(i = v1.begin();i!=v1.end();i++)
//         cout<<*i;
//Attempt 2
// // int k=0;
//     if(input[0]=='\0')
//           return;
//    if(input[0]==input[1])
//       input[k++]=NULL;
//    removeConsecutiveDuplicates(input+1);
//Attempt 3
	
 int size=strlen(input);
         
          if(input[0]=='\0')
            return;
        
          if(input[0]==input[1]) 
          {for(int i=0;i<size;i++)
              input[i]=input[i+1];
            removeConsecutiveDuplicates(input);}
         else{
           removeConsecutiveDuplicates(input+1);
         }
        
}
int main(){
    char a,b;
    char c[10];
    cin.get(c,10);
    removeConsecutiveDuplicates(c);
    cout<<c;
}