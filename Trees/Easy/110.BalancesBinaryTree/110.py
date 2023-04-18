from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def dfs(root):
            if not root:
                return 0
            
            leftHeight = dfs(root.left)
            rightHeight = dfs(root.right)
            if abs(leftHeight - rightHeight) > 1 or leftHeight == -1 or rightHeight == -1:
                return -1
            return 1 + max(leftHeight, rightHeight)
        return dfs(root) != -1