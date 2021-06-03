#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char output[1000];

void move_end(char* input, int i, int j, int n){
    if(input[i]=='\0'){
        return;
    }
    if(input[i] == 'x' or input[i]=='X'){
        output[n-1]=input[i];
        move_end(input,i+1,j,n-1);

    }
    else{
        output[j]=input[i];
        move_end(input,i+1,j+1,n);
    }
}


int main(){
    
    char input[1000];
    cin>>input;

    int n = strlen(input);
    //cout<<n<<endl;
    move_end(input,0,0,n);

    for(int i=0;i<n;i++){
        cout<<output[i];
    }
    return 0;
}