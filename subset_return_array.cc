#include <iostream>

using namespace std;

int subset(int input[], int n, int output[][20],int index) {
    // Write your code here
    int size = pow(2,n);
    int output1[20][20];
    int temp = input[index];
    int subset(input,n,output,index+1);  








    return size;
}
int subset(int input[], int n, int output[][20]) {
    // Write your code here
    int index = 0;
    int c1 =  subset(input,n,output,index);
    return c1;
}
int main() {
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
