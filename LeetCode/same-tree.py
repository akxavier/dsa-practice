# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p and not q:
            return True
        elif p and q:
            if p.val != q.val:
                return False

            bool1 = self.isSameTree(p.left, q.left)
            bool2 = self.isSameTree(p.right, q.right)
            return bool1 and bool2
        else:
            return False