class Solution { // YAA 
public:
    int find(int node, int par[]) {
        if(node == par[node]) return node;
        return par[node] = find(par[node], par);
    }
    void join(int u, int v, int par[], int ran[]) {
        u = find(u, par);
        v = find(v, par);
        if(ran[u] > ran[v]) {
            par[v] = u;
        } else if(ran[v] > ran[u]) {
            par[u] = v;
        } else {
            par[v] = u;
            ran[u]++;
        }
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        vector<int>node(n,0);
        for(int i=0;i<n;i++){
            
            if(leftChild[i]!=-1){
                node[leftChild[i]]++;
                if(node[leftChild[i]]>1) return false; 
            }       
            
            if(rightChild[i]!=-1){
                node[rightChild[i]]++;
                if(node[rightChild[i]]>1) return false; 
            }    
        }
        int par[n], ran[n];
        for(int i=0; i<n; i++) {
            par[i] = i;
            ran[i] = 0;
        }
        for(int i=0; i<n; i++) {
            if(leftChild[i] != -1) {
                if(find(i, par) != find(leftChild[i], par)) {
                    join(i, leftChild[i], par, ran);
                } else {
                    return false;
                }
            }
            if(rightChild[i] != -1) {
                if(find(i, par) != find(rightChild[i], par)) {
                    join(i, rightChild[i], par, ran);
                } else {
                    return false;
                }
            }
        }
        for(int i=0;i<n;i++){
            int pare = find(i,par);
            par[i] = pare;
        }
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
            mp[par[i]]++;
            if(mp.size() > 1) return false;
        }
        
        return true;
    }
};