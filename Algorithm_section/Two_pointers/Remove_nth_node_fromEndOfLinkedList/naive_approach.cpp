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
        cout << "something illogic is happening in the input" << std::endl;
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