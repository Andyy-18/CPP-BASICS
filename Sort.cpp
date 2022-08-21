#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortone(int arr[],int n){

    int left = 0;
    int right = n-1;

    // int step = 0;

    while(left < right){

        // cout<<"step"<<step++<<endl;
        // printarray(arr,n);
        
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
           right--;
        }
        // agar yeha pohoch gye ho,matlab
        // arr[left] == 1 & arr[right] == 0

        if( left < right){
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
    // cout<<"returning the sorted array : "<<endl;
    // printarray(arr,8);
}

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter an array : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int arr[8] = {1,1,0,0,0,0,1,0};

    sortone(arr,n);
    // cout<<"printing after function call : "<<endl;
    printarray(arr,n);

return 0;
}