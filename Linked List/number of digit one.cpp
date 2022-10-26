/*
 code by Rajkumar dake
Based on whether the position is tight bound or not we have choices for each position

Count the total number of digit '1' appending in all positive no's that are
less than or equal to given very big number "nums".
e.g if nums="15"

[1,10,11,12,13,14,15] => total number of ones = 1+1+2+1+1+1+1=8(ans)

so
let nums= "5 6 7 2"

Number = >   __ __ __ __

So to form all numbers from length 1 to length 4, To fill each position we have 
10 choices [0,1,2,3,4,5,6,7,8,9]

If we fill as => 0 0 0 2 [number 2 formed]

Similarly by filling all these positions we can form all the numbers till "nums" after considering the upper-bound of each position


we have choices for each position as

If first position Has [0-4], than each next position is not tight they can have [0-9]
   
   [0-4] [0-9] [0-9] [0-9]

If first positio Has '5', tight bound the next position

if second position has [0-5], than each next position is not tight they can have [0,9]
   
    5 [0-5]  [0-9] [0-9]
 
if second position has '6', tight bound the next position

If third position has [0-6], than each next position is not tight they can have [0,9]
   
   5 6  [0-6] [0-9]

If third position has '7', than tight bound the next position

  Last position should be [0-2]

  5 6 7 [0-2]


So till here we cover all the positive numbers till "5672"

So based on whether the position is tight bound or not we have choices for each position

  Think about dp
  ----------------

 int  n=nums.size();

  dp[i][tight][countOnes] = Count of all ones in position range [i....n-1] of all numbers 

  till "5672" based on current position i is tight bound or not, 

  And count of ones till now from positions [0...i-1] are "countOnes"

  Ans= dp[0][1][0]


  
*/

int dp[10][2][10];

class Solution {
public:
    int countDigitOne(int nums) {
        
        memset(dp,-1,sizeof(dp));

   int i=0,tight=1,countOnes=0;  

   // for i=0, tight=1 becouse we cannot put all digits to this position
        
        string str=to_string(nums);
        
   return find(i,tight,countOnes,str);

        
    }
    
int find(int i,int tight,int countOnes,string nums){
    
  if(i==nums.size())
  return countOnes;

  if(dp[i][tight][countOnes]!=-1)
  return dp[i][tight][countOnes];

  int ub;   // upperBound digit of position i

  if(tight==1)
  ub=nums[i]-'0';
  else
  ub=9;

  int ans=0;

  for(int d=0;d<=ub;d++){

   ans=ans+find(i+1,tight && (d==ub),countOnes + (d==1),nums);
      
  }

  return dp[i][tight][countOnes]=ans;
 }

};