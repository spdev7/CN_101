#include<iostream>
using namespace std;

int subsequence(string input,string output[]){
   //for string length(),size() both work
      
   if(input.empty()){
     output[0]="";
     return 1;
   }
    string smallerstring = input.substr(1);
   
    int no_of_times =  subsequence(smallerstring,output);
   for(int i=0;i<no_of_times;i++){ 
      output[i + no_of_times]=input[0]+ output[i];
   }
   return 2 * no_of_times;
}
int main(){
    //string s1;
    string input;
    cin>>input;
    int size = input.size();
    int outputsize = 2000;
    
    string * output = new string[outputsize];
  
    int counter =  subsequence(input,output);
   
   for(int i=0;i<counter;i++)
     cout<<output[i]<<endl;
    //getline(cin,s1);
   // *s1 = "abc";
    //cout<<*s1;
    //subsequence(s1);

}