// LeetCode 279

// Memoization 
class Solution {
public:
    
    int helper (int n, int * dp)
    {
        // base case
        if (n == 0)
            return 0;
        
       // memoization
        if (dp[n] != -1)
            return dp[n];
        
       int ans = INT_MAX;
       for (int i = 1 ; i <= sqrt(n)  ; i ++)
       {
           if (i * i <= n)
           ans = min (ans,1 + helper (n - (i*i),dp));
       }
        
        
        return dp[n] = ans;
    }    
        
    int numSquares(int n) {
        
        
        int * dp = new int[n+1];
        for (int i = 0 ; i < n + 1; i ++)
            dp[i] = -1;
        
        return helper (n,dp);
        
        
    }
};


// Iterative DP

class Solution {
public:
    int numSquares(int n) {
        
        if (n <= 1)
            return n;
        
        int * dp = new int[n +1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2 ; i < n + 1; i ++)
        {
            dp[i] = INT_MAX;
            for (int j = 1 ; j <= sqrt(i) ; j ++)
                dp[i] = min (dp[i], 1 + dp[i - (j*j)]);
                   
        }
        
        return dp[n];
        
        
        
    }
};





