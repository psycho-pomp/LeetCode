class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int max_value=-1;
        for(int i=n-1;i>=0;i--){
            int temp=max_value;
            
            max_value=max(arr[i],max_value);
            arr[i]=temp;
        }
        return arr;
        
    }
};