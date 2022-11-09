class Solution {
public:
    int getMaximumGenerated(int n) {
        
        int a=0;
        int b=1;
        if(n==0 || n==1)
            return n;
        
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        
        int ans=1;
        for(int i=2;i<n+1; i++)
        {
            if(i%2 ==0)
            {
                dp[i]=dp[i/2];
            }
            
            else
            {
                dp[i]=dp[i/2] + dp[i/2 + 1];
            }
            
            ans=max(ans,dp[i]);
        }
        return ans;
        
    }
};