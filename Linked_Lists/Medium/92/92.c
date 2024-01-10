
// Definition for singly-linked list.
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
  if(left == right){
    return head;
  }

  struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
  temp->next = head;

  struct ListNode *start = temp;
  for(int i = 0; i < left - 1; i++){
    start = start->next;
  }

  struct ListNode *prev = start->next;
  struct ListNode *curr = prev->next;

  for(int i = 0; i < right - left; i++){
    struct ListNode *tempNext = curr->next;
    curr->next = prev;
    prev = curr;
    curr = tempNext;
  }

  start->next->next = curr;
  start->next = prev;
  return temp->next;
}