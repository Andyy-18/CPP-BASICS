#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int r=1;
    while(r<=n){
        int c=1;
        while(c<=r){
            cout<<r-c+1;
            c++;
        }
        cout<<endl;    
        r++;
    }
}