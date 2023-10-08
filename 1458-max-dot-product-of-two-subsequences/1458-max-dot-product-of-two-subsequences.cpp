class Solution {
public:
         vector<vector<int>>dp;
        int f(int i,int j,vector<int>&v1,vector<int>&v2){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take=v1[i]*v2[j]+f(i-1,j-1,v1,v2);
        int notTake1=f(i-1,j,v1,v2);
        int notTake2=f(i,j-1,v1,v2);
        return dp[i][j]=max({take,notTake1,notTake2});
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int mx1=*max_element(nums1.begin(), nums1.end());
        int mn1=*min_element(nums1.begin(), nums1.end());
        int mx2=*max_element(nums2.begin(), nums2.end());
        int mn2=*min_element(nums2.begin(), nums2.end());
        if(mx1<0 && mn2>0) return mx1*mn2;
        if(mx2<0 && mn1>0) return mx2*mn1;
        dp.resize(n+1,vector<int>(m+1,-1));
        return f(n-1,m-1,nums1,nums2);
    }
};