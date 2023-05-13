from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        stack = []
        while head is not None:
            stack.append(head.val)
            head = head.next
        return stack == stack[::-1]

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head
        while fast and fast.next is not None:
            slow = slow.next
            fast = fast.next.next

        prev = None
        curr = slow
        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node

        p1 = head
        p2 = prev

        while p2:
            if p1.val != p2.val:
                return False
            p1 = p1.next
            p2 = p2.next
        return True