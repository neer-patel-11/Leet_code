class Solution {
public:
    bool isHappy(int n) {
        
        int a=n;
        
        while(a/10 != 0)
        {
            int temp=0;
            
            while(a!=0)
            {
                temp+= (a%10)*(a%10);
                a=a/10;
            }
            
            a=temp;
        }
        
        if(a==1 || a==7 || a==0)
            return true;
        
        return false;
        
        
    }
};
