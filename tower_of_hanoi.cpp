#include<iostream>
using namespace std;

void tower_of_H(int n, char src, char des, char helper){
    //base case
    if(n==1){
      return;
    }
    //rec case
    tower_of_H(n-1, src, helper,des);
    cout<<"moving disk "<<n<<"from "<<src<<" to "<<des<<endl;
    tower_of_H(n-1, helper, des, src);
    
}

int main(){

  int n;
  cin>>n;

  tower_of_H(n,'A','B','C');

   return 0;
}