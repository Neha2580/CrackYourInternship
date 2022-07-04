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
      ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* smallNode =reverseList(head->next);
        
        head->next->next = temp;
        temp->next=NULL;
            
         return smallNode; 
        
        
    }
     void insert(ListNode* &newhead, int x){       //function to insert node in back of linklist
        ListNode* temp = new ListNode(x);
        if(newhead==NULL){
            newhead= temp;
            return;
        }else{
            ListNode* lastnode = newhead;
            while(lastnode->next!=NULL)
                lastnode = lastnode->next;
            lastnode->next = temp;
            return;
        }
        
        temp->next = newhead;
        newhead = temp;
        return;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l11, ListNode* l22) {
        
        ListNode* l1 = reverseList(l11);
       ListNode* l2 = reverseList(l22);
        ListNode* head=NULL;
        int temp = 0, num=0;
        
        while(l1!=NULL && l2!=NULL){
            
            num = l1->val + l2->val + temp;
            
            if(num>9){
                temp = num/10;
                num = num%10;
            }
            else{
                temp = 0;
            }
            
            insert(head, num);
            
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1!=NULL ){
            
            num = l1->val  + temp;
            
            if(num>9){
                temp = num/10;
                num = num%10;
            }
            else{
                temp = 0;
            }
            
            insert(head, num);
            
            l1=l1->next;
        }
        
        while( l2!=NULL){
            
            num =  l2->val + temp;
            
            if(num>9){
                temp = num/10;
                num = num%10;
            }
            else{
                temp = 0;
            }
            
            insert(head, num);
            
        
            l2=l2->next;
        }
        
        if(temp){
            insert(head, temp);
        }
        
        ListNode* nHead = reverseList(head);
        return nHead;
    }
};