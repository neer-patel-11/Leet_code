class Solution {
public:
    
    int n,m;
    
    bool fun(string s,string t,int i,int j)
    {
        
        if(i==n)
            return true;
        
        if(j==m)
            return false;
        
        if(s[i]==t[j])
        {
            return fun(s,t,i+1,j+1) ;
        }
        
        return fun(s,t,i,j+1);
        
    }
    
    bool isSubsequence(string s, string t) {
        n=s.size();
        m=t.size();
        
        return fun(s,t,0,0);
        
    }
};