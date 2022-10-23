// //

// #include <iostream>
// #include <complex>
// #include <iomanip>
// #include <algorithm>
// #include <queue>
// #include <stack>
// #include <string>
// #include <vector>
// #include <cmath>
// #include <map>
// #include <set>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>

// using namespace std;

// struct ListNode*
// {
//     int data;
//     ListNode*   next;
// };

// struct ListNode*    create(struct Node* head, int value)
// {
//     struct Listnode *tmp;
//     struct ListNode *ptr = head;
    
//     tmp = new ListNode();
//     tmp->data = value;
//     tmp->next = NULL;
//     if (head == NULL)
//         head = tmp;
//     else
//     {
//         while (ptr != NULL)
//             ptr = ptr->next;
//         ptr->next = tmp;
//     }
//     return (head);
// }

// void    Display(struct Listnode* head)
// {
//     struct Listnode*    tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->data << " ";
//         tmp = tmp->next;
//     }
//     cout << std::endl;
// }

// ListNode*   remove_nth_element(ListNode *head, int n)
// {
//     ListNode*   tmp = head;
//     int len  = 0;
//     while (tmp != NULL)
//     {
//         len++;
//         tmp = tmp->next;
//     }

//     if (n > len)
//     {
//         cout << "something ilogic is happening in the input" << std::endl;
//         cout << "the n-th value is bigger than the length of the linked" << std::endl;
//         cout << "Thus, we cannot remove any element from the list :(" << std::endl;
//         return (head);
//     }
//     if (n == len)
//     {
//         return (head->next);
//     }
//     if (n < len)
//     {
//         int diff = len - n;
//         ListNode*   prev = NULL;
//         ListNode*   curr = head;
//         for (int i = 1; i <= diff; i++)
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         return (head);
//     }
// }

// int main(void)
// {
//     ListNode    *head = NULL;

//     for (int i = 1; i <= 5; i++)
//         head = create(head, i);
    
//     head = remove_nth_element(head, 2);
//     Display(head);
//     return (0);
// }

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* create(struct Node* head, int n)
{
    struct Node *temp, *ptr = head;
    temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    return head;
}

Node* removeNthFromEnd(Node* head, int n)
{

    int len = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        len++;
        tmp = tmp->next;
    }
    if (n > len)
    {
        cout << "something ilogic is happening in the input" << std::endl;
        cout << "the n-th value is bigger than the length of the linked" << std::endl;
        cout << "Thus, we cannot remove any element from the list :(" << std::endl;
        return (head);
    }
    else if (n == len)
        return head->next;
    else
    {
        int diff = len - n;         
        Node* prev= NULL;      
        Node* curr = head;        
        for(int i = 0;i < diff;i++){
            prev = curr;           
            curr = curr->next;     
        }
        prev->next = curr->next;
        return head;
    }
     
}

void display(struct Node* head)
{
 
    struct Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    struct Node* head = NULL;
     
    for (int i = 1; i <= 5; i++)
        head = create(head, i);
     
    int n = 5;
     
    cout << "Linked list before modification: \n";
    display(head);
 
    head = removeNthFromEnd(head, 2);
    cout << "Linked list after modification: \n";
    display(head);
 
    return 0;
}