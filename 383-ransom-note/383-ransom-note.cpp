class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ump;
        for(auto i:magazine){
            //cout<<i;
            ump[i]++;
        }
        for(auto i:ransomNote){
            if(ump[i]<=0) return false;
            ump[i]--;
        }
        return true;
    }
};