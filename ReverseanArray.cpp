#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    cout<<"Reverse of the array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

    reverse(arr,n);
    printArray(arr,n);

    /*int arr[6] = {2,7,-2,5,9,-15};
    int brr[5] = {1,6,-3,4,8};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);*/

return 0;
}