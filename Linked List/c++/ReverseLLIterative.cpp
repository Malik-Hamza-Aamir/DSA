ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *nextNode = nullptr;

    while (curr != nullptr)
    {
        nextNode = curr->next; // Save the next node
        curr->next = prev;     // Reverse the pointer
        prev = curr;           // Move to the next pair of nodes
        curr = nextNode;
    }

    return prev; // Return the new head of the reversed list
}