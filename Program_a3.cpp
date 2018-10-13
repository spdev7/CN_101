#include<iostream>

using namespace std;
//pointer two a 2D array (*output)[20]
void subset(int input[],int n,int (output)[],int i,int j){
    if(i==n)
    {
        return ;
    }
    output[j]=input[i];
for(int j=0;j<n;j++){
    for(int k=0;k<n;k++){
        
    }
}
     for(int a=0;a<n;a++){
        // for(int b=0;b<n;b++){
            cout<<output[a];
        // }
    }
    subset(input,n,output,i+1,0);
    subset(input,n-1,output,0,0);
         
    
}
int main(){
    int n;
    int output[20]={0};
    int input[20];
    cin>>n;
    for(int i=0;i<n;i++)
     cin>>input[i];
    subset(input,n,output,0,0); 
}