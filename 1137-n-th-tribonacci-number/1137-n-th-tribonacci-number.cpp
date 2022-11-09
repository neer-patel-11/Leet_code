class Solution {
public:
    int tribonacci(int n) {
        long long int ans=0;
        int a=0,b=1,c=1;
        
        if(n==0 || n==1)
            return n;
        
        if(n==2)
            return 1;
        
        for(int i=3;i<=n;i++)
        {
            ans=a+b+c;
            a=b;
            b=c;
            c=ans;
            
        }
        
        return ans;
        
    }
};