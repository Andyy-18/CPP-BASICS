#include<bits/stdc++.h>
using namespace std;

/*C++ Class Example: Initialize and Display data through method
Let's see another example of C++ class where we are 
initializing and displaying object through method.*/

class oop2{
    public:
        int size;
        string name;

        void data(int s,string n){
            size=s;//no objects are required as the method and data types are within the same class
            name=n;
        }
        void display(){
            cout<<"size is "<<size<<endl;
            cout<<"Name is "<<name<<endl;
        }
};
int main()
{
    oop2 dick;
    oop2 boob;

    dick.data(8,"Jonny");
    boob.data(36,"Danny");

    dick.display();
    boob.display();

return 0;
}