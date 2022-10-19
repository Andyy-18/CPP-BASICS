class Solution {
public:
    // q/m
    int divide(int q1, int m1) {
        if(q1 == INT_MIN and m1 == -1) return INT_MAX;
        if(m1 == 1) return q1;
   
        
        int sign = 0;
        if((q1>0)^(m1>0)) sign = 1;
        
        long long q = labs(q1);
        long long m = abs(m1);
        
        int ans = 0;
        
        while(q>=m){
            long long cur = m;
            long long partial_ans = 1;
            
            while((cur << 1) <= q) cur<<=1 , partial_ans<<=1;
            
            q-=cur;
            ans+=partial_ans;
        }
        
        if(sign) ans = -ans;
        
        return ans;
        
    }
};