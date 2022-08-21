#include<bits/stdc++.h>
using namespace std;

bool issorted(int *arr,int size){
    //base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart=issorted(arr+1,size-1);
        return remainingpart;
    }
}

int main()
{
    int size;
    cout<<"Enter the size of your array : "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter your numbers : "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    bool ans=issorted(arr,size);

    if(ans){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }

return 0;
}