/*C++ Destructor
A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.

A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).

Note: C++ destructor cannot have parameters. Moreover, modifiers can't be applied on destructors.*/

#include <iostream>  
using namespace std;  
class oop6  
 {  
   public:  
        oop6()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~oop6()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main(void)   
{  
    oop6 e1; //creating an object of Employee   
    oop6 e2; //creating an object of Employee  
    return 0;  
}