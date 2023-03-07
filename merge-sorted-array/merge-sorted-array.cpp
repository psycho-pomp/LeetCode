class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1;
        int i=m-1;
        int j=n-1;
        if(m==0){
            while(k>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(k>=0 && i>=0 && j>=0){
            if(nums2[j]<nums1[i]){
                nums1[k]=nums1[i];
                k--;
                i--;
                
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            
        }
        //cout<<i<<" "<<k<<endl;
        while(j>=0){
            nums1[k]=nums2[j];
            j--;
            k--;    
        }
        while(i>=0){
            nums1[k]=nums1[i];
            i--;
            k--;    
        }
        
    }
};