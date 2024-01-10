from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
  def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
    if left == right:
      return head

    temp = ListNode()
    temp.next = head

    start = temp
    for i in range(left - 1):
      start = start.next

    prev = start.next
    curr = prev.next

    for i in range(right - left):
      tempNext = curr.next
      curr.next = prev
      prev = curr
      curr = tempNext

    start.next.next = curr
    start.next = prev
    return temp.next