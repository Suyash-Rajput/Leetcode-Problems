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
    int len(ListNode *head){
        if(!head) return 0 ;
        int a =0 ;
        while(head!=NULL) {
            a++ ;
            head=head->next ;
        }
        return a-1 ;
    } 
    ListNode *suyash(ListNode *temp,int i) {
        if(!temp) return NULL;
        ListNode *head  =temp ;
        if(i==0) {
            head->next= head->next->next ;
            
        } 
       else 
           suyash(head->next,--i) ;
    
        return temp ;
        
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;
        int a= len(head)  ;
        if(a==n-1) 
            return head->next ;
        
        return suyash(head,a-n) ;
         
    }
};