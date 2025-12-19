// Last updated: 12/19/2025, 3:25:11 PM
#include<bits/stdc++.h>
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Sort for target selection logic
    long long left = 0, total = 0;
    int result = 0;

    for (long long right = 0; right < nums.size(); right++) {
        total += nums[right];

        // While total operations needed > k
        while ((nums[right] * (right - left + 1)) - total > k) {
            total -= nums[left];
            left++;
        }

        result = max(result, (int)(right - left + 1));
    }

    return result;

    }
};