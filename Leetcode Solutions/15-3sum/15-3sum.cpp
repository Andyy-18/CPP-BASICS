class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
             
        int n = nums.size();
        vector<vector<int>> ans;
        if(n == 0) return ans;
       
        sort(nums.begin() , nums.end());
        
        for(int i = 0;i<n;i++){
           
            int j = i+1 , k = n-1;
            int cur = nums[i];
            
            while(j<k){
                int sum = cur + nums[j] + nums[k];
                if(sum>0) k--;
                else if (sum<0) j++;
                else{
                    ans.push_back({nums[i] , nums[j] , nums[k]});
                    while(j<k and nums[j] == ans.back()[1]) j++;
                    while(k>j and nums[k] == ans.back()[2]) k--;
                }
                
            }
            while(i<n-1 and nums[i] == nums[i+1]) i++;
            
        }
        
        return ans;
        
    }
};