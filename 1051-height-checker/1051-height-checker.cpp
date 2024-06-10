class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
           vector<int> sort_arr(n);
        copy(cbegin(heights), cend(heights), begin(sort_arr));
sort(begin(sort_arr), end(sort_arr));
        int count=0;
        for(int i=0;i<n;i++){
            if(sort_arr[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};