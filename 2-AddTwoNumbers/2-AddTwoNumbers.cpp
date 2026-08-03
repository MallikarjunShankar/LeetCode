// Last updated: 8/3/2026, 10:34:23 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            sum = sum % 10;

            ListNode* result = new ListNode(sum);

            if (head == nullptr) {
                head = result;
                tail = result;
            } else {
                tail->next = result;
                tail = result;
            }
        }

        if (carry != 0) {
            ListNode* result = new ListNode(carry);
            tail->next = result;
        }
        
        return head;
    }
};