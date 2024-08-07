#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}tree;

int sumTree(struct TreeNode *root){         //incorreto, soma sempre
    int leftSum = 0, rightSum = 0;
    if (root->left && root->right == NULL){
        return 0;
    } else{
        leftSum = sumTree(root->left);
        rightSum = sumTree(root->right);
        return root->val + leftSum + rightSum;
    }
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
    tree *temp = root;
    int sum = 0;
    
}