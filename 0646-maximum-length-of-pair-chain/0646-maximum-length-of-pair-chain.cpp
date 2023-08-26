class Solution {
public:
    
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end(),myComparison);
        for(int i=0;i<pairs.size();i++){
            cout<<pairs[i][0]<<" "<<pairs[i][1]<<',';
        }
        
        int count=1;
        int j=0;
        for(int i=1;i<pairs.size();i++){
            if(pairs[j][1]<pairs[i][0]){
                count++;
                j=i;
            }
            
        }
        return count;
        
    }
    static bool myComparison(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
};