class Solution {
    
public:  
    void generateCombinations(  string digits ,
                                vector<string>&ans,
                                vector<string> mpp,
                                string combination = "" ){
        
        if(digits.size() == 0){
            ans.push_back(combination);
            return;
        }
        
        int digit = digits.back() - '0';
        digits.pop_back();
        
        for(char c:mpp[digit])
            generateCombinations(digits ,ans ,mpp , combination+c);
        
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        if(digits.size() ==0 )return ans;
        
        vector<string> mpp(10,"");
        
        char c = 'a';
        for(int i = 2;i<=9;i++)
        {
            for(int j  =0;j<3;j++) mpp[i].push_back(c++);
            if(i == 7 || i == 9) mpp[i].push_back(c++);
        }
        
        reverse(digits.begin() , digits.end());
       
        generateCombinations(digits , ans , mpp);
        return ans;
    }
};