#include <iostream>
using namespace std;

void rem_duplicate(char *input, char *output, int i,int j){
    //Base case
    if(input[i]=='\0'){
        output[j]=='\0';
        return;
    }

    //Rec case
    if(input[i+1] == '\0' or input[i]!=input[i+1]){
        output[j] = input[i];
        rem_duplicate(input,output,i+1,j+1);
    }
    else{
        output[j] = input[i];
        output[j+1] = input[i+2];
        rem_duplicate(input, output, i+2, j+1);
    }
    
}


int main() {

    char input[10000], output[100000];
    cin>>input;
    cin>>output;

    
    rem_duplicate(input, output,0,0);
    cout<<output;

    return 0;
}
