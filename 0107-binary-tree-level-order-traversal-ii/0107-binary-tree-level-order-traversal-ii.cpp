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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;// return if root null
        queue<TreeNode*>q;//create q of pointer-variable datatype which store datatype
        q.push(root);//first element push

        while(!q.empty()){
            int siz = q.size();//check size of curernt level
            vector<int>currlvl;//level ka vector

            for(int i = 0 ; i<siz ; i++){
                TreeNode* curr = q.front();//level size k andr traversal 
                q.pop();
                currlvl.push_back(curr->val);//push curr->val 
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);

            }
            ans.push_back(currlvl);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};