class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count[101]={0};
        for(int value:nums){
            count[value]++;
        }
        for(int i=1;i<101;i++){
            count[i]+=count[i-1];
        }
        vector<int> result;
        for(int value:nums){
            if(value == 0)
                result.push_back(0);
            else
            result.push_back(count[value-1]);
        }
        return result;
        
        
    }
};