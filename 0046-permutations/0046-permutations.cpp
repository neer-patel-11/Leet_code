class Solution {
public:

    vector<vector<int>> ans;
    
    int n;
    void fun(int pos,vector<int> &arr,vector<int> &hash,vector<int> &nums)
    {
        if(pos==n)
        {
            ans.push_back(arr);
            return ;
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(hash[i] !=1)
            {
                hash[i]=1;
                arr.push_back(nums[i]);
                fun(pos+1,arr,hash,nums);
                arr.pop_back();
                hash[i]=0;
            }
        }
        
            
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        n=nums.size();
        vector<int> hash(n,0);
        vector<int> arr;
        fun(0,arr,hash,nums);
        return ans;
            
        
    }
};