#include<iostream>

using namespace std;

void printinc(int n){
    if(n > 1){
        printinc(n-1);
    }
    
    cout << n << " ";
 
}
void print(int n){
    if(n == 1){
        cout << n << " ";
      return;
    }
   
    print(n - 1);
   cout << n << " ";
}
void decreasing(int n){
    cout<<n<<" ";
    if(n>1){
        decreasing(n-1);
    }
}

int main(){
  int n;
  cin>>n;
  print(n);
  cout<<endl;
  printinc(n);
  cout<<endl;
  decreasing(n);
  return 0;
}