#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    int sum=0;

    while(i<=n){

        sum=sum+i;
        i=i+1;
    }   
   
    cout<<"Value of sum is : "<<sum;

}