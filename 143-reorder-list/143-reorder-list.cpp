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
    void reorderList(ListNode* head) {
        if(!head ||head->next==NULL ) return ;
        ListNode *l1= head ; 
       ListNode *slow = head ;
        ListNode *fast =head; 
        ListNode *prev=NULL ;
        
        while(fast!=NULL && fast->next!=NULL) {
            prev =slow ;
            slow =slow->next; 
            fast =fast->next->next ;
        }
        prev->next=NULL ;
       ListNode *l2= reverse(slow) ;  
     
        merge(l1,l2) ;
   } 
    
   ListNode * reverse(ListNode *root) {
       if(!root) return NULL ;
       ListNode *next =NULL; 
       ListNode *prev=NULL;
       ListNode *temp=root; 
       while(temp!=NULL) {
           next =temp->next ;
            temp->next= prev ;
             prev=temp ;
           temp=next ;
       }
      return prev ;
   }  
    void merge(ListNode *l1,ListNode *l2) {
        while(l2!=NULL) {
        ListNode *r =l1->next ;
        l1->next=l2 ;
        l1= l2 ;
        l2 =r ;
            
    }
    }
    
     
};
 

