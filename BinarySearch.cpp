#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        // mid = (start+end)/2;
        mid = start + (end - start)/2;

    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index1 = binsearch(even,6,12);
    int index2 = binsearch(odd,5,16);

    cout<<"Index of 12 is : "<<index1<<endl;
    cout<<"Index of 16 is : "<<index2<<endl;

    return 0;
}