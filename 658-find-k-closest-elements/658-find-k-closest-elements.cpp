class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int>ans;
        
        
        int start=0;
        int n=arr.size();
        if(n==1 && k==1)
        { 
            ans.push_back(arr[0]);
            return ans;
        }
        
        
        int end=n-1;
        int pos,mid;
        while(start < end)
        {
            cout<<end<<" "<<start<<endl;  
            mid=(end + start)/2;
            
            if(arr[mid]==x)
            {
                break;
                
            }
            
            else if(arr[mid] > x)
            {
                end=mid-1;
            }
            
            else if(arr[mid] < x)
            {
                start=mid+1;
            }
            
            
        }
        cout<<end<<" "<<start<<endl;  
        
        cout<<mid;
        
        pos=mid;
        if(end==start)
            pos=end;
        
        int diff2=INT_MAX,diff3=INT_MAX;
        int diff1=abs(arr[pos]-x);
        if(pos!=0)
        diff2=abs(arr[pos-1]-x);
        
        if(pos!=n-1)
            diff3=abs(arr[pos+1]-x);
            
        if(diff2<=diff1 && diff2<=diff3)
        {
            pos=pos-1;
        }
        
        else if(diff3 < diff1 && diff3 <diff2)
        {
            pos=pos+1;
        }
        ans.push_back(arr[pos]);
        
        
        int count=k-1;
        int left=pos-1;
        int right=pos+1;
        while(count > 0)
        {
             //cout<<left<<" "<<right<<endl;
            if(left <0)
            {
                ans.push_back(arr[right]);
                right++;
                
            }
            
            else if(right >=n)
            {
                ans.push_back(arr[left]);
                left--;
                
            }
            
            else if(abs(arr[left]-x) > abs(arr[right]-x))
            {
                ans.push_back(arr[right]);
                right++;
            }
            
            else
            {
                ans.push_back(arr[left]);
                left--;
            }
            
            count--;
            
            
        }

    
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
        
            
            
    }
};