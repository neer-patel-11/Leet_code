class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] < 65 || s[i] >90)
            {
                if(s[i] < 97 || s[i] > 122)
                {
                    if(s[i] < 48 || s[i] > 57)
                        continue;
                }
            }
            cout<<s[i]<<endl;
            new_s.push_back(tolower(s[i]));
        }
        
        string n;
        n=new_s;
        reverse(n.begin(),n.end());
        
        //cout<<new_s<<endl;
        if(n==new_s)
            return true;
        
        return false;
    }
};