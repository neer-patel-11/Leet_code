class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int ans=0;
        int n=s.size();
        int i=n-1;
        
        if(n==1)
        {
            return 1;    
        }
        
        while(i!=0 && s[i] == ' ')
            i--;
        
        while(i >= 0 && s[i]!=' ')
        {
            ans++;
            i--;
        }
        
        return ans;
        
        
    }
};