#include<bits/stdc++.h>
using namespace std;

//creating  function

int power(int num1,int num2){
    int ans = 1;

    for(int i=1 ; i <= num2 ; i++){
        ans = ans*num1;
    }
    return ans;
}

// power function created

int main(){

    int a,b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;

    int ans = power(a,b);
    cout<<"Answer is : "<<ans<<endl;

    return 0;
}