#include <iostream>
using namespace std;

bool subset(int a[], int i, int n, int sum, int count)
{
    if(i==n)
    {      
        if(sum==0 && count>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return subset(a, i+1, n, sum + a[i], count+1) or subset(a, i+1, n, sum, count);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        if(subset(a, 0, n, 0, 0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}