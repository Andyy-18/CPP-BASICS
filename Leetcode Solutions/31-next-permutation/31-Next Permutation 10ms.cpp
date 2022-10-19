class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        int n = nums.size();
        int beg = 0 , end = 0;
      
        for(beg = n-2;beg>=0;beg--) if(nums[beg]<nums[beg+1]) break;
        
        if(beg == -1){ 
            reverse(nums.begin() , nums.end());
            return;
        }
        
        for(end = n-1;end>beg;end--) if(nums[end]>nums[beg]) break;
        
        swap(nums[beg] , nums[end]);
        
        reverse(nums.begin() + beg+1 , nums.end());
        
    }
};
