class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
        return 0;
    }

    //rec case
    return max(maxDepth(root->left),maxDepth(root->right))+1;

    }
};