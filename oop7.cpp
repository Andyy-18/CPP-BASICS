/*
    C++ this Pointer
In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.

It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers.
*/
#include <iostream>  
using namespace std;  
class oop7 {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       oop7(int id, string name, float salary)    
        {    
             this->id = id;//here this keyword is used to refer to the instance variable 'id' and not the local one.
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    oop7 e1 =oop7(101, "Sonoo", 890000); //creating an object of Employee   
    oop7 e2=oop7(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}  