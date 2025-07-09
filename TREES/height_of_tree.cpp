 
class Solution {
public:
    int maxDepth(TreeNode* root) {
     if (root == NULL) return 0;  // 1 NULL when child is missing


    int Lheigt = maxDepth(root->left);
    int Rheigt = maxDepth(root->right);

    return max(Lheigt , Rheigt)+1;
    }
};
