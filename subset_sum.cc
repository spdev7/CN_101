#include <iostream>

using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
  if(n==0){
    return 0;
  }
  if(k==0)
  {
    
  }
 int temp=input[0];
  int i = subsetSumToK(input+1,n-1,output,k-temp)
  
  
  
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
