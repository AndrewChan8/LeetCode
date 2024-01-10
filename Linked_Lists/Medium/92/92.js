/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
// var reverseBetween = function(head, left, right) {
//   if(left === right){
//     return head;
//   }

//   let temp = new ListNode();
//   temp.next = head;

//   let prev = temp;
//   for(let i = 0; i < left - 1; i++){
//     prev = prev.next;
//   }

//   let start = prev.next;
//   let next = start.next;

//   for(let i = 0; i < right - left; i++){
//     start.next = next.next;
//     next.next = prev.next;
//     prev.next = next;
//     next = start.next
//   }
//   return temp.next
// };
var reverseBetween = function(head, left, right) {
  if(left === right){
    return head;
  }

  let temp = new ListNode()
  temp.next = head

  let start = temp
  for(let i = 0; i < left - 1; i++){
    start = start.next
  }

  let prev = start.next
  let curr = prev.next

  for(let i = 0; i < right - left; i++){
    let tempNext = curr.next
    curr.next = prev
    prev = curr
    curr = tempNext
  }
  
  start.next.next = curr
  start.next = prev
  return temp.next
};