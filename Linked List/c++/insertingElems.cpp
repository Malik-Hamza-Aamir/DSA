#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

void PrintList(Node *head) // Function to print the LinkedList
{
    Node *curr = head;
    for (; curr != NULL; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
}

Node *InsertatFirst(Node *head, int x)
{
    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)
{
    Node *newNode = new Node(x);

    // Handling Null
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Handling Not NuLL
    Node *curr = head;
    Node *temp;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    temp = curr->next; // store null
    curr->next = newNode;
    newNode->next = temp; // assigning null at the end
    return head;
}

int main()
{
    Node *head = NULL; // head of the LinkedList
    head = InsertatFirst(head, 40);
    head = InsertatFirst(head, 30);
    head = InsertatFirst(head, 50);
    head = InsertatFirst(head, 10);
    cout << "LinkedList before inserting 0 at beginning : " << endl;
    PrintList(head);
    head = InsertatFirst(head, 0);
    cout << "LinkedList after inserting 0 at beginning : " << endl;
    PrintList(head);
    return 0;
}