#include<bits/stdc++.h>
using namespace std;

int getsum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaining=getsum(arr+1,size-1);
    int sum=arr[0]+remaining;
    return sum;

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

    int ans=getsum(arr,size);
    cout<<"Sum is: "<<ans<<endl;

return 0;
}