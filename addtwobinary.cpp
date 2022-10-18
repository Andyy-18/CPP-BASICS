#include<iostream>
#include<math.h>
using namespace std;
void addbinary(int a,int b){
   int s=a+b;
   int bit,y=0,i=0;
    while(s>0){
        int bit=s&1;
        y=bit*pow(10,i)+y;
        s=s>>1;
        i++;
    }
    cout<<"sum of binary is :-"<<y;
}
int main(){
    int a,b,i=0,j=0,r,r1,a1=0,b1=0;
    cout<<"Enter the first binary\n";
    cin>>a;
    cout<<"Enter 2nd binary\n";
    cin>>b;
    while(a>0){
       r=a%10;
       a1=a1+r*pow(2,i);
       a/=10;
       i++;
    }
    while(b>0){
       r1=b%10;
       b1=b1+r1*pow(2,j);
       b/=10;
       j++;
    }
    addbinary(a1,b1);
    
}
