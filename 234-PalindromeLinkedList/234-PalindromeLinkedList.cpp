// Last updated: 12/19/2025, 3:25:30 PM
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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* slow = head;
        ListNode* fast= head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead = reverselist(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=nullptr){
            if(first->val!=second->val){
                reverselist(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverselist(newhead);
        return true;
        
    }
    ListNode* reverselist(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newhead = reverselist(head->next);
        ListNode* front = head->next;
        front->next=head;
        head->next=nullptr;
        return newhead;
    }
};