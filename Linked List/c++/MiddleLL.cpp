#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
// Brute force
    ListNode *middleNode(ListNode *head)
    {
        ListNode *curr = head;
        int n = 0;
        while (curr != NULL)
        {
            n++;
            curr = curr->next;
        }

        curr = head;
        for (int i = 0; i < n / 2; i++)
        {
            curr = curr->next;
        }

        return curr;
    }
};


int main()
{
}