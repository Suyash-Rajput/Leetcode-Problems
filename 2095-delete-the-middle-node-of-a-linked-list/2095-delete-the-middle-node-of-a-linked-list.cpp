/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       
        if(head==NULL || head->next ==NULL) return NULL;
        ListNode * m=NULL ; 
         ListNode *slow =head ;
        ListNode *fast =head ;
        while(fast!=NULL and fast->next!=NULL){                  
       m=slow;                                        //update prev = slow
        slow=slow->next;                                  //increment slow once, slow = slow->next; 
        fast=fast->next->next;                            //increment fast twice, fast = fast->next->next;
    }
    
       m->next=slow->next;                                //update connection 
    delete slow;                                          //deleting middle node
    return head; 
    }
};