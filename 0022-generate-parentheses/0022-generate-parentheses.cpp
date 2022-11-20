class Solution {
public:
    
    vector<string> ans;
    
    void fun(string& s,int n1,int n2)
    {
        if(n1<0 || n2<0)
            return ;
        
        // cout<<n1<<" "<<n2<<endl;
        if(n1==0 && n2==0)
        {
            
            ans.push_back(s);
            return ;
        }
        
        else if(n1==0)
        {
            s.push_back(')');
            fun(s,n1,n2-1);
            s.pop_back();
        }
        
        else if(n2==0)
        {
            s.push_back('(');
            fun(s,n1-1,n2);
            s.pop_back();
            
        }
        
        else if(n1==n2)
        {
            s.push_back('(');
            fun(s,n1-1,n2);
            s.pop_back();
        }
        
        else
        {
            
            s.push_back('(');
            fun(s,n1-1,n2);
            s.pop_back();
                        
            
            s.push_back(')');
            fun(s,n1,n2-1);
            s.pop_back();
        
        }
        
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        string s;
        fun(s,n,n);
        return ans;
    }
};