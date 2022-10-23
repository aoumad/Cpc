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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode*   start = new ListNode();

        start->next = head;
        ListNode*   fastPtr = start;
        ListNode*   slowptr = start;

        for (int i = 0; i < n; i++)
            fastPtr = fastPtr->next;
        while (fastPtr->next != NULL)
        {
            fastPtr = fastPtr->next;
            slowptr = slowptr->next;
        }
        slowptr->next = slowptr->next->next;
        return (start->next);
    }
};