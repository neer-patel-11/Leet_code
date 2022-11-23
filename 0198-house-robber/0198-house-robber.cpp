class Solution {
public:
    
    int n;
    vector<int> dp;
    
    int fun(vector<int>& nums,int i)
    {
        if(i>=n)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int ans;
        ans=max(nums[i]+fun(nums,i+2),fun(nums,i+1));
        dp[i]=ans;
        
        return ans;
    }
    
    int rob(vector<int>& nums) {
     
        n=nums.size();
        dp.resize(n,-1);
        
        return fun(nums,0);
    }
};