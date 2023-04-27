from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        s1, s2 = [], []
        while l1:
            s1.append(l1.val)
            l1 = l1.next
        while l2:
            s2.append(l2.val)
            l2 = l2.next
        carry, head = 0, None
        while s1 or s2 or carry:
            d1 = s1.pop() if s1 else 0
            d2 = s2.pop() if s2 else 0
            val = d1 + d2 + carry
            carry, val = val // 10, val % 10
            head = ListNode(val, head)
        return head