// Naive DP Approach (NLog(32))
class Solution {
public:
    vector<int> countBits(int num) {
        
        int * dp = new int[num+1];
        dp[0] = 0;
        
        
        vector <int> output {0};
        for (int i = 1; i < num+ 1; i ++)
        {
            int p = 1; 
            int ans = INT_MAX;
            while (p <= i)
            {
                ans = min (ans,dp[i - p]);
                p = p << 1; 
            }
            
            dp[i] = 1 +  ans;
            output.push_back(dp[i]);
        }
        
        return output;

    }
};

// Optimised DP approach
class Solution {
public:
    vector<int> countBits(int num) {
        
     int * dp = new int[num +1];
     dp[0] = 0;
     
        vector <int> output{0};
        for (int i= 1; i < num + 1; i ++)
        {
            if (i % 2 == 0)
                dp[i] = dp[i/2];
            else
                dp[i] = dp[i/2] + 1;
           
            output.push_back(dp[i]);     
        }    
        
            return output;
    }
};
