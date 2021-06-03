#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][10],int sol[][10],int i, int j,int n,int m){
  //Base case
  if(i==m && j==n){
    //print maze
    for(int row=0;row<=m;row++)
        {
            for(int col=0;col<=n;col++)
            {
                cout<<sol[row][col]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    return true;
  }
  //rat should be inside maze
  if(i>n or j>n){
    return false;
  }
 
  if(maze[i][j]=='X'){
    return false;    
  }
  //Rec case
  sol[i][j] = 1;
  bool rightSuccess = ratInMaze(maze,sol,i,j+1,n,m);
  if(rightSuccess){
    return true;
  }
  bool downsucess = ratInMaze(maze,sol, i+1,j,n,m);
  if(downsucess){
    return true;
  }

  //Backtrack
  sol[i][j] = 0;

  return false;
}

int main(){
  int n,m;
  cin>>n>>m;
  char maze[10][10];
  int sol[10][10]={0};
  for(char i=0;i<n;i++){
    for(char j=0;j<m;j++){
      cin>>maze[i][j];
    }
  }

  ratInMaze(maze,sol, 0, 0,n,m);
  return 0;
}