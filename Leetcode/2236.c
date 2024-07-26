/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    int l=0, r=0;
    l = root->left->val;
    r = root->right->val;
    if( (l + r) == root->val ){
        return true;
    }else{
        return false;
    }
}