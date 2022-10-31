class Solution {
public:
    int mySqrt(int x) {
        
        long long int up=1,down=0;
        
        long long int a=1;
        
        if(x==0 || x==1)
            return x;
        
        while(1)
        {
            
            if(x== down*down)
                return down;
            
            if(x== up*up)
                return up;
            
            if(x >= down*down && x<= up*up)
            {
                break;
            }
            
            up++;
            down++;
            
        }
        
        
        
        return down;
        
    }
};