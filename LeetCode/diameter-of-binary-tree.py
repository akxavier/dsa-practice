# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, R: Optional[TreeNode]) -> int:
        def diameter(root):
            if not root:
                return [0, 0]

            h1, d1 = diameter(root.left)
            h2, d2 = diameter(root.right)
            height = 1 + max(h1, h2)
            d = max(d1, d2)
            return [height, max(d, h1 + h2)]

        return diameter(R)[1]
