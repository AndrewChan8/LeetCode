from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        vals = {}
        def traversal(node):
            if not node:
                return False
            if node.val in vals:
                return True

            vals[k - node.val] = True
            return traversal(node.left) or traversal(node.right)
        return traversal(root)