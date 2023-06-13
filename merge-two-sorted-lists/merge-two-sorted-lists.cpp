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

    
// This is a C++ code block implementing the same recursive function `mergeTwoLists`, which merges two sorted linked lists. The function works by comparing the first element of `list1` with that of `list2`, and if `list1->val` is greater than `list2->val`, it swaps `list1` and `list2`. 

// Then, the function sets `list1->next` to the result of invoking `mergeTwoLists` recursively with `list1->next` and `list2`. Finally, the function returns `list1`, which is the merged list.

// Again, this implementation assumes that the linked lists are already sorted in ascending order. The `ListNode` class definition is not present in the code block. 

// Overall, this implementation is very concise and easy to read. Do you have any specific questions or issues related to this code?


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 || !list2)
            return list1 ? list1 : list2;
        if (list1->val > list2->val)
            swap(list1, list2);
            
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};