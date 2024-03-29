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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
      
        if(!head) return NULL; 
        ListNode *temp =head ;
        ListNode *prev= NULL ;
        ListNode * next =NULL;
    int c =0 ;
        ListNode *curr =head; 
        for(int i=0;i<k;i++) {
              if(!curr) return head; 
            curr=curr->next ;
        }
        while(temp!=NULL &&  c<k) {
            next =temp->next ;
            temp->next = prev ;
            prev =  temp;
            temp =next ;
            c++ ;   
        }
        if(temp ) 
            head->next =reverseKGroup(temp,k) ;
        
        
        return prev ;
    }
};



