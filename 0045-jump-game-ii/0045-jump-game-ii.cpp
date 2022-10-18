class Solution {
public:
    int jump(vector<int>& nums) {
     
        
        int n=nums.size();
        vector<int> arr(n,INT_MAX);
        arr[0]=0;
        
        int step;
        
        for(int i=0;i<n;i++)
        {
            step=nums[i];
            
            for(int j=1;j<=step;j++)
            {
                if(i+j >= n)
                    break;
                
                arr[i+j]=min(arr[i+j],arr[i]+1);
            }
        }
        
        return arr[n-1];
        
    }
};