class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return false;
        }
        stack<int>s;
        int third=INT_MIN;
        for(int i=n-1;i>=0;i--){
            int curr=nums[i];
            if(curr<third) return true;
            while(!s.empty() && s.top()<curr){
                third=s.top();
                s.pop();
            }
            s.push(curr);
            
        }
        return false;
        
    }
};