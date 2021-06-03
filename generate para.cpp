#include<bits/stdc++.h>
using namespace std;

void generatePara(int n, int openB, int closeB, string out){
  //Base case
  if(closeB==n){
    cout<<out<<endl;
    return;
  }
  //Rec case
  if(openB>closeB){
    generatePara(n, openB, closeB+1, out+')');
  }
  if(openB<n){
    generatePara(n, openB+1,closeB,out+'(');
  }
}


int main(){
  int n;
  cin>>n;

  generatePara(n,0,0,"");

  return 0;
}