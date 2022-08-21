#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //now left and right part 
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[i]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition
    int p=partition(arr,s,e);
    //sorting left part
    quicksort(arr,s,p-1);
    //sorting right part
    quicksort(arr,p+1,e);
}

int main()
{
    int n;
    cout<<"Enter the size : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter your numbers : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }

return 0;
}