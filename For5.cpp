#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    bool ispr = 1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout<<"Not a prime number."<<endl;
            ispr = 0;
            break;
        }
    }
    if(ispr==0){
        cout<<"Not a prime number."<<endl;
    }
    else{
        cout<<"Prime number."<<endl;
    }

return 0;
}