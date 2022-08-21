#include<iostream>
using namespace std;

class students{
    
    string name;
    int age;
    int height;

    public:
    int getage(){
        return this-> age;
    }
};

int main()
{
    students first;
    cout<<"All ok."<<'\n';
return 0;
}