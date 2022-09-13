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
    
    ListNode*   MergeSortedList(ListNode *l1, ListNode *l2)
    {
        ListNode* result = NULL;
        
        if (!l1)
            return (l2);
        else if (!l2)
            return (l1);
        
        if (l1->val <= l2->val)
        {
            result = l1;
            result->next = MergeSortedList(l1->next, l2);
        }
        else
        {
            result = l2;
            result->next = MergeSortedList(l1, l2->next);
        }
        return result;
    }
        
    void    SplitList(ListNode* source, ListNode** front,                       ListNode** back)
    {
        ListNode*   ptr1;
        ListNode*   ptr2;
        
        ptr2 = source;
        ptr1 = source->next;
        while (!ptr1)
        {
            ptr1 = ptr1->next;
            if (!ptr1)
            {
                ptr2 = ptr2->next;
                ptr1 = ptr1->next;
            }
        }
        (*front) = source;
        (*back)  = ptr2->next;
        ptr2->next = NULL;
    }
    
    void    MergeSort(ListNode** thead)
    {
        ListNode*   head = (*thead);
        ListNode*   ptr1;
        ListNode*   ptr2;
        
        if ((head) || (head->next) )
            return ;
        
        SplitList(head, &ptr1, &ptr2);
        
        MergeSort(&ptr1);
        MergeSort(&ptr2);
        
        (*thead) = MergeSortedList(ptr1, ptr2);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        MergeSort(&l1);
        MergeSort(&l2);
        
        ListNode*   sum_list;
        ListNode*   head_list;
        head_list->val = l1->val + l2->val;
        
        sum_list = head_list;
        sum_list = sum_list->next;
        l1 = l1->next;
        l2 = l2->next;
        while (!l1 || !l2)
        {
            sum_list->val = l1->val  + l2->val;
            sum_list = sum_list->next;
        }
        return (head_list);
    }
};