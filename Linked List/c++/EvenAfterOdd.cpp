ListNode *oddEvenList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    ListNode *odd = head;
    ListNode *e = head->next;
    ListNode *evenStart = e;

    while (e != nullptr && e->next != nullptr)
    {
        odd->next = e->next;
        odd = odd->next;
        e->next = odd->next;
        e = e->next;
    }

    odd->next = evenStart;

    return head; // Return the head of the modified linked list
}