class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(auto value:arr){
            if(s.count(value*2) || (value%2==0 && s.count(value/2))) return true;
            s.insert(value);
        }
        return false;
        
    }
};