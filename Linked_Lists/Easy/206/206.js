
// Definition for singly-linked list.
function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    let previous = null;
    let next = null;
    while(head != null){
        next = head.next;
        head.next = previous;
        previous = head;
        head = next
    }
    return previous
};