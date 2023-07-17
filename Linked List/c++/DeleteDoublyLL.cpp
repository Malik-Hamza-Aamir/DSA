//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>

class Node{
public:
    Node* prev;
    int data;
    Node* next;
 
    Node()
    { 
        prev = NULL; 
        data = 0;
        next = NULL;
    }
    
    Node(int value)
    { 
        prev = NULL; 
        data = value;
        next = NULL;
    }
};

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};


class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
        Node* curr = head_ref;
        int count = 1;
    
        // Traverse the list to find the node at the desired position
        while (count < x && curr != NULL) {
            curr = curr->next;
            count++;
        }
    
        // If the desired position is invalid (out of range), return
        if (curr == NULL) {
            return head_ref;
        }
    
        // If the node to be deleted is the head
        if (curr == head_ref) {
            head_ref = head_ref->next;
            if (head_ref != NULL) {
                head_ref->prev = NULL;
            }
        } else {
            Node* tempPrev = curr->prev;
            Node* tempNext = curr->next;
    
            tempPrev->next = tempNext;
            if (tempNext != NULL) {
                tempNext->prev = tempPrev;
            }
        }
    
        delete curr;
        return head_ref;
    }
};

//{ Driver Code Starts.

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
   printf("\n");
}
 
/* Drier program to test above functions*/
int main()
{
  int t, x, n, i;
  scanf("%d",&t);
  
  while(t--)
  {
      /* Start with the empty list */
      struct Node *temp,*head = NULL;
      scanf("%d",&n);
      
      temp = NULL;
      
      for(i=0;i<n;i++){
        scanf("%d",&x);
        
        if(head == NULL){
            head = new Node(x);
            temp = head;
        }
        else{
            Node *temp1 = new Node(x);
            temp->next = temp1;
            temp1->prev = temp;
            temp = temp->next;
        }
      }
  
    scanf("%d",&x);
      
    Solution ob;  
    head = ob.deleteNode(head,x); 
      
        
        printList(head);           
        while(head->next!=NULL)
        {
    	    temp=head;
    	    head=head->next;
    	    free(temp);
    	}
    	
    	free(head);
	}
	return 0;
}

// } Driver Code Ends