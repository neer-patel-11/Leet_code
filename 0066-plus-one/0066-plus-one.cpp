class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> ans;
        int n=digits.size();
        
        int carry=0;
        
        
        
        for(int i=n-1;i>=0;i--)
        {
            
                
            int a=digits[i] + carry;
            
            if(i==n-1)            
                a++;
            
            ans.push_back(a%10);
            
            carry=a/10;
        }
        
        if(carry!=0)
            ans.push_back(carry);
        
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
        
    }
};