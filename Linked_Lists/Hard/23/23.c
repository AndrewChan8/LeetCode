#include <stdio.h>
#include <stdlib.h>
// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Normal merge from merge sort
// struct ListNode* merge(struct ListNode *list1, struct ListNode *list2){
//     struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
//     struct ListNode *curr = temp;
//     while(list1 && list2){
//         if(list1->val <= list2->val){
//             curr->next = list1;
//             list1 = list1->next;
//         }else{
//             curr->next = list2;
//             list2 = list2->next;
//         }
//         curr = curr->next;
//     }
//     curr->next = list1 ? list1 : list2;
//     return temp->next;
// }

// Recursive Merging using the pointers from a linked list
struct ListNode* merge(struct ListNode* left, struct ListNode* right){
    if (!left){
        return right;
    }
    if (!right){
        return left;
    }
    if (left->val < right->val){
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(listsSize == 0){
        return NULL;
    }
    if(listsSize == 1){
        return lists[0];
    }
    int mid = listsSize / 2;
    struct ListNode *left = mergeKLists(lists, mid);
    struct ListNode *right = mergeKLists(lists + mid, listsSize - mid);
    return merge(left, right);
}