// Last updated: 8/23/2026, 1:46:43 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        struct ListNode *move = head;
        while (move != nullptr && move->next != nullptr) {
            if (move->val == move->next->val) {
                struct ListNode *Duplicate = move->next;
                move->next = move->next->next;
                delete Duplicate; 
            } else move = move->next;
        }
        return head;
    }
};