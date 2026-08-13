/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *temp , *pres , *end_node;
    temp = head ; 
    int count =0 ;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    pres = head ;
    end_node = head ;
    for(int i = 1;i<k;i++){
        pres = pres->next;
    }
    for(int i = 1;i<count-k+1;i++){
        end_node = end_node->next;
    }
    if(pres == end_node){
        return head;
    }
    else{
        int cp = end_node->val;
        end_node->val = pres->val;
        pres->val = cp;
        return head ;
    }
}