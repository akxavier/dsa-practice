# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        curr = root
        if p.val > q.val:
            p, q = q, p

        while curr:
            if curr.val == p.val or curr.val == q.val or (p.val < curr.val and q.val > curr.val):
                break
            elif p.val < curr.val:
                curr = curr.left
            else:
                curr = curr.right

        return curr
