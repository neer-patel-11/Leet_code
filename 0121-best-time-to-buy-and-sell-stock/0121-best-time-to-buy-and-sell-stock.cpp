class Solution {
public:
    int maxProfit(vector<int>& pri) {
        
        int n=pri.size();
        vector<int> dp(n,0);
        
        int cur_min=pri[0];
        
        for(int i=1;i<n;i++)
        {
            if(pri[i] < cur_min)
            {
                cur_min=pri[i];
            }
            
            else
            {
                dp[i]=pri[i]-cur_min;
            }
        }
        
        int ans=-1;
        
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        
        return ans;
        
    }
};