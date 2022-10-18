/*
There are n trees in a forest. The heights of the trees is stored in array tree[], where tree[i] denotes the height of the ith tree in the forest. 
If the ith tree is cut at a height H, then the wood collected is tree[i] - H, provided tree[i] > H.
If the total woods that needs to be collected is exactly equal to k, find the height H at which every tree should be cut (all trees have to be cut at the same height).
If it is not possible then return -1 else return H.


Example 1:

Input:
n = 5, k = 4
tree[] = {2, 3, 6, 2, 4}
Output: 3
Explanation: Wood collected by cutting trees
at height 3 = 0 + 0 + (6-3) + 0 + (4-3) = 4
hence 3 is to be subtracted from all numbers.
Since 2 is lesser than 3, nothing gets
subtracted from it.

Example 2:

Input:
n = 6, k = 8
tree[] = {1, 7, 6, 3, 4, 7}
Output: 4
Explanation: Wood collected by cutting trees
at height 4 = 0+(7-4)+(6-4)+0+0+(7-4) = 8

Your Task:
Your task is to complete the function find_height(). This function takes the array tree[ ], and the integers n and k as input parameters and returns the height at which trees have to be cut. If no positive integer value of height is possible, return -1.


Expected Time Complexity: O(n log h)
Expected Auxiliary Space: O(1)


Constraints: 
1 <= n <= 104
1 <= tree[i] <= 103
1 <= k <= 107

*/

// C++ implementation of the approach
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to return the amount of wood
// collected if the cut is made at height m
int woodCollected(int height[], int n, int m)
{
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (height[i] - m <= 0)
            break;
        sum += (height[i] - m);
    }

    return sum;
}

// Function that returns Height at
// which cut should be made
int collectKWood(int height[], int n, int k)
{
    // Sort the heights of the trees
    sort(height, height + n);

    // The minimum and the maximum
    // cut that can be made
    int low = 0, high = height[n - 1];

    // Binary search to find the answer
    while (low <= high) {
        int mid = low + ((high - low) / 2);

        // The amount of wood collected
        // when cut is made at the mid
        int collected = woodCollected(height, n, mid);

        // If the current collected wood is
        // equal to the required amount
        if (collected == k)
            return mid;

        // If it is more than the required amount
        // then the cut needs to be made at a
        // height higher than the current height
        if (collected > k)
            low = mid + 1;

        // Else made the cut at a lower height
        else
            high = mid - 1;
    }

    return -1;
}

// Driver code
int main()
{

    int height[] = { 1, 2, 1, 2 };
    int n = sizeof(height) / sizeof(height[0]);
    int k = 2;

    cout << collectKWood(height, n, k);

    return 0;
}
