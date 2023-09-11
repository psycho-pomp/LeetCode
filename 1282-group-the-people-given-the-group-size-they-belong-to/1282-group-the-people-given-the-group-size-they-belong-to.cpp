class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mp;
        vector<vector<int>>res;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto m:mp){
            //cout<<m.first<<" ";
            vector<int> temp;
            int size=0;
            for(int i=0;i<m.second.size();i++){
                temp.push_back(m.second[i]);
                size++;
                if(size==m.first){
                    res.push_back(temp);
                    temp.clear();
                    size=0;
                }
            }
            //cout<<endl;
        }
        return res;
        
    }
};