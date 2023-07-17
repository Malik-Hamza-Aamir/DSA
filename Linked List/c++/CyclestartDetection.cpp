// Brute Force
ListNode *detectCycle(ListNode *head)
{
    if (head == nullptr && head->next == nullptr)
    {
        return nullptr;
    }

    unordered_set<ListNode *> mpp;
    ListNode *curr = head;

    while (curr != nullptr && curr->next != nullptr)
    {
        if (mpp.find(curr) == mpp.end())
        {
            return curr;
        }

        mpp.insert(curr);
        curr = curr->next;
    }

    return nullptr;
}

// Optimized Approach
ListNode *detectCycle(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *entry = head;

    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            while (slow != entry)
            {
                slow = slow->next;
                entry = entry->next;
            }
            return entry;
        }
    }

    return nullptr;
}