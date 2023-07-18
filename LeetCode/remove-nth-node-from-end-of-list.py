# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        prev, l, r = None, head, head
        for i in range(n - 1):
            r = r.next

        while r.next:
            r = r.next
            prev = l
            l = l.next

        if not prev:
            head = l.next
        else:
            prev.next = prev.next.next

        return head
