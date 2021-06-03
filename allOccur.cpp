#include<iostream>
using namespace std;

void allOccur(int *a, int i, int n, int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOccur(a,i+1,n,key);
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    allOccur(arr,0,n,key);


    return 0;
}