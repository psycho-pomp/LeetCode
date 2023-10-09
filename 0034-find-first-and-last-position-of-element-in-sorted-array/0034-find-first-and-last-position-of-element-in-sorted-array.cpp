class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        int min_idx=INT_MAX;
        int max_idx=INT_MIN;
        while(start<=end){
            if(arr[start]==target){
                max_idx=max(max_idx,start);
                min_idx=min(min_idx,start);
            }
            if(arr[end]==target){
                max_idx=max(max_idx,end);
                min_idx=min(min_idx,end);
            }
            int mid=(start+end)/2;
            //cout<<mid<<endl;
            if(arr[mid]==target){
                max_idx=max(max_idx,mid);
                min_idx=min(min_idx,mid);
                start+=1;
                end-=1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(min_idx==INT_MAX && max_idx==INT_MIN) return {-1,-1};
        return {min_idx,max_idx};
    }
};