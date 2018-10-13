#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
  string s1[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

   if(num == 0){ //num = 0
     output[0]="";
     return 1;
   }
    int subpart = num % 10;
    int remaining_subpart = num/10;
    int no_of_lines = keypad(remaining_subpart,output);
         int k =0;
         string *p = new string[(no_of_lines)*(s1[subpart].length())];
             for(int i=0;i<no_of_lines;i++)
                 for(int j=0;j<s1[subpart].length();j++)
 {
     
                    p[k] = output[i]+s1[subpart][j];
                      k++;
}
       k =0;
      for(int i=0;i<no_of_lines;i++)
                 for(int j=0;j<s1[subpart].length();j++)
 {
                    output[k]=p[k];
                      k++;
}
delete [] p;
return (no_of_lines)* (s1[subpart].length());
}

// string s1[9]={"","abc","def","ghi","jkl","mno","pqrs","tuv","qxyz"};

//     if(num =0){
//      output[0]="";
//      return 1;
//    }
//     int subpart = num % 10;
//     int remaining_subpart = num /10;
//     int no_of_lines = keypad(remaining_subpart,output);
//     cout<<no_of_lines;
//     for(int i=0;i<no_of_lines;i++)
//        for(int j=0;j<3;j++)
//       output[i+j+no_of_lines] = s1[subpart][j]+output[i];
   
//    return no_of_lines* 3;
     
// }

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    cout<<count;
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
