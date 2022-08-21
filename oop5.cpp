#include<bits/stdc++.h>
using namespace std;
class oop5{
    public:
        int a;
        int b;
        oop5(){
            a=6;
            b=9;
        }
};
        void fuck(){
            oop5 ob2;//calling oop5()
            ob2.a=34;
            ob2.b=23;
            cout<<"a:"<<ob2.a<<"\n";
            cout<<"b:"<<ob2.b;
        }
        int main(){
            oop5 ob;//calling oop5()
            cout<<"a:"<<ob.a<<"\n";
            cout<<"b:"<<ob.b<<"\n";
            fuck();
        }

