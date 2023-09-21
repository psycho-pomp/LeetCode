class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        double res=0;
        int k=(n1+n2)/2+1;
        int i=0,j=0,z=0;
        int curr,prev;
        while(i<n1 && j<n2 && z<k){
            prev=curr;
            if(nums1[i]<nums2[j]){
                curr=nums1[i];
                i++;
            }
            else{
                curr=nums2[j];
                j++;
            }
            z++;
        }
        if(z<k){
            while(i<n1 && z<k){
                prev=curr;
                curr=nums1[i];
                i++;
                z++;
            }
            while(j<n2 && z<k){
                prev=curr;
                curr=nums2[j];
                j++;
                z++;
            }
        }
        (n1+n2)%2==0? res=(curr+prev)/2.0 : res=curr;
        return res;
    }
};