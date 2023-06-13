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