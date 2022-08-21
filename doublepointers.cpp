#include<bits/stdc++.h>
using namespace std;
void update(int **p2){
    // p2=p2+1; // no change
    // *p2=*p2+1; // value of p2 has changed
    **p2=**p2+1; // value of i has changed
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    /*
    cout<<"Printing value of p: "<<i<<endl;
    cout<<"Printing value of p: "<<*p<<endl;
    cout<<"Printing value of p: "<<**p2<<endl;
    
    cout<<"Printing address of p: "<<&i<<endl;
    cout<<"Printing address of p: "<<p<<endl;
    cout<<"Printing address of p: "<<*p2<<endl;

    cout<<"Printing address of p2: "<<&p<<endl;
    cout<<"Printing address of p2: "<<p2<<endl;
    */
   cout<<"before: "<<i<<endl;
   cout<<"before: "<<p<<endl;
   cout<<"before: "<<p2<<endl;
   update(p2);
   cout<<"before: "<<i<<endl;
   cout<<"before: "<<p<<endl;
   cout<<"before: "<<p2<<endl;
return 0;
}