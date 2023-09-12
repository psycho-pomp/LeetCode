class Solution {
public:
    int minDeletions(string s) {
        vector<int>count(26,0);
        int res=0;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']+=1;    
        }
        sort(count.begin(),count.end(),greater<int>());
        for(int i=1;i<26;i++){
            if(count[i]==0) {
                break;
            }
            if(count[i]>=count[i-1]) {
                res+=count[i-1]==0?count[i]-count[i-1]:(count[i]-count[i-1]+1);
                count[i]=count[i-1]==0?0:count[i-1]-1;
            }
        }
        return res;
    }
};