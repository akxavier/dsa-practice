# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, R: Optional[TreeNode]) -> bool:
        def check(root):
            if not root:
                return [0, True]

            h1, bool1 = check(root.left)
            h2, bool2 = check(root.right)
            if bool1 and bool2:
                if abs(h1 - h2) <= 1:
                    height = 1 + max(h1, h2)
                    return [height, True]
                else:
                    return [None, False]
            else:
                return [None, False]

        return check(R)[1]