Node *segregate(Node *head)
{
    Node *dummy0 = new Node(0);
    Node *dummy1 = new Node(0);
    Node *dummy2 = new Node(0);
    Node *p0 = dummy0;
    Node *p1 = dummy1;
    Node *p2 = dummy2;

    Node *curr = head;
    while (curr != nullptr)
    {
        if (curr->data == 0)
        {
            p0->next = curr;
            p0 = p0->next;
        }
        else if (curr->data == 1)
        {
            p1->next = curr;
            p1 = p1->next;
        }
        else
        {
            p2->next = curr;
            p2 = p2->next;
        }

        curr = curr->next;
    }

    p0->next = dummy1->next;
    p1->next = dummy2->next;
    p2->next = nullptr;

    Node *sortedHead = dummy0->next;

    delete dummy0;
    delete dummy1;
    delete dummy2;

    return sortedHead;
}