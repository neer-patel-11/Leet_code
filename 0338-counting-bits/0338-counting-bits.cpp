class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> arr;
            
        for(int i=0;i<=n;i++)
        {
            int count=0;
            int num=i;
            
            while(num!=0)
            {
                if(num%2==1)
                    count++;
                
                num=num/2;
                
            }
            arr.push_back(count);
            
        }
        
        return arr;
        
    }
};