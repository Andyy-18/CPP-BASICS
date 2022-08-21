#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first= new int[len1];
    int *second= new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    //merge

    int i=0,j=0;
    k=s;

    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[k++]=first[i++];
            // k++;
            // i++;
        }
        else{
            arr[k++]=second[j++];
            // k++;
            // j++;
        }
    }
    
//  agar ek array avi vi bacha ho to uska value arr3 mai copy kar do

    while(i<len1){
        arr[k++]=first[i++];
        // k++;
        // i++;
    }

    while(j<len2){
        arr[k++]=second[j++];
        // k++;
        // j++;
    }

    delete [] first;
    delete [] second;
}
void mergesort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }

    int  mid=s+(e-s)/2;

    //sorting left part 
    mergesort(arr,s,mid);

    //sorting right part 
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
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

    mergesort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}