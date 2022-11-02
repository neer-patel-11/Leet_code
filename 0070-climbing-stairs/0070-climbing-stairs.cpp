class Solution {
public:
    
    vector<int> dp;
    
    int d_p(int n)
    {
        if(n==0)
            return 1;
        
        if(dp[n]!= -1)
            return dp[n];
        
        else
        {
            dp[n]= d_p(n-1) + d_p(n-2);
        }
        
        return dp[n];
        
    }
    
    int climbStairs(int n) {
        dp.resize(n+1, -1);
        
        dp[1]=1;
        
        d_p(n);
        return dp[n];
    }
};