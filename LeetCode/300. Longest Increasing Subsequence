// Iterative DP
// Will upload the solution for nlong Time complexity

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if (nums.size() == 0)
            return 0;
        
        int n = nums.size();
        int * dp = new int[n];

        int ans = 0;
        for (int i = 0; i < n ; i ++)
        {
            int localmax = 0;
            for (int j = 0 ; j < i ;j++)
            {
                if (nums[i] > nums[j])
                    localmax = max(localmax,dp[j]);
            }
            
            dp[i] = localmax + 1;
            ans = max(ans,dp[i]);
        }
        
        return ans;
        
    }
};
