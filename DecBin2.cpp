#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=-1*n;

    int ans=0;
    int i=0;
    while(n != 0){
        int bit = n & 1;

        ans = (bit *pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    int neg = ~(ans)+1;
    cout<<"Answer is "<<neg<<endl;

return 0;
}