#include<iostream>

using namespace std;

int main()
{
    int a;
    int count;
    cin>>a;
    while(a>0){
        if(!(a/2 || a/3 || a/5 || a/7))
    {
        count++;
    }
       a--;
    }
  cout<<count;

  return 0;
}