class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0,j=0;
        for(int val:g){
            for(;j<s.size();j++){
                if(s[j]>=val){
                    ans+=1;
                    j+=1;
                    break;
                }
            }
        }
        return ans;
        
    }
};