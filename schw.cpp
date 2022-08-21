#include<bits/stdc++.h>
using namespace std;
int main()
{
    int am;
    cout<<"Enter the ammount : "<<endl;
    cin>>am;

    int r100,r50,r20,r1;

    switch(1){
        case 1:
        r100=am/100;
        cout<<"Number of 100 rupees notes are : "<<r100<<endl;
        am=(am-r100*100);
        case 2:
        r50=am/50;
        cout<<"Number of 50 rupees notes are : "<<r50<<endl;
        am=(am-r50*50);
        case 3:
        r20=am/20;
        cout<<"Number of 20 rupees notes are : "<<r20<<endl;
        am=(am-r20*20);
        case 4:
        r1=am;
        cout<<"Number of 1 rupee notes are : "<<r1<<endl;
        break;
    
    }
return 0;
}