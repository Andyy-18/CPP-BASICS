#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}

int main()
{   
    int n;
    cout<<"Enter how many numbers you want to summation :: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter your numbers : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"The sum of your numbers is : ";
    sum(arr,n);
return 0;
}