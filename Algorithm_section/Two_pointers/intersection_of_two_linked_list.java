/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) 
    {
        ListNode    listA = headA;
        ListNode    listB = headB;

        if (headA == null || headB == null)
            return null;

        while (listA != listB)
        {
            if (listA == null)
                listA = headB;
            else
                listA = headA.next;
            
            if (listB == null)
                listB = headA;
            else
                listB = headB.next;
        }
        return (listA);
    }
}