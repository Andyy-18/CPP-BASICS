#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4],int t,int row,int col){
    for(int row=0;row<3;row++){
         for(int col=0;col<4;col++){
            if(arr[row][col]==t){
                return 1;
            }
         }
     }
     return 0;
}

//To print row-wise sum
void printrowsum(int arr[][4],int row,int col){
    cout<<"Printing sum(row-wise): "<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
         for(int col=0;col<4;col++){
            sum += arr[row][col];
         }
         cout<<sum<<endl;
     }
    //  cout<<endl;
}

//To print col-wise sum
void printcolsum(int arr[][4],int row,int col){
    cout<<"Printing sum(col-wise): "<<endl;
    for(int col=0;col<4;col++){
        int sum=0;
         for(int row=0;row<3;row++){
            sum += arr[row][col];
         }
         cout<<sum<<endl;
     }
    //  cout<<endl;
}

int largestrowsum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int rowindex=-1;

    for(int row=0;row<3;row++){
        int sum=0;
         for(int col=0;col<4;col++){
            sum += arr[row][col];
         }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        } 
     }
     cout<<"The maximum sum is: "<<maxi<<endl;
     return rowindex;
}

int main()
{
    //creating 2D array
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the array elements: "<<endl;
    //taking input(row wise)
     for(int row=0;row<3;row++){
         for(int col=0;col<4;col++){
             cin>>arr[row][col];
         }
     }
    /*
    //taking input(col wise)
     for(int col=0;col<4;col++){
         for(int row=0;row<3;row++){
             cin>>arr[row][col];
         }
     }
    */
    //print
    cout<<"The array: "<<endl;
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }

     cout<<"Enter the element to search: "<<endl;
     int t;
     cin>>t;

     if(ispresent(arr,t,3,4)){
         cout<<"Element found."<<endl;
     }
     else{
         cout<<"Not found."<<endl;
     }

     printrowsum(arr,3,4);
     printcolsum(arr,3,4);
     int ans = largestrowsum(arr,3,4);
     cout<<"Max sum is at index: "<<ans<<endl;

return 0;
}
