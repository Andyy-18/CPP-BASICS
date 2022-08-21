#include<bits/stdc++.h>
using namespace std;

void arrprint(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarysearch(int *arr,int s,int e,int key){
    cout<<endl;
    arrprint(arr,s,e);
    //base case

    //element not found
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    cout<<"Value of mid: "<<arr[mid]<<endl;

    //element found
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]>key){
        return binarysearch(arr,mid+1,e,key);
    }
    if(arr[mid]<key){
        return binarysearch(arr,s,mid-1,key);
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

    bool ans=binarysearch(arr,0,size-1,key);
    
    if(ans){
        cout<<"key is present."<<endl;
    }
    else{
        cout<<"key is absent."<<endl;
    }

return 0;
}