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
     void  split(ListNode* head , ListNode** a, ListNode** b){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode*  r = slow->next;
        slow->next=NULL;
        
        *a = head;
         *b = r;
    }
    
    void reverse (ListNode* cur, ListNode ** h) {
        ListNode* curr = cur;
        ListNode* prev = NULL, *temp = NULL;
        while(curr!=NULL) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        *h = prev;
    }
   
    
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* h = a;
        ListNode* temp1 = a;
        ListNode* temp2 = b;
        
        while(temp1!=NULL && temp2!=NULL){
            ListNode* Next1 = temp1->next;
            ListNode* Next2 = temp2->next;
            temp1->next = temp2;
            temp2->next = Next1;
            temp1 = Next1;
            temp2 = Next2;
        }
        
        return h;
    }
    
    
    void reorderList(ListNode* head) {
            ListNode* temp1, *temp2, *temp3;
        split(head,&temp1,&temp2);
        reverse(temp2,&temp3);
        head = merge(temp1,temp3);
       
        
    }
};