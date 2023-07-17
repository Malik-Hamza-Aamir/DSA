ListNode *reverseList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head; // Base case: empty list or single node
    }

    ListNode *reversedHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return reversedHead;
}

ListNode *reverseList(ListNode *head)
{
    if (head->next == NULL)
    {
        return NULL;
    }
    return reverseList(head);
}
