// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *ptr = head;
    while(list1 && list2){
        if(list1->val < list2->val){
            head->next = list1;
            list1 = list1->next;
        }else{
            head->next = list2;
            list2 = list2->next;
        }
        head = head->next;
    }
    if(list1){
        head->next = list1;
    }else{
        head->next = list2;
    }
    return ptr->next;
}