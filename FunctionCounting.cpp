#include<bits/stdc++.h>
using namespace std;

// Function signature
void Counting(int n){

//  Function body
    for(int i=1 ; i<=n ; i++){
       /* cout<<i<<endl; */
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the ending number : "<<endl;
    cin>>n;

//  Function call
    Counting(n);

return 0;
}