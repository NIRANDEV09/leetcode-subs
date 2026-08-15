/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp ;
    if (head == NULL || head->next == NULL ){
        return head ;
    }
    else if(head->next->next ==NULL){
        struct ListNode* temp ;
        temp = head->next;
        head->next = NULL;
        temp->next = head;
        head = temp;    
        return head ; 
    }
    else{
        struct ListNode dummy;
        dummy.next = head;
        struct ListNode* prev = &dummy;
        while (prev->next != NULL && prev->next->next != NULL) {
        struct ListNode* first = prev->next;
        struct ListNode* second = prev->next->next;

        prev->next = second;
        first->next = second->next;
        second->next = first;
        prev = first;
        }
        return dummy.next; ;
    }
}