class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> sort_arr = heights;
        sort(sort_arr.begin(), sort_arr.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(sort_arr[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};