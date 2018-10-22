//https://ide.codingblocks.com/s/35664
//printing is done row wise
#include<bits/stdc++.h>
using namespace std;
//declaring a global board of size 11
int board[11][11];
int counter =0 ;

bool isPossible(int n, int row,int col){
//-----------------same Column

  for(int i=row-1;i>=0;i--){
    if(board[i][col] == 1){
      return false;
    }
  }
//-----------------------------Upper Left Diagonal
  for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
    if(board[i][j] ==1){
      return false;
    }
  }

  //------------------------- Upper Right Diagonal

  for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
    if(board[i][j] == 1){
      return false;
    }
  }

  return true;
}

void nQueenHelper(int n,int row){
// ----------------------------------We have reached some solution
if(row == n){
   
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<board[i][j]<<" ";
    }
    cout<<" | ";
  }
  counter++;
cout<<endl; 
return ;  
for(int j=0;j<n;j++){
if(isPossible(n,row,j)){
   board[i][j] = 1;
   //-----------------------------------Recursive Call
   nQueenhelper(n,row+1);
   //------------------------------For Backtracking again declaring the same element 0
   board[i][j] = 0;
   }
 }
 return;
}
void placeNQueen(int n){
//----------------------------------declaring a multiset(memset) all 0 
memset(board,0,11*11*sizeof(int));
nQueenHelper(n,0);
}
