class Solution {
public:
    
    int m;
    vector<vector<int>> dp;
    
    int fun(int i,int n,int j ,vector<int>& nums,vector<int> &multi)
    {
        if(j==m)
            return 0;
        
        if(dp[i][j]!=INT_MIN)
            return dp[i][j];
        
        int left=fun(i+1,n,j+1,nums,multi)+nums[i]*multi[j];
        
        int right=fun(i,n,j+1,nums,multi) + nums[(n-1)-(j-i)]*multi[j];
        
        dp[i][j]=max(left,right);
        
        return dp[i][j];
        
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        m=multipliers.size();
        int n=nums.size();
        
        dp.resize(m+1,vector<int> (m+1,INT_MIN));
        
        return fun(0,n,0,nums,multipliers);
        
    }
};