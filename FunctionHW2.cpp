#include<bits/stdc++.h>
using namespace std;

// Total no of setbits in two numbers

int setBits(int n){

    int count = 0;

    while(n != 0){
        if(n&1 == 1){
            count++;
        }
        n=n>>1;
    }
    return count;
        
}
        
int main()
{
    int a,b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;

    int ans = setBits(a) + setBits(b);

    cout<<"Total set bits in a and b is : "<<ans<<endl;

return 0;

}

/*
#include<bits/stdc++.h>
using namespace std;

int setbits(int a,int b){
    int count = 0;
    while(a>0 & b>0){
    if(a&1 == 1){
        count++;
    }
    a=a>>1;
    if(b&1 == 1){
        count++;
    }
    b=b>>1;
    }

    return count;

}

int main()
{   
    int a,b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;

    cout<<"Total set bits in a and b is : "<<setbits(a,b)<<endl;

return 0;

}
*/