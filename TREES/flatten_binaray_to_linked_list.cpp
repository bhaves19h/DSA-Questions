class Solution {
public:
    TreeNode* nextR = NULL;
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        flatten(root->right);//trave right then left

        flatten(root->left);
//we make root then traverse through nextright is root now , backtrack krte wqt hm next right me root ki value daal  denge jisse connection bn jayenge jisse left me value null or right me value next right aa jaygi 
        root->left= NULL;
        root->right = nextR;
        nextR = root;
    }
};
