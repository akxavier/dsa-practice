# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def inorder(root, max):
            if not root:
                return 0

            count = 0
            if root.val >= max:
                max = root.val
                count = 1
            return count + inorder(root.left, max) + inorder(root.right, max)

        return inorder(root, root.val)
