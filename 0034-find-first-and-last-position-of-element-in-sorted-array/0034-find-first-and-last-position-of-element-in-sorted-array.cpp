class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        int first=-1,last=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==target){
                end=mid-1;
                first=mid;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==target){
                start=mid+1;
                last=mid;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return {first,last};
    }
};