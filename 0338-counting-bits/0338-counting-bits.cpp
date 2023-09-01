class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vp;
        //vp.push_back(0);
        for(int i=0;i<=n;i++){

            vp.push_back(__builtin_popcount(i));

        }
        return vp;
        
    }
};