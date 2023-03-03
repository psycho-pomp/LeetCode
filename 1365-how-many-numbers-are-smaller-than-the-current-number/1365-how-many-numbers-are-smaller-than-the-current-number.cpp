class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_v;
        vector<int>result;
        map<int,int>mp;
        for(auto value:nums){
            sorted_v.push_back(value);
        }
        
        sort(sorted_v.begin(),sorted_v.end());

		for(int i=nums.size()-1;i>=0;i--){
			mp[sorted_v[i]]=i;
		}
		

		for(auto data:nums){
			result.push_back(mp[data]);
		}
        return result;
        
    }
};