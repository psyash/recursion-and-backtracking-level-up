#include <iostream>
using namespace std;

void between_duplicate(char *input, char *output, int i,int j){
    //Base case
    if(input[i]=='\0'){
        output[j]=='\0';
        return;
    }

    //Rec case
    if(input[i+1] == '\0' or input[i]!=input[i+1]){
        output[j] = input[i];
        between_duplicate(input,output,i+1,j+1);
    }
    else{
        output[j] = input[i];
        output[j+1] = '*';
        output[j+2] = input[i+1];
        between_duplicate(input, output, i+1, j+2);
    }
    
}


int main() {

    char input[10000], output[100000];
    cin>>input;
    cin>>output;

    
    between_duplicate(input, output,0,0);
    cout<<output;

    return 0;
}
