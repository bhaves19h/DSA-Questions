class Solution {
public:
    int sumNumbers(TreeNode* root) {
    if(root == NULL) return 0;
    int sumRt = root->val;
    int sumL = sumNumbers(root->left);
    int sumR = sumNumbers(root->right);
    return sumL + sumR + sumRt;
    }
};
