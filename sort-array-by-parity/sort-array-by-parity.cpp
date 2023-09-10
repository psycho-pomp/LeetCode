class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            if(arr[start]%2!=0 && arr[end]%2==0){
                // int temp=arr[start];
                // arr[start]=arr[end];
                // arr[end]=temp;
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            if(arr[start]%2==0){
                start++;
            }
            if(arr[end]%2!=0){
                end--;
            }
        }
        return arr;
    }
};