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
        if(!head)return  0 ;
        ListNode *temp =head; 
        int i =0 ;
        while(temp!=NULL){
            temp=temp->next ;
            i++ ;
        }
        return i ; 
    }
    
    ListNode *suyash(ListNode *temp,int n){
        ListNode  *head= temp ;
        if(n==0) 
            head->next =head->next->next;
        else{
            suyash(head->next,--n) ;
        }
        
        return temp ;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)return NULL ;
        int a = len(head) ;
        if(a==n) {
            return head->next ;
        }
        return suyash(head,a-n-1) ;
    }
};