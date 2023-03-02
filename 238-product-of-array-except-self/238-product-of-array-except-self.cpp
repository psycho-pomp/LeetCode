class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> output(n,1);
    
    //update the output array and return
    //complete the code
    //vector<int> left(n,1);
    int left=1;
    for(int i=1;i<n;i++){
        left*=arr[i-1];
        output[i]=left;
    }
    int right=1;
    for(int i=n-2;i>=0;i--){
        right*=arr[i+1];
        output[i]*=right;
    }
        
    
    
    
    return output;
        
    }
};