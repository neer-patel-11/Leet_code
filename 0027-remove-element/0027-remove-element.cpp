class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k=0;
        int index=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[index]=nums[i];
                index++;
                k++;
            }
            
        }
        
        return k;
        
    }
    
};