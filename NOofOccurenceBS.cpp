#include<bits/stdc++.h>
using namespace std;
 
int firstocc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int m = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[m]==key){
            ans=m;
            e = m-1;
        }
        else if(arr[m]<key){
            s = m+1;    
        }
        else if(arr[m]>key){
            e = m-1;
        }

    m = s + (e-s)/2;

    }

    return ans;

}

int lastocc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int m = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[m]==key){
            ans=m;
           s = m+1;
        }
        else if(arr[m]<key){
            s = m+1;
        }
        else if(arr[m]>key){
            e = m-1;
        }

    m = s + (e-s)/2;

    }

    return ans;

}

int main()
{

    int odd[11] = {1,2,3,3,3,3,4,4,3,3,5};

    cout<<"First occurence of 3 is at index : "<<firstocc(odd,11,3)<<endl;
    cout<<"Last occurence of 3 is at index : "<<lastocc(odd,11,3)<<endl;

    int tnocc = (lastocc(odd,11,3)-firstocc(odd,11,3))+1;
    cout<<"Total no of occurence of 3 is : "<<tnocc<<endl;
    
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               