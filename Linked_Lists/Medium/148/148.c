// Definition for singly-linked list.
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* findMiddle(struct ListNode* head){
  struct ListNode* slow = head;
  struct ListNode* fast = head;
  while(fast->next && fast->next->next){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

struct ListNode* merge(struct ListNode* left, struct ListNode* right){
  struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode* temp = dummy;
  
  while(left && right){
    if(left->val < right->val){
      temp->next = left;
      left = left->next;
    }else{
      temp->next = right;
      right = right->next;
    }
    temp = temp->next;
  }
  if(left){
    temp->next = left;
  }else{
    temp->next = right;
  }
  return dummy->next;
}

struct ListNode* sortList(struct ListNode* head) {
  if(!head || !head->next){
    return head;
  }
  
  struct ListNode* mid = findMiddle(head);
  struct ListNode* left = head;
  struct ListNode* right = mid->next;
  mid->next = NULL;

  struct ListNode* leftSorted = sortList(left);
  struct ListNode* rightSorted = sortList(right);

  return merge(leftSorted, rightSorted);

}
