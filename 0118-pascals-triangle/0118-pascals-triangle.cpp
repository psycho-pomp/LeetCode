class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<i+1;){
                if(j==0 || j==i){
                    temp.push_back(1);
                    j++;
                }
                else{
                    for(int k=0;k<res[i-1].size()-1;k++){
                        //cout<<res[i-1][k]<<endl;
                        temp.push_back(res[i-1][k]+res[i-1][k+1]);
                        j++;
                    }  
                }  
            }
            res.push_back(temp);
        }
        return res;
        
    }
};