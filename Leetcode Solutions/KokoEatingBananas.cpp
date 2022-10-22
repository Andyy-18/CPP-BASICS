// https://leetcode.com/problems/koko-eating-bananas/description/

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low, high, mid, k;
        high = *max_element(piles.begin(), piles.end());
        low = 1;
        while (low <= high)
        {
            int ho = 0;
            mid = (low + high) / 2;
            // cout<<low<<" "<<mid<<" "<<high<<endl;
            for (auto it : piles)
            {
                if (it % mid == 0)
                    ho = ho + (it / mid);
                else
                    ho = ho + (it / mid) + 1;
            }
            // cout<<ho<<endl;
            if (ho < h)
            {
                k = mid;
                high = mid - 1;
            }
            else if (ho > h)
                low = mid + 1;
            else if (ho == h)
            {
                k = mid;
                break;
            }
        }
        return k;
    }
};