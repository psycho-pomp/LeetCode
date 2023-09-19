class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>>set_nums;
        for(auto val:nums){
            set_nums.insert(val);
        }
        if(set_nums.size()<3){
            return *set_nums.begin();
        }
        return *next(set_nums.begin(), 2);;
        
    }
};