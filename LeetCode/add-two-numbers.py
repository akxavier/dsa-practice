# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = l1
        num2 = l2
        prev = None

        sum = num1.val + num2.val
        carry = sum // 10
        x = ListNode(sum % 10)
        head = x
        prev = x
        num1 = num1.next
        num2 = num2.next

        while num1 or num2:
            sum = (num1.val if num1 else 0) + (num2.val if num2 else 0) + carry
            carry = sum // 10
            x = ListNode(sum % 10)
            prev.next = x
            prev = x
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        if carry:
            x = ListNode(carry)
            prev.next = x

        return head
