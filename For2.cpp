#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<" Enter the value of n : "<<endl;
    cin>>n;

    int sum = 0;

    for(int i=1;i<=n;i++){
        // sum=sum+1;
        sum += i;
    }
    cout<<sum<<endl;

return 0;

}