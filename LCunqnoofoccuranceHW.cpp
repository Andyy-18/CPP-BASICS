#include<bits/stdc++.h>
using namespace std;

int unioccu(int arr[],int size){
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
    }
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
    
    

return 0;
}