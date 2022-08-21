#include<bits/stdc++.h>
using namespace std;

// 1-> Even
// 0 -> Odd

bool isEven(int num){
    // odd
    if(num&1){
        return 0;
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;

    if(isEven(a)){
        cout<<"Number is even."<<endl;
    }
    else{
    cout<<"Number is odd."<<endl;
    }

return 0;
}