#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int arr[10]={23,122,41,67};
    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<"Address of first memory block is : "<<&arr[0]<<endl;

    cout<<"First: "<<*arr<<endl;  // 0th location
    cout<<"Second: "<<*arr+1<<endl; // value of oth location +1
    cout<<"Third: "<<*(arr+1)<<endl; // value of 1st location
    cout<<"Fourth: "<<*(arr+2)<<endl; // value of 2nd location

    // arr[i]=*(arr+i) || i[arr]=*(i+arr)
    int i=2;
    cout<<i[arr]<<endl;
    
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<"1st: "<<sizeof(*temp)<<endl;
    cout<<"2nd: "<<sizeof(&temp)<<endl; // should be 8 bytes

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;// should be 8 bytes
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;// should be 8 bytes
    
    int a[20]={1,2,3,5};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    */

   int arr[10];
    // arr=arr+1;  error           
   int *ptr=&arr[0];
   cout<<ptr<<endl;
   ptr=ptr+1;
   cout<<ptr<<endl;

return 0;
}