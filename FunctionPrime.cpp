#include<bits/stdc++.h>
using namespace std;

// 1 -> prime no
// 0 -> non-prime no

bool isprime(int n){

    for(int i = 2 ; i < n ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    if(isprime(n)){
        cout<<"It is a prime number."<<endl;
    }
    else{
        cout<<"It is not a prime number."<<endl;
    }
    
return 0;
}