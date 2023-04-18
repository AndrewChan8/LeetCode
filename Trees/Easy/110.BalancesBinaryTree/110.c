#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int dfs(struct TreeNode *root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = dfs(root->left);
    int rightHeight = dfs(root->right);
    if(abs(leftHeight - rightHeight) > 1 || leftHeight == -1 || rightHeight == -1){
        return -1;
    }
    int max = leftHeight > rightHeight ? leftHeight : rightHeight;
    return 1 + max;
}

int isBalanced(struct TreeNode* root){
    return dfs(root) != -1;
}

int main(){}