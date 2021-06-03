#include <iostream>
using namespace std;

void mappedString(string input, string output){
    //Base case
    if(input.size()==0){
      cout<<output<<endl;
      return;
    }
    //rec case
    //1 single digit
    int singleDigitNumber = input[0]-'0';
    char ch = singleDigitNumber+'A'-1;
    mappedString(input.substr(1), output+ch);

    //2 double digit
    if(input.size()>=2){
        //double digit is possible
        int doubledigitNumber = (input[0]-'0')*10 + (input[1]-'0');
        if(doubledigitNumber>9 and doubledigitNumber<26){
          ch = doubledigitNumber+'A'-1;
          mappedString(input.substr(2), output+ch);
        }
    }


    

}


int main() {

  string input,output;
  cin>>input;

  mappedString(input,output);


    return 0;
}
