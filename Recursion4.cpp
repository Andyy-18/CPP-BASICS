#include<bits/stdc++.h>
using namespace std;

void reachhome(int src,int dest){
    cout<<"src: "<<src<<" dest: "<<dest<<endl;
    // base case
    if(src==dest){
        cout<<"Reached"<<endl;
        return ;
    }
    //processing one step age
    src++;
    //recursive call
    reachhome(src,dest);
}

int main()
{
    int dest=10;
    int src=1;
    cout<<endl;
    reachhome(src,dest);
return 0;
}