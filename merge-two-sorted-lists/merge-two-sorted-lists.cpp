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

    // Desc : 

    // - This is a C++ function that merges two sorted linked lists into a new linked list.
    // - It takes in two parameters - `list1` and `list2` - which are the heads of the original linked lists.
    // - The function recursively merges the two lists into a single sorted linked list.
    // - If either `list1` or `list2` is `nullptr`, the function returns the other list.
    // - The function checks which node's value is smaller and sets `list1` to it.
    // - It then sets `list1->next` to the result of invoking `mergeTwoLists` recursively with `list1->next` and `list2`.
    // - The final line of the function returns `list1`, which is the merged list.
    // - This implementation assumes that the original linked lists are already sorted in ascending order.


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 || !list2)
            return list1 ? list1 : list2;
        if (list1->val > list2->val)
            swap(list1, list2);
            
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};