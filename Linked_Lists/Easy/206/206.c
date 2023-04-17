#include <stdio.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *previous = NULL;
    struct ListNode *next = NULL;
    while(head != NULL){
        next = head->next;
        head->next = previous;
        previous = head;
        head = next;
    }
    return previous;
}