class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> arr;
            
        for(int i=0;i<nums1.size();i++)
            arr.push_back(nums1[i]);
        
        for(int i=0;i<nums2.size();i++)
            arr.push_back(nums2[i]);
        
        int n=nums1.size() + nums2.size();
        
        sort(arr.begin(),arr.end());
        
        if(n%2 != 0)
            return double(arr[n/2]);
        
        else
        {
            return (double(arr[n/2]) + double(arr[n/2 -1]))/2;
        }
        
        
    }
};