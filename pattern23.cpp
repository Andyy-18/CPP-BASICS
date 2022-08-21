#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=i-1;
        int j=1;
        while(space){
            cout<<" ";
            space--;
        }
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}