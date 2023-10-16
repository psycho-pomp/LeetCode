class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex==0) return {1};
        vector<int>res={1,1};
        for(int i=2;i<=rowIndex;i++){
            vector<int>temp;
            for(int k=0;k<=i;k++){
                if(k==0 || k==i){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(res[k-1]+res[k]);
                }
               
            }
            res=temp;
        }
        return res;
 
    }
};