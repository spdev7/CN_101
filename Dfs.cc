#include<iostream>

using namespace std;
void print(int ** Edges,int n,int sv,bool * visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(Edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            print(Edges,n,i,visited);
        }
    }
}
int main(){
    int e,n;
    //e---->no of edges && n--->no of vertices
    cin>>e>>n;

    int ** Edges = new int*[n];  //Creating a 2D array
    for(int i=0;i<n;i++){
        Edges[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            Edges[i][j]=0;
        }
    }  
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;      
        Edges[f][s]=1;
             Edges[s][f]=1;
    }  
   bool *visited = new bool[n];
   for(int i=0;i<n;i++){
       visited[i]=false;
   }         
    print(Edges,n,0,visited);
    return 0;
}