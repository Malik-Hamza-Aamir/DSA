ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *n = head->next;

    while (curr != nullptr && n != nullptr)
    {
        curr->next = prev;
        prev = curr;
        curr = n;
        n = n->next;
    }

    curr->next = prev; // Update the next pointer for the last node

    return curr;
}

bool isPalindrome(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    { // o or 1 node is palindrome
        return true;
    }

    // Finding Middle
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow ptr is at the middle
    // reverse the other half of LL
    slow->next = reverseList(slow->next);
    slow = slow->next;
    ListNode *start = head;

    while (slow != nullptr)
    { // slow moves to ending
        if (slow->val != start->val)
        {
            return false;
        }
        slow = slow->next;
        start = start->next;
    }

    return true;
}