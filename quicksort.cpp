#include<bits/stdc++.h>
using namespace std;
//https://ide.codingblocks.com/s/33198
//https://stackoverflow.com/questions/6740183/quicksort-with-first-element-as-pivot-example
int partition(int input[],int start,int end){
//       int counter=0;
        
//       for(int i=0;i<=end;i++)
//       { if(input[i]<input[0])
//             counter++;
//       }  
//       swap(input[0], input[counter+1]);
//       //temp = input[counter+1];
//       //input[counter+1]=input[0];
//      // input[0]= temp;
//      int i=0;
//      int j=end-1;
//      while(j!=counter+1 || i!=counter+1){
//        if(input[i]>input[counter+1] && input[j]<input[counter+1])
//             swap(input[i], input[j]);
//             i++;
//              j--;
//        if(input[i]>input[counter+1] && input[j]>input[counter+1])
//             j--;
//        if(input[i]<input[counter+1] && input[j]<input[counter+1])
//             i++;
//      }
//   return counter+1;

 int pivot=input[start];
       int p1=start+1;
     int j;
       for(int i=start+1;i<=end;i++)
       {if(input[i]<pivot)
         {
           if(i!=p1){ //checking for same elements no swapping required
             swap(input[p1],input[i]);
           }
           p1++;
         }
       }
       //moving pivot to its location
         input[start]=input[p1-1];
         input[p1-1]=pivot;
  return p1-1;
} 

void quicksort(int input[],int starting,int ending){
  if(starting < ending)
  {int c = partition(input,starting,ending);
    quicksort(input,starting,c-1);
    quicksort(input,c+1,ending);
  }
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */quicksort(input,0,size-1);
   // int starting =0;
   // int end = size -1;
   // int c = partition(input,starting,end);
    //quicksort(input,starting,c-1);
    //quicksort(input,c+1,end);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
