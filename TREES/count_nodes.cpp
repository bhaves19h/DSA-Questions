class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0 ;
        int countL = countNodes(root->left);
        int countR = countNodes(root->right);
        return countL + countR + 1 ;
    }
};
