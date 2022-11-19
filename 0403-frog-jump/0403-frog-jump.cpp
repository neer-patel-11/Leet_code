class Solution {
public:
    
    int n ;
    vector<vector<int>>dp;
    
    bool fun(int k,int i,int j,vector<int>& stones)
    {
        
        // cout<<stones[i]<<" "<<stones[j]<<" "<<k<<endl;
        
        if(i >=n-1)    
            return true;
        
        if(j>=n)
            return false;
        //k ,k-1, k+1
        
        if(dp[i][k]!=-1)
            return dp[i][k];
        
        
        bool ans=false;
        
        if(i==j)
        {
            return fun(k,i,j+1,stones);
            
        }
        
        
        
        if(stones[j] - stones[i] > k+1)
        {
            
            return false;
            
        }
        
        else if(stones[j] - stones[i] == k)
        {
            
            ans=ans || fun(k,j,j+1,stones);
        }
        
         else if(stones[j] - stones[i] == k+1)
        {
            
            ans= ans || fun(k+1,j,j+1,stones);
        }
        
         else if(stones[j] - stones[i] == k-1)
        {
            
            ans = ans || fun(k-1,j,j+1,stones);
        }
        
         
         ans = ans || fun(k,i,j+1,stones);   
        
         dp[i][k]=ans;
        
        return ans;
    }
    
    bool canCross(vector<int>& stones) {
        
        n=stones.size();
        
        if(stones[1] - stones[0] >=2)
            return false;
        
        
        dp.resize(n,vector<int>(1000,-1));
        return fun(1,1,2,stones);
        
    }
};