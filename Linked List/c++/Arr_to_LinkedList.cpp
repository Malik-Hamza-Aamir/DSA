#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *constructLL(vector<int> &arr)
{
    int n = arr.size();
    Node *head = NULL;
    Node *curr = NULL;

    for (int i = 0; i < n; i++)
    {
        Node *newNode = new Node(arr[i]);

        if (head == NULL)
        {
            head = newNode;
            curr = newNode;
        }

        else
        {
            curr->next = newNode;
            curr = newNode;
        }
    }

    return head;
}

int main()
{
    
}