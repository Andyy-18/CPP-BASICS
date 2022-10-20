class Solution {
public:
    string longestPalindrome(string s) {
           int n = s.size();
        bool dp[n][n];
        
        pair<int,int> ind{-1000,-1000};
        
        for(int i = n-1;i>=0;i--)
            for(int j = i;j<n;j++)
            {
                dp[i][j] = (s[i] == s[j] and (j-i<=2 or dp[i+1][j-1]));
                
                if(dp[i][j] and ind.second<j-i+1) ind = {i , j-i+1};
            
            }
        
    
        
        return s.substr(ind.first , ind.second);
    }
};