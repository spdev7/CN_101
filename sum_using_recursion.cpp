#include<iostream>
using namespace std;
//recursively check whether number is present
// bool checkNumber(int input[], int size, int x) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
//    if(size==0)
//      return false;
//  if(input[0]==x)
//    return true;
//   checkNumber(input+1,size-1,x); 
// }


// int lastIndex(int input[], int size, int x) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
// if (size==0)
//     return -1;
   
//  if(input[size-1]==x)
//     return size-1;
//   lastIndex(input,size-1,x);
// }

int firstIndex(int input[], int size, int x,int i) {
 if (size==0)
    return -1;
   
 if(input[i]==x)
    return i;
  firstIndex(input,size-1,x,i+1);
}
/////
int sum(int input[],int n){
    if(n==0){
        return 0;
    }
      return input[0]+sum(input+1,n-1);
}
// int sum(int input[], int n) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
  
//   if(n<=0)
//     return 0;
//   int value;
//   value = input[n-1]+sum(input,n-1);
//   return value;
// }

int main(){
    int input[10];
    int n;
    int x;
     cin>>n;
    for(int i=0;i<n;i++)
     cin>>input[i];
     cin>>x;
    //int c=sum(input,n);
    int c =firstIndex(input,n,x,0);
   cout<<c;
    return 0;
}