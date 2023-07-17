ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr; // Keep track of the node before the middle node.

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = prev->next->next;
        delete slow;
        return head;

    }