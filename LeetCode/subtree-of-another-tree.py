# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if root:
            if root.val == subRoot.val:
                if checkSame(root, subRoot):
                    return True
            return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)
        else:
            return False

def checkSame(root, subRoot):
    if not root and not subRoot:
        return True
    elif root and subRoot:
        if root.val != subRoot.val:
            return False
        return checkSame(root.left, subRoot.left) and checkSame(root.right, subRoot.right)
    else:
        return False