#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    int count='A';

    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=count;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

}