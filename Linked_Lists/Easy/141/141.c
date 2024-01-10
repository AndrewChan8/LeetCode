
// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
  struct ListNode *slow = head;
  struct ListNode *fast = head;   
  while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
      return 1;
    }
  }
  return 0;
}