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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* trailingNode = head; // Determine the Nth from the end
        ListNode* nAwayNode = NULL; // Will exist n distance from end
        ListNode* nAwayNodePrev = NULL; // Maintain a previous 

        // Move the trailingNode forward until it is n distance from the nAwayNode
        for (int i = 0; i < n; i++) {
            trailingNode = trailingNode->next;
        }

        // The head is now n distance away from the trailingNode
        nAwayNode = head;

        // Move trailingNode forward until it is null, when it is null the nAwayNode will be n away from the end
        while (trailingNode != NULL) {
            trailingNode = trailingNode->next;
            nAwayNodePrev = nAwayNode;
            nAwayNode = nAwayNode->next;
        }

        if (nAwayNodePrev != NULL) {
            nAwayNodePrev->next = nAwayNode->next;
        }
        else {
            head = head->next;
        }


        return head;
    }
};