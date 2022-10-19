class Solution {
public:
    int myAtoi(string s) {
        const int n = s.size();
        if(n == 0) return 0;
        
        bool foundNumber = false;
        bool foundSign = false;
        long long ans = 0;
        int sign = 0;
        
        
        for(const char&c:s)
        {
            if(c ==' ' and !foundNumber and !foundSign) continue;
            else if((c =='+' or c=='-') and !foundNumber and !foundSign){
                sign = (c=='-') , foundSign = true;
                continue;
            }
            else if(!(c>='0' and c<='9')) break;
            
           
            (ans*=10)+=(c-'0');
           
            if(sign and ans>=(1LL<<31))
            {
                ans = -(1LL<<31);
                break;
            }
            else if(!sign and ans >=((1LL<<31) -1)){
                ans = (1LL<<31)-1;
                break;
            }
                foundNumber = true;
        }
        
        if(sign) ans*=-1;
        
        return (int)ans;
    }
};