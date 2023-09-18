class Solution {
    
public:
    static bool cmp(pair<int,int>p1,pair<int,int>p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first<p2.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>res;
        for(int i=0;i<mat.size();i++){
            res.push_back({accumulate(mat[i].begin(),mat[i].end(),0),i});
        }
        sort(res.begin(),res.end(),cmp);
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(res[i].second);
        }
        
        return result;
        
    }
};