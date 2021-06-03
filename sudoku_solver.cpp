#include<bits/stdc++.h>
using namespace std;

bool isSafe(int mat[][9], int i, int j ,int no){
  for(int k=i;k<9;k++){
        if(mat[i][k] == no){
          return false;
        }
  }

  for(int k=j;k<9;k++){
        if(mat[k][j] == no){
          return false;
        }
  }

  int sx = (i*3)/3;
  int sy = (j*3)/3;

  for(int i=sx; i<sx+3; i++){
    for(int j=sy; j<sy+3; j++){
      if(mat[i][j] == no){
        return false;
      }
    }
  }

  return true;
}



bool solveSudoku(int mat[][9], int i, int j){
  //Base case
  if(i==9){
    //print matrix
    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }
    return true;
  }

  //Rec case
  if(j==9){
    return solveSudoku(mat,i+1,0);
  }

  //pre filled
  if(mat[i][j]!=0){
    return solveSudoku(mat, i, j+1);
  }

  for(int no=1; no<=9;no++){
    if(isSafe(mat,i,j,no)){
      mat[i][j] = no;
      bool solveSubprob = solveSudoku(mat,i,j+1);
      if(solveSubprob == true){
      return true;
      }
    }
  }

  //backtrack, if placed no is not correct
  mat[i][j] = 0;
  return false;


}

int main(){
  int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};

        solveSudoku(mat,0,0);

        return 0;
}