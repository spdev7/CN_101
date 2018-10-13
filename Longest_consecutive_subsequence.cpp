#include<iostream>
#include <vector>
using namespace std;

//#include "solution.h"
vector<int> longestSubsequence(int *arr, int n){
       int j=1;
       
           while(j<n){
               if(a[j]=a[i]+1)
               {
                   v1.push_back(a[j]);
                   i++;
                   j++;
               }
               else{
                   i++;
               }
            
           }
       
}


int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	vector<int> output = longestSubsequence(input, n);
	for(int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}