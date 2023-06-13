/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    // Approch : 

    // - This is a C++ function that merges two sorted linked lists into a new linked list.
    // - It takes in two parameters - `list1` and `list2` - which are the heads of the original linked lists.
    // - The function recursively merges the two lists into a single sorted linked list.
    // - If either `list1` or `list2` is `nullptr`, the function returns the other list.
    // - The function checks which node's value is smaller and sets `list1` to it.
    // - It then sets `list1->next` to the result of invoking `mergeTwoLists` recursively with `list1->next` and `list2`.
    // - The final line of the function returns `list1`, which is the merged list.
    // - This implementation assumes that the original linked lists are already sorted in ascending order.

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to simplify edge cases
        ListNode* start = new ListNode();
        // Set the dummy node to point to the head
        start->next = head;
        // Initialize two pointers to the dummy node
        ListNode* fast = start;
        ListNode* slow = start;     

        // Move the fast pointer n positions ahead of the slow pointer
        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        // Move both pointers until the end of the list is reached
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node by setting the slow pointer's next to the next of the node to be removed
        slow->next = slow->next->next;
        
        // Return the head of the modified linked list
        return start->next;
    }
};