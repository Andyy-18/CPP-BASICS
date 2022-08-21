#include<bits/stdc++.h>
using namespace std;
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

     for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int l = j+1; l<n; l++){
                cout<<i <<j <<l;
            }
        }
     }

return 0;
}