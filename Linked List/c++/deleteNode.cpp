#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode *head, *tail; // head and tail of the LinkedList

void PrintList() // Function to print the LinkedList
{
    ListNode *curr = head;
    for (; curr != nullptr; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
}

void InsertatLast(int value) // Function for creating a LinkedList
{

    ListNode *newnode = new ListNode(value);
    if (head == nullptr)
        head = newnode, tail = newnode;
    else
        tail = tail->next = newnode;
}

void deleteNode(ListNode *node)
{
    swap(node->val, node->next->val);
    ListNode *temp = node->next;
    node->next = temp->next;
    delete temp;
}

int main()
{
    InsertatLast(10);
    InsertatLast(20);
    InsertatLast(30);
    InsertatLast(40);
    cout << "LinkedList before Deleting Last Node : " << endl;
    PrintList();
    deleteNode(head->next);
    cout << "LinkedList after Deleting Lastt Node : " << endl;
    PrintList();
    return 0;
}