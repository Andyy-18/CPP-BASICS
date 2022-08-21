/*C++ Constructor
In C++, constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members of new object generally. The constructor in C++ has the same name as class or structure.
There can be two types of constructors in C++.

Default constructor =>C++ Default Constructor
A constructor which has no argument is known as default constructor. It is invoked at the time of creating object.

Parameterized constructor=> A constructor which has parameters is called parameterized constructor. It is used to provide different values to distinct objects.

What is the benefit of using constructor?
One of the benefits of using a constructor over a method is that you can be assured the constructor was called and the work within the constructor was performed. The language specifies that to construct an object a constructor must be called.
*/
#include<bits/stdc++.h>
using namespace std;
//default
class oop3{
    public:
        oop3(){
            cout<<"sexyyy"<<"\n";
        }
};
int main()
{
    oop3 debu;//=new oop3();
    oop3 arka;
return 0;
}

