class Solution {
public:
    bool canCross(vector<int>& stones) {
        
        map<int,set<int>>ms;
        ms[0].insert(1);
        for (int i = 1; i < stones.size(); i++) {
        	ms[stones[i]]={};
        }
        for(int i=0;i<stones.size()-1;i++){
            int stone=stones[i];
            for(int jump:ms[stone]){
                
                int reached=stone+jump;
                if(reached==stones[stones.size()-1]){
                    return true;
                }
                if(ms.find(reached)!=ms.end()){
                    ms[reached].insert(jump);
                    if(jump-1>0) ms[reached].insert(jump-1);
                    ms[reached].insert(jump+1);
                    
                }
                    
                
            }
           
        }
        for(auto m:ms){
            cout<<m.first<<" ";
            for(auto v:m.second){
                cout<<v<<" ";
            }
            cout<<endl;
        }
        return false;
        
        
        
        
        
    }
};