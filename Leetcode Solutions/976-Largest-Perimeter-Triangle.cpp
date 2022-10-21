/*Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. 
If it is impossible to form any triangle of a non-zero area, return 0.
*/

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        int n=A.size();
        sort(A.begin(),A.end());
        for(int i=A.size()-1;i>=2;i--)
        {
            if(A[i] < A[i-1] + A[i-2])
                return A[i] + A[i-1] + A[i-2];
        }
        
        return 0;
    
    }
};
