class Solution {
public:
     vector<vector<vector<int>>> dp;
    int k1;
    int n;
    int maxProfit(int k, vector<int>& prices) {
        n=prices.size();
        k1=2*k;
        dp.resize(n,vector<vector<int>>(2,vector<int> (2*k,-1)));
        return fun(0,true,prices,0);
    }
    
    
    int fun(int i,bool buy , vector<int> & prices ,int count)
    {
        if(i==n || count >=k1)
            return 0;
        
        if(dp[i][buy][count]!=-1)
            return dp[i][buy][count];
        
        int ans=0;
        if(buy)
        {
            int b= -prices[i] + fun(i+1 , false , prices , count+1);
            int nb=fun(i+1 , true , prices , count);
            ans=max(b,nb);
        }
        
        else{
            int s=prices[i] + fun(i+1,true,prices , count+1);
            int ns=fun(i+1,false,prices,count);
            ans=max(s,ns);
        }
        
        return dp[i][buy][count]=ans;
        
        
    }
    
};