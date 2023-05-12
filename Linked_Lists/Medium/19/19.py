from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        fast = head
        slow = head
        prev = None
        for i in range(n):
            if fast == None:
                return head
            fast = fast.next
        
        while fast != None:
            prev = slow
            slow = slow.next
            fast = fast.next

        if prev == None:
            head = head.next
        else:
            prev.next = slow.next

        return head