#include<bits/stdc++.h>
using namespace std;

void sortarray(int *arr,int n){
    // base case
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // RC
    sortarray(arr,n-1);
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

    sortarray(arr,n);
//    cout<<"Reverse is: "<<ans<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

return 0;
}
