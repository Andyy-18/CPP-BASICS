#include<bits/stdc++.h>
using namespace std;

long long int sqrtintBS(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square > n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
         mid = s + (e - s)/2;
    }
    return ans;
}

double moreprecision(int n, int range,int tempsol){

    double factor = 1;
    double ans = tempsol;

    for(int i=0;i<range;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j=factor+j){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n; 
    cout<<"Enter a number : "<<endl;
    cin>>n;

    int tempsol = sqrtintBS(n);

    cout<<"Square-root of your number is : "<<moreprecision(n,4,tempsol)<<endl;

return 0;

}