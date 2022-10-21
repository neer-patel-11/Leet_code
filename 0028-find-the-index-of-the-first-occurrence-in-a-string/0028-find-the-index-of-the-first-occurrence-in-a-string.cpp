class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
        int n=haystack.size();
        int n1=needle.size();
        
        for(int i=0;i<= n-n1 ;i++)
        {
            string s=haystack.substr(i,n1);
            
            if(s==needle)
                return i;
            
        }
        
        return -1;
        
        
    }
};