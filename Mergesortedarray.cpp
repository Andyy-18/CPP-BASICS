#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int t=n+m;
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            // k++;
            // i++;
        }
        else{
            arr3[k++]=arr2[j++];
            // k++;
            // j++;
        }
    }

//  agar ek array avi vi bacha ho to uska value arr3 mai copy kar do

    while(i<n){
        arr3[k++]=arr1[i++];
        // k++;
        // i++;
    }

    while(j<m){
        arr3[k++]=arr2[j++];
        // k++;
        // j++;
    }
    sort(arr3,arr3+t);
}

void print(int ans[],int t){

    cout<<"The sorted merged array : "<<endl;

    for(int i=0;i<t;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,m;
    cout<<"Enter the size of arr1 and arr2 : "<<endl;
    cin>>n>>m;

    int t=n+m;
    int arr1[n],arr2[m];
    cout<<"Enter  arr1 and arr2 : \n";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }

    // int m;
    // cout<<"Enter the size of arr2 : "<<endl;
    // cin>>m;

    // int arr2[100];
    // cout<<"Enter  arr2 : \n";
    // for(int i=0; i<m; i++){
    //     cin>>arr2[i];
    // }

    // int arr1[5]={1,3,5,7,9};
    // int arr2[3]={2,4,6};

    int arr3[t]={0};

    merge(arr1,n,arr2,m,arr3);

    print(arr3,t);

return 0;
}