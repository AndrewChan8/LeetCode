// Definition for singly-linked list.
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
  if(!head || !head->next){
    return head;
  }

  struct ListNode *tail = head;
  struct ListNode *temp = head;
  int length = 0;

  while(tail->next != NULL){
    tail = tail->next;
    length++;
  }

  if(k > length){
    k = k % (length + 1);
  }

  for(int i = 0; i < (length - k); i++){
    temp = temp->next;
  }

  tail->next = head;
  head = temp->next;
  temp->next = NULL;

  return head;
}