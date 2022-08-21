#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining=search(arr+1,size-1,key);
        return remaining;
    }

}

int main()
{
    int size;
    cout<<"Enter the size of your array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter your numbers : "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;

    bool ans=search(arr,size,key);
    
    if(ans){
        cout<<"Key is present."<<endl;
    }
    else{
        cout<<"Key is absent."<<endl;
    }

return 0;
}