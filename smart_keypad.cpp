#include <iostream>
using namespace std;
char keypad [][10] = {" ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz"};

void smart_keypad(char *input, char *output,int i, int j)
{
  //base case
  if(input[i] == '\0'){
    output[j] = '\0';
    cout<<output<<endl;
    return;
  }
  //rec case
  int digit = input[i] - '0';
  for(int k=0;keypad[digit][k]!=0;k++){
    output[j] = keypad[digit][k];
    smart_keypad(input,output,i+1,j+1);
  }
}
  
    

int main() {
  string s;
	cin>>s;

	char input[1000005], output[1000005];

	for (int i=0; i<(s.length()); i++){
		input[i] = s[i];
	}

	smart_keypad(input,output,0,0);
	return 0;
    
}