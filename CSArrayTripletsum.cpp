#include<bits/stdc++.h>
using namespace std;

int main(){

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            for(int l = j+1; l<arr.size(); l++){
                if(arr[i] + arr[j] + arr[l] == K){
                    ans.push_back({arr[i],arr[j],arr[l]});
//                     i++;
//                     j++;
//                     l++;
                }
                else if(arr[i] + arr[j] + arr[l] < K){
                    i++;
                    j++;
                }
                else{
//                     j++;
//                     l++;
                    break;
                }
            }
        }
    }
    return ans;
  }
}