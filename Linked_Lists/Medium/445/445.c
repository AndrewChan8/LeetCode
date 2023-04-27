#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int s1[100];
    int s2[100];
    int s1Size = 0, s2Size = 0;
    while(l1 != NULL){
        s1[s1Size++] = l1->val;
        l1 = l1->next;
    }
    while(l2 != NULL){
        s2[s2Size++] = l2->val;
        l2 = l2->next;
    }
    int carry = 0;
    struct ListNode *head = NULL;
    while(s1Size || s2Size || carry){
        int d1 = s1Size ? s1[--s1Size] : 0;
        int d2 = s2Size ? s2[--s2Size] : 0;
        int val = d1 + d2 + carry;
        carry = val / 10;
        val = val % 10;
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->next = head;
        temp->val = val;
        head = temp;
    }
    return head;
}