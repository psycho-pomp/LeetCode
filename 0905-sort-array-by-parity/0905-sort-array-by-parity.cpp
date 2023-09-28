class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            if(arr[start]%2==0){
                start++;
            }
            else if(arr[end]%2!=0){
                end--;
            }
            else{
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
        return arr;
        
    }
};