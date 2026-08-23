// Last updated: 8/23/2026, 2:18:34 PM
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
        if (head == nullptr || head->next == nullptr) return head;
        struct ListNode* previous = nullptr;
        struct ListNode* curr = head;
        while (curr != nullptr) {
            struct ListNode* ne = curr->next;
            curr->next = previous;
            previous = curr;
            curr = ne; 
        }
        return previous;
    }
};