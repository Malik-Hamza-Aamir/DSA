public class App {

    // Delete node
    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }

    // middle node find - Brute Force
    public ListNode middleNode(ListNode head) {
        int n=0;
        ListNode temp = head;

        while(temp != null){
            n++;
            temp = temp.next;
        }

        int mid = n/2;
        ListNode temp2 = head;

        while(mid-- > 0){
            temp2 = temp2.next;
        }

        return temp2;
    }

    // Middle node find - 2 pointers
    public ListNode middleNode(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast!=null && fast.next!=null) {
            fast = fast.next.next;
            slow = slow.next;
        }

        return slow;
    }

    // Reverse a Linked List - Iterative Solution
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;  
        ListNode current = head;
    
        
        while(current != null) { 
            ListNode next = current.next; 
            current.next = prev;
            prev = current;
            current = next;
        }
       return prev; 
    }

    // Reverse a Linked List - recursive solution
    public ListNode reverse(ListNode head) {
        if(head.next == null) {
            return head;
        }

        ListNode reverseHead = reverse(head.next);
        ListNode temp = head.next;

        temp.next = head;
        head.next = null;
        return reverseHead;
    }
    
    public ListNode reverseList(ListNode head) {
        if(head == null) {
            return null;
        }
        return reverse(head);
    }


    // K group reverse
    public ListNode reverseKGroup(ListNode head, int k) {
    ListNode curr = head;
    int count = 0;
    while (curr != null && count != k) { // find the k+1 node
        curr = curr.next;
        count++;
    }
    if (count == k) { // if k+1 node is found
        curr = reverseKGroup(curr, k); // reverse list with k+1 node as head
        // head - head-pointer to direct part, 
        // curr - head-pointer to reversed part;
        while (count-- > 0) { // reverse current k-group: 
            ListNode tmp = head.next; // tmp - next head in direct part
            head.next = curr; // preappending "direct" head to the reversed list 
            curr = head; // move head of reversed part to a new node
            head = tmp; // move "direct" head to the next node in direct part
        }
        head = curr;
    }
    return head;
    }

    // K group reverse - with space of O(1)   
    void reverse(ListNode s, ListNode e) {
        ListNode prev = null, curr = s;
        while (curr != e) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        
        e.next = prev;
        s.next = curr;
    }

    public ListNode reverseKGroup(ListNode head, int k) {
        if(head == null || head.next == null || k == 1) {
            return head;
        }
        ListNode dummy = new ListNode(-1);
        dummy.next = head;
        ListNode beforeStart = dummy;
        ListNode e = head;

        int i = 0;
        while(e != null) {
            i++;
            if(i%k == 0)
            {
                ListNode s = beforeStart.next;
                ListNode temp = e.next;
                reverse(s,e);
                beforeStart.next = e;
                s.next = temp;
                beforeStart = s;
                e = temp;
            }

            else 
            {
                e = e.next;
            }
        }
        return dummy.next;
        }
    

    // merge two sorted lists together
    ListNode merge(ListNode l1, ListNode l2) {
        if(l1 == null) return l2;
        if(l2 == null) return l1;

        if(l1.val < l2.val) {
            l1.next = merge(l1.next, l2);
            return l1;
        }

        else {
            l2.next = merge(l1, l2.next);
            return l2;
        }
    }

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        return merge(list1, list2);
    }

    // merge two sorted lists together iterative
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if (list1 == null) {
            return list2;
        }
        if (list2 == null) {
            return list1;
        }
    
        ListNode head = new ListNode(-1);
        ListNode current = head;
    
        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                current.next = list1;
                list1 = list1.next;
            } else {
                current.next = list2;
                list2 = list2.next;
            }
            current = current.next;
        }
    
        if (list1 != null) {
            current.next = list1;
        } else {
            current.next = list2;
        }
    
        return head.next;
    }

    // Delete duplicates from sorted list - recursive
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode newHead = deleteDuplicates(head.next);

        if(head.val == newHead.val) {
            return newHead;
        }

        else {
            head.next = newHead;
            return head;
        }
    }

    // Delete duplicates from sorted list - iterative
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode temp = head;

        while(temp.next != null) {
            if(temp.val == temp.next.val) {
                ListNode del = temp.next;
                temp.next = del.next;
            }

            else {
                temp = temp.next;
            }
        }
        return head;
    }

    // Linked list cycle detection - hashset
    public boolean hasCycle(ListNode head) {
        if(head == null || head.next == null) return false;
        
        HashSet<ListNode> visited = new HashSet<>();
        ListNode temp = head;

        while(temp != null) {
            if(visited.contains(temp)) {
                return true;
            }
            visited.add(temp);
            temp = temp.next;
        }
        return false;
    }

    // Linked list cycle detection - slow and fast pointers
    public boolean hasCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if(fast == slow) {
                return true;
            }
        }
        return false;
    }    

    // cycle starting point return
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if(fast == slow) {
                break;
            }
        }

        if(fast == null || fast.next == null) return null;
        ListNode ptr1 = head;
        ListNode ptr2 = slow;
        while(ptr1 != ptr2) {
            ptr1 = ptr1.next;
            ptr2 = ptr2.next;
        }

        return ptr1;
    }


    

    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
    }
}
