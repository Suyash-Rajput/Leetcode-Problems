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
       if(head==NULL || head->next==NULL) return NULL ;
        int  i= 0 ;
        ListNode *temp =head ;
        while(temp){
          
            temp=temp->next;
              i++ ;
        }
      i = i/2;
         
ListNode  *prev =head ;
        
        temp =head ;
        int a = 0 ;
        while(a!=i) {
            a++ ;
            prev= temp ;
            temp =temp->next ;
        }
        
    prev->next =temp->next ;
        
        delete temp ;
        
        return  head ;
        
    }
};