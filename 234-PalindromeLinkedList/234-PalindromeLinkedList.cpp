// Last updated: 9/15/2026, 3:24:21 PM
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
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast) slow = slow->next;
        ListNode *prev = nullptr;

        while (slow) {
            ListNode *next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        ListNode *left = head;
        ListNode *right = prev;

        while(right) {
            if (left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }
        
        return true;
    }
};