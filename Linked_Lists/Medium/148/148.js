/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var sortList = function(head) {
  if(!head || !head.next){
    return head
  }

  let mid = findMiddle(head)
  let left = head
  let right = mid.next
  mid.next = null

  let leftSorted = sortList(left)
  let rightSorted = sortList(right)

  return merge(leftSorted, rightSorted)

};

var findMiddle = function(head){
  let slow = head;
  let fast = head;
  while(fast.next && fast.next.next){
    slow = slow.next;
    fast = fast.next.next;
  }
  return slow;
}

var merge = function(left, right){
  let dummy = new ListNode();
  let temp = dummy;
  while(left && right){
    if(left.val < right.val){
      temp.next = left;
      left = left.next;
    }else{
      temp.next = right;
      right = right.next;
    }
    temp = temp.next
  }
  if(left){
    temp.next = left
  }else{
    temp.next = right
  }

  return dummy.next
}
