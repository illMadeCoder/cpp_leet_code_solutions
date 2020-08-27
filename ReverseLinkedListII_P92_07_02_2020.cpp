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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        stack<int> stack;

        ListNode* start = head;
        while (--m) {
            start = start->next;
            --n;
        }

        ListNode* end = start;
        while (--n)
        {
            stack.push(end->val);
            end = end->next;
        }
        stack.push(end->val);
        end = end->next;

        while (!stack.empty())
        {
            start->val = stack.top(); stack.pop();
            start = start->next;
        }

        return head;
    }
};