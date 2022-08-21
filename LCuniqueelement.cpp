#include<bits/stdc++.h>
using namespace std;

// void printArray(int arr[], int size){
//     cout<<"Alternate swap of the array : \n";
//     for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;

int printArray(int arr[], int size){

    int ans = 0;
    
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    
    return ans;
    // printArray(arr,size);
    }
}