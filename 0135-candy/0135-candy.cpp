class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        if(n==1) return 1;
        vector<int>res1(n,1);
        vector<int>res2(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                res1[i]=res1[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                res2[i]=res2[i+1]+1;
                
            }    
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=max(res1[i],res2[i]);
            //cout<<res1[i]<<" "<<res2[i]<<endl;
        }
        
        return res;
        
    }
};