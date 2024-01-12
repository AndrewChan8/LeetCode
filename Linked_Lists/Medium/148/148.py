from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:
  def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
    if not head or not head.next:
      return head
    
    mid = self.findMiddle(head)
    left = head
    right = mid.next
    mid.next = None

    leftSorted = self.sortList(left)
    rightSorted = self.sortList(right)

    return self.merge(leftSorted, rightSorted)

  def findMiddle(self, head):
    slow = head
    fast = head
    while fast.next and fast.next.next:
      slow = slow.next
      fast = fast.next.next
    
    return slow

  def merge(self, left, right):
    dummy = ListNode()
    temp = dummy
    while left and right:
      if left.val < right.val:
        temp.next = left
        left = left.next
      else:
        temp.next = right
        right = right.next
      temp = temp.next

    if left:
      temp.next = left
    else:
      temp.next = right
    return dummy.next