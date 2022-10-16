class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInter) {
        
        inter.push_back(newInter);
        
        sort(inter.begin(),inter.end());
        
        int n=inter.size();
    
        vector<vector<int>> ans;
        
        ans.push_back(inter[0]);
        int j=1;
        for(int i=1;i<n;i++)
        {
            if(ans[j-1][1] >= inter[i][0])
            {
                ans[j-1][1]=max(ans[j-1][1] , inter[i][1]);
                
            }
            
            else
            {
                ans.push_back(inter[i]);
                j++;
            }
            
        }
        
        return ans;
        
    }
};
