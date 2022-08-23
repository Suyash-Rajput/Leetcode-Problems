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
    int len(ListNode *head) {
        if(!head) return 0;
        int a = 0;
        
        while(head!=NULL) {
            a++ ;
            head=head->next ;
        }
        return a ;
    }
    ListNode *suyash(ListNode *temp,int a){
        ListNode *head =temp ;
        if(a==0)   head->next=head->next->next ;
        else{
            suyash(head->next,--a) ;
        }
        return temp ;
    } 
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a = len(head) ;
        if(n==a)
            return head->next ;
        
        return suyash(head,a-n-1) ;
        
    }
};