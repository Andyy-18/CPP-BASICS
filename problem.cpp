#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n=125;
    int p=1;
    int sum=0;

    while(n!=0){

        int digit=n%10;
        p=p*digit;
        sum=sum+digit;

        n=n/10;
    }
    int ans=p-sum;
    return ans;

}

// ????????????????????