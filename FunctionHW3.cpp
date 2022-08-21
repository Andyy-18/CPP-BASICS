#include<bits/stdc++.h>
using namespace std;

// n th  Fibonacci  number

int fibonacci(int n){
     
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }

    int a = 0;
    int b = 1;
    int nextsum ;

    for(int i = 1; i<=n ; i++){
        int nextsum = a+b;
        
        a=b;
        b=nextsum;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    
    cout<<n<<"th order fibonacci no is "<<fibonacci(n)<<endl;

return 0;
}