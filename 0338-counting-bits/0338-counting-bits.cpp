class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> arr;
            
        arr.push_back(0);
        int p=0;
        for(int i=1;i<=n;i++)
        {
            if(i==pow(2,p))
            {
                arr.push_back(1);
                p++;
            }
            
            else
            {
                int x = arr[pow(2,p-1)] + arr[i-pow(2,p-1)];
                arr.push_back(x);
            }
            
        }
        
        return arr;
        
    }
};