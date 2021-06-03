//string to integer "1234"-->1234

#include<iostream>
#include<cstring>
using namespace std;

int string_to_int(char *a,int len){
    //Base
    if(len == 0){
        return 0;
    }
    
    //rec case
    int digit = a[len-1] - '0';
    int smallans = string_to_int(a, len-1);

    return smallans*10+digit;
}


int main(){
    char ch[10000];
    cin>>ch;
    int len = strlen(ch);

    cout<<string_to_int(ch,len);
    return 0;
}
