#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

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

bool searchKey(int n, struct Node *head, int key)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == key)
        {
            return true; // Key found, return true
        }
        curr = curr->next;
    }
    return false; // Key not found, return false
}


int main(){

}