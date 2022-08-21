#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int start=(2*i)-2;
        while(start){
            cout<<"*"<<" ";
            start--;
        }
        int end=1;
        int count=n-i+1;
        while(end<=n-i+1){
            cout<<count<<" ";
            end++;
            count--;
        } 
        cout<<endl;
        i++;
    }
return 0;
}