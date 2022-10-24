https : // leetcode.com/problems/container-with-most-water/

        // BF time: O(n^2) space: O(1)
        // TimeOut
        public static int
        maxArea_bf(int[] height)
{
    int len = height.length;
    int max = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int area = Math.min(height[i], height[j]) * (j - i);
            max = Math.max(max, area);
        }
    }

    return max;
}