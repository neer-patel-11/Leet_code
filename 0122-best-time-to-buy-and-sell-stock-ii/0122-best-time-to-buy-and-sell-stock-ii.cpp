class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currmax=prices[0];
        int currmin=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>currmax)
            {
                currmax=prices[i];
            }
            else
            {
                ans+=currmax-currmin;
                currmax=prices[i];
                currmin=prices[i];
            }
        }
        ans=ans+currmax-currmin;
        return ans;
    }
};