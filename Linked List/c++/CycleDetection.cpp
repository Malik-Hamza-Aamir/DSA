bool hasCycle(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return false;
    }

    std::unordered_set<ListNode *> visited;
    ListNode *temp = head;

    while (temp != nullptr)
    {
        if (visited.count(temp))
        {
            return true;
        }
        visited.insert(temp);
        temp = temp->next;
    }

    return false;
}

bool hasCycle(ListNode *head)
{
    if (head == nullptr)
    {
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}