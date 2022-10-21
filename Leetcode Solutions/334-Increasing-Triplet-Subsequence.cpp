/*Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. 
If no such indices exists, return false
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX,second = INT_MAX;
      for(auto x: nums)
      {
          if(x<first)
          {
              first = x;
          }
          else if(first < x && x < second)
          {
              second = x;
          }
          else if(x > second)
          {
              return true;
          }
      }
        return false;
    }
};
