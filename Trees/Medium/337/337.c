
// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct Result{
    int rob;
    int skip;
};

struct Result helper(struct TreeNode *node){
    struct Result res;
    res.rob = 0;
    res.skip = 0;
    if(!node){
        return res;
    }
    struct Result l = helper(node->left);
    struct Result r = helper(node->right);
    res.rob = node->val + l.skip + r.skip;
    res.skip = l.rob > l.skip ? l.rob : l.skip;
    res.skip += r.rob > r.skip ? r.rob : r.skip;
    return res;
}

int rob(struct TreeNode* root){
    return helper(root).rob > helper(root).skip ? helper(root).rob : helper(root).skip;
}