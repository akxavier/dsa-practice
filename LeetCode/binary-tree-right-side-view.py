# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        q = deque()
        if root:
            q.append(root)

        levelOrder = []

        while q:
            val = []
            for i in range(len(q)):
                node = q.popleft()
                val.append(node.val)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            levelOrder.append(val)

        res = []
        for level in levelOrder:
            res.append(level[-1])

        return res