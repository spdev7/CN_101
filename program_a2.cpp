#include<bits/stdc++.h>

using namespace std;
//Staircase prblem using 1,2,3 steps

int staircase(int n ){
   int steps=0;
    if(n==0)
      {
          return steps+1;
      }
// if(n<0){
//     return steps;
// }
if(n>=1){
    steps+=staircase(n-1)+staircase(n-2)+staircase(n-3);
}
    //    if(n>=1){
// steps+= staircase(n-1);
    //    }if(n>=2){
//  steps+= staircase(n-2);
    //    }if(n>=3){
// steps+=staircase(n-3);
    //    } 
         
 return steps;   
}
int main()
{
    int number;
    cin>>number;
    int c = staircase(number);
    cout<<c;
}