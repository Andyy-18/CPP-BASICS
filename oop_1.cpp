#include<bits/stdc++.h>
#include"OOP_CLASS.cpp"
using namespace std;

int main()
{

    //static key
    // cout<<villain::timetocomplete<<endl;

    // villain v1;
    // cout<<v1.timetocomplete<<endl;

    //static function call
    cout<<villain::random()<<endl;

    /*
    //static(here destructor automatically called)
    villain v1;

    //dynamic(here destructor manuelly called)
    villain *v2=new villain();
    //manuelly calling
    delete v2;


    /*
    villain v1;

    v1.sethealth(94);
    v1.setlevel('B');
    char name[100]="Aninda";
    v1.setname(name);

    // v1.print();

    // using default copy constructor(shallow copy)
    villain v2(v1);
    // v2.print();

    v1.name[0]='O';
    v1.print();

    v2.print();

    //assignment operator
    v1=v2;
    v1.print();
    v2.print();

    /*
    villain valla(95,'C');
    valla.print();
    //copy constructor
    villain shib(valla);
    shib.print();

    /*
    //statically 
    cout<<"Hi"<<endl;
    villain v1(15);

    cout<<"address of v1: "<<&v1<<endl;

    cout<<"Hello"<<endl<<endl;
    //dinamically
    villain*v2=new villain;

    /*
    //static allocation
    villain v1;
    v1.sethealth(82);
    v1.level='D';
    cout<<"level is: "<<v1.level<<endl;
    cout<<"health is: "<<v1.gethealth()<<endl;

    //dynamically allocation
    villain*v2 = new villain;
    v2->sethealth(75);
    v2->level='B';
    cout<<"level is: "<<(*v2).level<<endl;
    cout<<"health is: "<<(*v2).gethealth()<<endl;

    /*
    villain v1;
    cout<<"size of v1 is: "<<sizeof(v1)<<endl;

    // v1.health=89;
    cout<<"health of v1 is: "<<v1.gethealth()<<endl;
    v1.sethealth(82);
    v1.level='D';

    // IN CASE OF EMPTY CLASS ....IT AUTOMATICALLY TAKES 1 BYTE SPACE
    // cout<<"size : "<<sizeof(v1)<<endl;
    cout<<"health is : "<<v1.gethealth()<<endl;
    cout<<"level is : "<<v1.level<<endl;
    */

return 0;
}