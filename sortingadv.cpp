#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}