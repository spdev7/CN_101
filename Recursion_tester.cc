#include<iostream>

using namespace std;

void subset(int arr1[],int size,int arr2[])
{   
  // if(size==1)
  //   for(int i=0;i<9;i++)
  //   cout<<arr1[i];
  //   /////////////////////////////
  //  subset(arr1+1,size-1,arr2);
  //  subset(arr1+1,size-1,arr2+arr1);
  
}
int main()
{
  int arr1[10];
  for(int i=0;i<9;i++)
    cin>>arr1[i];
  int size =10;
  int arr2[10];
  subset(arr1,size,arr2); 

}