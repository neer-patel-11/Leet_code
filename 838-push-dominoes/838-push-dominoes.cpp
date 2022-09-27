class Solution {
public:
    string pushDominoes(string dominoes) {
        
        vector<int> arr;
        int n=dominoes.size();
        if(n==1 || n==0)
            return dominoes;
        
        
        for(int i=0;i<n;i++)
        {
            
            if(dominoes[i]=='L')
            {
                
                arr.push_back(i);
            }
            
            if(dominoes[i]=='R')
            {
                arr.push_back(i*(-1));
            }
        }
       
        
        bool flag=false;
        string ans=dominoes;
       
        if(arr.size()==1)
        {
            if(dominoes[0]=='L')
            {
                for(int i=0;dominoes[i]!='L';i++)
                    ans[i]='L';
                return ans;
            }
            
            if(dominoes[0]=='R')
            {
                for(int i=0;i<n;i++)
                    ans[i]='R';
                return ans;
            }
        }
        
        for(int i=0; i< arr.size();i++)
        {
            if(i==0 && dominoes[i]=='R')
                flag=true;
            if(arr[i] < 0)
            {
                flag=true;
            }
            
            if(arr[i] > 0)
            {
                if(flag)
                {
                        
                    int left=arr[i-1];
                    int right=arr[i];
                    left*=-1;
                    
                    if((left-right)%2 ==0)
                    {
                        for(int i=left ; i< (left+right)/2 ;i++)
                        {
                                
                                ans[i]='R';

                        }
                        
                        for(int i=(left + right)/2 +1;i<=right;i++)
                            ans[i]='L';
                    }
                    
                    else
                    {
                        for(int i=left;i<=(left+right)/2;i++)
                        {
                            ans[i]='R';
                        }
                        for(int i=(left+right)/2 +1 ;i<=right;i++)
                            ans[i]='L';
                    }
                    
                }
                
                flag=false;
            }
        }
        
        
        
        if(arr.size() !=0)
        {
            if(arr[0] >0)
            {
                
                for(int i=0;i<=arr[0];i++)
                {
                    ans[i]='L';
                }
            }
            
            int x=arr[arr.size()-1];
               
            
            if(x <0 )
            {
                x*=-1;
                
                for(int i=x;i<n;i++)
                    ans[i]='R';

            }
        }
      

        for(int i=1;i<arr.size();i++)
        {
            if(i==1 && arr[i]<0 && dominoes[0]=='R')
            {
                for(int j=0;j<=(-1)*arr[i];j++)
                {
                    
                    ans[j]='R';
                }
            }
            else if(arr[i] < 0 && arr[i-1]<0)
            {
                
                for(int j=(-1)*arr[i-1];j<=(-1)*arr[i];j++)
                {
                    
                    ans[j]='R';
                }
            }
            
            else if(i==1 && arr[i]>0 && ans[0]=='L')
            {
                for(int j=0;j<=arr[i];j++)
                {
                    ans[j]='L';
                }
            }
            else if(arr[i] >0 && arr[i-1] >0)
            {
                for(int j=arr[i-1];j<=arr[i];j++)
                {
                    ans[j]='L';
                }
            }
            
        }
        
        return ans;
    }
};