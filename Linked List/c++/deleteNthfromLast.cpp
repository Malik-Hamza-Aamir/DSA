ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *curr = dummy;
    int count = 0;
    while (curr->next != nullptr)
    {
        count++;
        curr = curr->next;
    }

    int toDelete = count - n;
    curr = dummy;
    for (int i = 0; i < toDelete; i++)
    {
        curr = curr->next;
    }

    ListNode *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;

    ListNode *result = dummy->next;
    delete dummy;

    return result;
}

// optimal
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *dummy = new ListNode();
    dummy->next = head;
    ListNode *slow = dummy;
    ListNode *fast = dummy;

    // Move the fast pointer n steps ahead
    for (int i = 0; i < n; i++)
    {
        if (fast == nullptr)
        {
            // Handle the case when n is greater than the length of the list
            delete dummy;
            return head;
        }
        fast = fast->next;
    }

    // Move both pointers until the fast pointer reaches the end
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove the nth node from the end
    ListNode *temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    ListNode *newHead = dummy->next;
    delete dummy;
    return newHead;
}