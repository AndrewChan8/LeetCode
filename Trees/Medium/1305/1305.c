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

void traversal(struct TreeNode* node, int* arr, int* idx){
    if(node != NULL){
        traversal(node->left, arr, idx);
        arr[(*idx)++] = node->val;
        traversal(node->right, arr, idx);
    }
}

int* getAllElements(struct TreeNode* root1, struct TreeNode* root2, int* returnSize){
    int arr1[5000], arr2[5000];
    int idx1 = 0, idx2 = 0;

    traversal(root1, arr1, &idx1);
    traversal(root2, arr2, &idx2);

    int *result = (int *)malloc(sizeof(int) * (idx1 + idx2));
    *returnSize = 0;

    int i = 0, j = 0;
    while(i < idx1 && j < idx2){
        if(arr1[i] <= arr2[j]){
            result[(*returnSize)++] = arr1[i++];
        }else{
            result[(*returnSize)++] = arr2[j++];
        }
    }

    while(i < idx1){
        result[(*returnSize)++] = arr1[i++];
    }
    while(j < idx2){
        result[(*returnSize)++] = arr2[j++];
    }
    free(arr1);
    free(arr2);
    return result;
}