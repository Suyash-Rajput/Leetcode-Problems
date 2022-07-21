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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    
        if(left==right) return head ;
    int count =0;
        ListNode *next =NULL;
        ListNode *leftNode =NULL,*rightNode =NULL;
        ListNode *temp =head; 
        ListNode *prev=NULL; 
        while(temp!=NULL) {
            if(count+1==left-1) 
                prev= temp ;
            else if(count==left-1) 
                leftNode=temp ;
            else if(count==right-1)
                rightNode =temp ;
            count++ ;
            temp=temp->next ;
        }
        if(leftNode==NULL || rightNode==NULL) return head ;
        ListNode *nextNode = leftNode ,*rightNodeNext = rightNode->next ;
        temp = prev;
        while(nextNode!=rightNodeNext && nextNode !=NULL  ) {
            next= nextNode->next ;
            nextNode->next = temp ;
            temp = nextNode ;
            nextNode = next ;
        } 
       leftNode->next = next ;
        if(prev!=NULL) {
            prev->next = rightNode;
        }
        if(prev==NULL) {
            return rightNode ;
        }
           
           return head; 
    }
};