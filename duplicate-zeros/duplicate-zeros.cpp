class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(),i=0;
        while(i<n){
            if(arr[i]==0){
                int j=n-1;
                while(j>i+1){
                    arr[j]=arr[j-1];
                    j--;  
                }
                if(i+1<n) arr[i+1]=0;
                i++;
            }
            i++;
        }
        
    }
};