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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* PA=headA;
        ListNode* PB=headB;
        while(PA!=PB){
            if(PA==nullptr){
                PA=headB;
            }else{
                PA=PA->next;
            }

            if(PB==nullptr){
                PB=headA;
            }else{
                PB=PB->next;
            }
        }
        return PA;
    }
};