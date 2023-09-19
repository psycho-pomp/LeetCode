class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedArr = heights;
        sort(sortedArr.begin(), sortedArr.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sortedArr[i]){
                count++;
            }
        }
        return count;
        
    }
};