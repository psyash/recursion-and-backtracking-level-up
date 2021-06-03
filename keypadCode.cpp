#include <iostream>
#include<cstring>
using namespace std;

string keypad[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

int count=0;

void keypadCode(string input, string output, int i){
  //Base case
  if(input.size()==0){
    cout<<output;
    count++;
    return;
  }

  //Rec case
  int r = input[i] - '0';
  for(int k=0;k<keypad[r].size();k++){
    char ch = keypad[r][k];
    keypadCode(input,output+ch,i+1);
  }
}

int main() {
    string input;
    cin>>input;
    string output;
    keypadCode(input, output, 0);
    cout<<count;

    return 0;
}
