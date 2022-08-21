//parameterized
#include<bits/stdc++.h>
using namespace std;

class oop4{
    public:
        int age;
        string name;
        
        oop4(int a,string s){
            age=a;
            name=s;
            // cout<<"Name: "<<name<<" Age: "<<age<<"\n";
        }
        void display(){
            cout<<"Name: "<<name<<" Age: "<<age<<"\n";
        }
};

int main()
{
    oop4 arka=oop4(18,"Arka");
    oop4 debu=oop4(19,"Debu");

    arka.display();
    debu.display();

return 0;
}