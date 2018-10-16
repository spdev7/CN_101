#include<iostream>

using namespace std;

void subsequence1(string input, string output){
    if(input.length()==0)
    {  
      cout<<output<<endl;
      return;
    }
    //we don't add to the subset
    subsequence1(input.substr(1),output);
    //here we add to subset
    subsequence1(input.substr(1),output + input[0]);
     
}  


int main(){
    string s1;
    cin>>s1;
    string s2 = "";

    subsequence1(s1,s2);

}