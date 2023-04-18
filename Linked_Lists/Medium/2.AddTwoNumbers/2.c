#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *curr = temp;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry != 0){
        int val = carry;
        if(l1){
            val += l1->val;
            l1 = l1->next;
        }
        if(l2){
            val += l2->val;
            l2 = l2->next;
        }
        carry = val / 10;
        curr->val = val % 10;
        if(l1 != NULL || l2 != NULL || carry != 0){
            curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            curr = curr->next;
        }else{
            curr->next = NULL;
        }
    }
    return temp;
}