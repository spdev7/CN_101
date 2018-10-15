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
      
}


int main(){
  string input;
  cin>>input;
  string output ="";
  keypad(input,output);
}

// void printKeypad(int num){
//     /*
//     Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
//     */
//     string s1 = to_string(num);
//     string output = "";
//     printKeypad(s1,output);
  
// }
// void printKeypad(string input,string output)
// {
//     string s1[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//      string temp;
//     //base case 
//     if(input.empty()){
//        cout<<output<<endl;
//        return;
//     }

//     int value = input.substr(0,1);
//     int remaining = input.substr(1);
//     int int_value = atoi(value);
//     //main function call
//       string value1=s1[int_value];
//       for(int i=0;i<value1.length();i++)
//       {   string xoxo = s1[value1][i];
//        printKeypad(remaining,output+xoxo);
//       }
// }
