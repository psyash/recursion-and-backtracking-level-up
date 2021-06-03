#include <iostream>
using namespace std;

void subsequence(char *input,  char* output, int i, int j){
    //Base case
    if(input[i]=='\0'){
      output[j]='\0';
      cout<<output<<endl;
      return;
    }
    //rec case
    //1 include curr ele
    output[j] = input[i];
    subsequence(input,output,i+1,j+1);
    //2 exclude curr ele
    subsequence(input, output, i+1,j);
    

}


int main() {

    char input[100000],output[10000];
    cin>>input;

    subsequence(input,output,0,0);


    return 0;
}
