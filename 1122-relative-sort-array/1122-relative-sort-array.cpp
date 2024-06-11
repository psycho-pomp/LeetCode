class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>ump;
        for(int val:arr1){
            ump[val]++;
        }
        vector<int> result;
        for(int val:arr2){
            for(int i=0;i<ump[val];i++){
                result.push_back(val);
                
            }
            ump[val]=0;
        }
        for(auto it=ump.begin();it!=ump.end();it++){
            if(it->second!=0){
                for(int i=0;i<it->second;i++){
                    result.push_back(it->first);
                }
            }
        }
        return result;
    }
};