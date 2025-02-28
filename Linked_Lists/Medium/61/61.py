# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
  def rotateRight(self, head, k):
    """
    :type head: Optional[ListNode]
    :type k: int
    :rtype: Optional[ListNode]
    """
    if head == None or head.next == None:
      return head

    tail = head
    temp = head
    length = 0
    while tail.next != None:
      tail = tail.next
      length += 1

    if k > length:
      k = k % (length + 1)

    for i in range(length - k):
      temp = temp.next

    tail.next = head
    head = temp.next
    temp.next = None

    return head