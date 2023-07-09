class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        elif not list2:
            return list1

        if list1.val <= list2.val:
            head = list1
            head.next = self.mergeTwoLists(list1.next, list2)
        else:
            head = list2
            head.next = self.mergeTwoLists(list1, list2.next)

        return head

# Alternative solution


class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        current = head = ListNode()

        while list1 and list2:

            if list1.val < list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next

            current = current.next

        current.next = list1 or list2
        return head.next
