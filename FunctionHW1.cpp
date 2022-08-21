#include<bits/stdc++.h>
using namespace std;

// AP = 3*n + 7 

int AP(int n){
    
    int ap = 3*n + 7;
    return ap;
}
int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    int ans = AP(n);

    cout<<"Answer is : "<<ans<<endl;

return 0;
}