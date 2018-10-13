#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Testing pointer for character
//     char p1[10];
//     cin.get(p1,10);
//     char * p = & p1[0];
//     char **t = &p;
//     cout<<*p;
//     ++(*t);
//     cout<<*p;
//    cout<<(*p)++; 

//Testing what will happen with input[k++];
//  char input[10];
//  cin.get(input,10);
//    int k=0;
   
//    cout<<k;
   
//    for(int k=0;k<5;k++)
//      input[k++]='n';
//      cout<<input;
   //Result: we don't need an extra variable to increment
   char input[10];
   cin.get(input,10);
   int size = sizeof(input);
   for(int k=2;k<size;k++)
     input[k]=input[k+1];
   size--;
   cout<<input;  
   //Here we move to next element
   


}