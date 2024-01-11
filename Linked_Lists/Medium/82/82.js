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
var deleteDuplicates = function(head) {
  if(head === null || head.next === null){
    return head
  }
  let prev = new ListNode
  prev.next = head;
  let curr = prev;

  while(curr.next && curr.next.next){
    if(curr.next.val === curr.next.next.val){
      let previousVal = curr.next.val
      while(curr.next && curr.next.val === previousVal){
        curr.next = curr.next.next
      }
    }else{
      curr = curr.next
    }
  }
  return prev.next
};