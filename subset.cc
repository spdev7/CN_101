#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int subset(int input[],int n, int output[][20]){
    
    int limit = pow(2,n);
    int counter=0;
    int j=0;
    int i=0;
    int temp = 0,rem;
    while(counter < limit)
    {
      for(int i=0;i<n;i++)
      rem = temp % 2;
      temp = temp / 2;
       if(rem == 1)
       {
         output[j][i] = input [i];
         output[i][0] = counter;
         j++;
       }
       counter++;
    }
   return limit; 
//     k++;
//     if(i=input.length())
//     {
//         return i;//don't know
//         //Return the output
//     }
//     else{
//         small_output[i][k]=subset(input+1,n-1,i+1,small_ouput);
//         k++;
        
//     }
// }
// int subset(int input[], int n, int output[][20]) {
//     // Write your code here
//     i=0;
//     int small_output [20][20];
//     subset(input,n,0,small_output);
//---------------------------------------
    // int size = pow(2,n); ///Total number 
    // if(index = input.length()){
    //     return n;
    // }
    // int * result = new int[n];
    // int i=1,j=0;
    // small_output[i][j] = input[j];
    // j++;
    // //small_output[0][j] = result[i].length;
    // small_output[0][j] = subset(input+1,n,small_output);
    // return size;
}

int main(){
    int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}