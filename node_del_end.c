/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int count = 0 ; 
    struct ListNode *temp = head ;
    struct ListNode *pres  = head ;
    struct ListNode *priv  = NULL ;
    while (temp != NULL){
        temp = temp->next;
        ++count;
    }
    int index = 0; 
    while(index != count-n){
        priv = pres;
        pres= pres->next;
        index++;
    }
    if (count == 1){
        head = NULL;
        return head ;
    }
    else if(n == count){
        head = head->next;
        return head;
    }
    else{
        if(pres->next == NULL){
            priv->next = NULL;
        }
        else{
            priv->next = pres->next;
        }
        
        return head ; 
    }
    
}