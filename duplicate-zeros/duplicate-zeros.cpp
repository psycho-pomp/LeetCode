class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int zeros=count(arr.begin(),arr.end(),0);
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                zeros--;
            }
            if(i+zeros<n){
                arr[i+zeros]=arr[i];
            }
            if(arr[i]==0 && i+zeros+1<n){
                arr[i+zeros+1]=0;
            }
            
            
        }
    }
};