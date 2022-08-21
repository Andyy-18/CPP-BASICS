#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;
//  it shows size of vector a is 5 and it is initialized with 2
    vector<int> a(5,2);
    cout<<"print a:"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity:"<<v.capacity()<<endl;

    cout<<"size:"<<v.size()<<endl;

//   1 2 3

    cout<<"Element at 2nd index :"<<v.at(1)<<endl;

    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<<"before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    
    cout<<"after pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;


return 0;

}