/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> q;
        if(root == NULL) return result;
        q.push(root);
        while(q.empty()==false){
            int nodeCount=q.size();
            int maxLevel=INT_MIN;
            while(nodeCount>0){
                TreeNode* curr=q.front();
                maxLevel=max(curr->val,maxLevel);
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                nodeCount--;
            }
            result.push_back(maxLevel);
        }
        return result;
        
        
    }
};