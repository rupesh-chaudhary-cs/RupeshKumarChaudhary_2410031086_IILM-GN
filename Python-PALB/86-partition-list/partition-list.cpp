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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallDummy=new ListNode();
        ListNode* largeDummy=new ListNode();
        ListNode* small=smallDummy;
        ListNode* large=largeDummy;
        while(head!=nullptr){
            if(head->val<x){
                small->next=head;
                small=small->next;
            
            }else if(head->val>=x){
                large->next=head;
                large=large->next;
                
            }
            head=head->next;
            
        }
        small->next=largeDummy->next;
        large->next=nullptr;
        
        return smallDummy->next;

        
    }
};