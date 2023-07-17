// brute force

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == nullptr || headB == nullptr)
    {
        return nullptr;
    }

    unordered_set<ListNode *> mpp;
    while (headA != nullptr)
    {
        mpp.insert(headA);
        headA = headA->next;
    }

    while (headB != nullptr)
    {
        if (mpp.find(headB) != mpp.end())
        {
            return headB;
        }
        headB = headB->next;
    }

    return nullptr;
}

// optimal

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == nullptr || headB == nullptr)
    {
        return nullptr;
    }

    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        if (a == nullptr)
        {
            a = headB;
        }
        else
        {
            a = a->next;
        }

        if (b == nullptr)
        {
            b = headB;
        }
        else
        {
            b = b->next;
        }
    }

    return b;
}