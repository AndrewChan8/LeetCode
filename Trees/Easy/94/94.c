#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void helper(struct TreeNode* root, int* result, int* size) {
    if (root == NULL) {
        return;
    }
    helper(root->left, result, size);
    result[(*size)++] = root->val;
    helper(root->right, result, size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = (int*) malloc(100 * sizeof(int));
    helper(root, result, returnSize);
    return result;
}