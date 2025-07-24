class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;

        // If we're at a leaf node
        if (!root->left && !root->right) { //check for both the value are null or not
            return root->val == targetSum;
        }

        // Check recursively in left and right subtrees
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
