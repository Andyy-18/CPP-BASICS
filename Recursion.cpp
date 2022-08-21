#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // Base case
    if(n==0)
        return 1;
    int chotiprblm=factorial(n-1);
    int badiprblm=n*choti;
    return badiprblm;
}

int main()
{
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
return 0;
}