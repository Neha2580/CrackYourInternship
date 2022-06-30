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
    int length(ListNode* head){
        if(head==NULL){
            return 0;
        }
        
        return 1+length(head->next);
    }
    int getDecimalValue(ListNode* head) {
        
        int n = length(head);
        ListNode* temp = head;
        int ans = 0,i=0;
        while(temp!=NULL){
            int a = temp->val;
            ans+=pow(2,(n-1-i))*a;
            i++;
            temp = temp->next;
        }
        
        return ans;
    }
};