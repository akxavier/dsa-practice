# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        def maxSum(root):
            if not root:
                return (float("-inf"), 0)
            lmax, lsum = maxSum(root.left)
            rmax, rsum = maxSum(root.right)

            lsum = max(lsum, 0)
            rsum = max(rsum, 0)

            currMax = max(root.val + lsum + rsum, lmax, rmax)
            currSum = root.val + max(lsum, rsum)
            print(currMax, currSum)
            return (currMax, currSum)
        
        return maxSum(root)[0]