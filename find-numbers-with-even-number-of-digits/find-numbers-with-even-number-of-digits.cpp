class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int value:nums){
            int count=0;
            while(value!=0){
                count++;
                value/=10;
            }
            cout<<count<<endl;
            if(count%2==0){
                res++;
            }
        }
        return res;
        
    }
};