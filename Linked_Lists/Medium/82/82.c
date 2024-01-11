// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
  if(head == NULL || head->next == NULL){
    return head;
  }
  
  struct ListNode *prev = (struct ListNode *)malloc(sizeof(struct ListNode));
  prev->next = head;
  struct ListNode *curr = prev;    

  while(curr->next && curr->next->next){
    if(curr->next->val == curr->next->next->val){
      int val = curr->next->val;
      while(curr->next && curr->next->val == val){
        curr->next = curr->next->next;
      }
    }else{
      curr = curr->next;
    }
  }
  return prev->next;
}