class GBF
{
    static class Node
    {
        int     data;
        Node    next;
    };

    static Node create(Node head, int value)
    {
        Node    tmp = new Node();
        Node    ptr = head;
        tmp.data = value;
        tmp.next = null;

        if (head == null)
            head = tmp;
        else
        {
            while (ptr.next != null)
                ptr = ptr.next;
            ptr.next = tmp;
        }
        return (head);
    }

    static Node remove(Node head, int n)
    {
        int len = 0;
        Node    tmp = head;
        while (tmp != null)
        {
            len++;
            tmp = tmp->next;
        }
        if (n > len)
        {
            System.out.println("something illogic is happening in the input");
            System.out.println("the n-th value is bigger than the length of the linked");
            System.out.println("Thus, we cannot remove any element from the list :(");
            return (head);
        }
        if (n == len)
            return head.next;
        if (n < len)
        {
            int diff = len - n;
            Node prev = null;
            Node curr = head;
            for (int i = 0; i < diff; i++)
            {
                prev = curr;
                curr = curr.next;
            }
            prev.next = curr.next;
            return (head);
        }
    }

    static void display(Node head)
    {
        Node tmp = head;

        while (tmp != null)
        {
            System.out.print(tmp.data + " ");
            tmp = tmp.next;
        }
        System.out.println();
    }

    public static int main(void)
    {
        Node    head = null;
        for (int i = 1; i <= 5; i++)
            head = create(head, i);
        
        int n = 2;

        head = remove(head, n);
        display(head);
        return (0);
    }
}