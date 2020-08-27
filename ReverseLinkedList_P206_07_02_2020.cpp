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
        /*
        ll visual representation
        0: { val: 1, next: ref 1 }
        1: { val: 2, next: ref 2 }
        2: { val: 3, next: ref 3 }
        ...
        5: { val: 5, next: ref nullptr}
        nullptr

        alternative
        (1 (2 (3 (4 (5 nil))))
        */
        //         if (!head || !head->next) {
        //             return head;
        //         }

        //         ListNode* cur = head;
        //         ListNode* prev = nullptr;
        //         ListNode* prevprev = nullptr;
        //         while (cur->next) {            
        //             prevprev = prev;
        //             prev = cur;            
        //             cur = cur->next;
        //             if (prev && prevprev) {
        //                 prev->next = prevprev;
        //             }
        //         }        
        //         cur->next = prev;
        //         head->next = nullptr;
        //         return cur;

        stack<int> stack;
        ListNode* cur = head;
        while (cur) {
            stack.push(cur->val);
            cur = cur->next;
        }

        cur = head;
        while (!stack.empty()) {
            cur->val = stack.top(); stack.pop();
            cur = cur->next;
        }

        return head;
    }
};