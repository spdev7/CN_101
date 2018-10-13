#include<iostream>
#include<string>

using namespace std;

void keypad(string input,string output){
    string s1[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     string temp;
    //base case 
    if(input.length()==0)
       cout<<output<<endl;
       return;
    

    //main function call
      for(int i=0;i<s1[input.substr(0,1)].length;i++)
        for(int j=0;j<)
       keypad(input.substr(0,1),s1[]+output);
      
}sdskdjfs;dldfds

int main(){
  string input;
  cin>>input;
  string output ="";
  keypad(input,output);
}