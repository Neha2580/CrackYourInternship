/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        if(head==NULL){
            return 0;
        }
        
        return 1+length(head->next);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
      int n1 = length(headA);
      int n2 = length(headB);  
        
        if(n1>n2){
            while(n1!=n2){
                headA  = headA->next;
                n1--;
            }
        }
        
        if(n1<n2){
            while(n1!=n2){
                headB = headB -> next;
                n2--;
            }
        }
        while(headA!= headB){
            
                headA = headA->next;
                headB = headB->next;
            }
        
    
        return headA;
        
    }
};