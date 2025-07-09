class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int> res;

    // base case
    if (root == nullptr) return res;

     // Root first (preorder)

    vector<int> left = postorderTraversal(root->left);
    res.insert(res.end(), left.begin(), left.end()); // it copies all elements from left and adds them at the end of res

    vector<int> right = postorderTraversal(root->right);
    res.insert(res.end(), right.begin(), right.end());

    res.push_back(root->val); 

    return res;
}

};
