class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> hash(3,0);
        
        
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        
        int i=0;
        for(int j=0;j<hash[0];j++)
        {
            nums[i]=0;
            i++;
        }
        
        for(int j=0;j<hash[1];j++)
        {
            nums[i]=1;
            i++;
        }
        
        for(int j=0;j<hash[2];j++)
        {
            nums[i]=2;
            i++;
        }
        
            
        
    }
};