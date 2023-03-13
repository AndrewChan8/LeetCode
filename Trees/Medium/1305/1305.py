from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        all_tree_ints = []
        def traversal(node: TreeNode, outputList: List):
            if node is not None:
                traversal(node.left, all_tree_ints)
                outputList.append(node.val)
                traversal(node.right, all_tree_ints)
        traversal(root1, all_tree_ints)
        traversal(root2, all_tree_ints)
        all_tree_ints.sort()
        return all_tree_ints