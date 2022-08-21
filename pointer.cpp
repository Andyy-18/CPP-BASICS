#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1;
    cout << num << endl;
    // address of operator = &
    cout << "The address of num is : " << &num << endl;
    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    double d = 4.3;
    double *p3 = &d;

    cout << "Address is : " << p3 << endl;
    cout << "Value is : " << *p3 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    cout << "Size of pointer is: " << sizeof(p3) << endl;

    int a = num;
    cout << "a before: " << num << endl;
    a++;
    cout << "a after: " << num << endl;

    int *p = &num;
    cout << "before: " << num << endl;
    (*p)++;
    cout << "after: " << num << endl;

    // initialising a pointer
    int i = 5;

    // int *u=&i;
    // or
    int *u = 0;
    u = &i;

    cout << u << endl;
    cout << *u << endl;

    // copying a pointer
    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    // imp concept

    int y = 3;
    int *t = &y;
    // cout<<(*t)++<<endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t :" << t << endl;
    t = t + 1;
    cout << "after t :" << t << endl;
    
    return 0;
    
}