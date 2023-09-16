class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB)
            return nullptr;

        ListNode *currentA = headA;
        ListNode *currentB = headB;

        int len_a = 1, len_b = 1;
        while (currentA->next) {
            currentA = currentA->next;
            len_a++;
        }
        while (currentB->next) {
            currentB = currentB->next;
            len_b++;
        }

        currentA = headA;
        currentB = headB;

        int diff = abs(len_a - len_b);
        if (len_a > len_b) {
            while (diff--) {
                currentA = currentA->next;
            }
        } else {
            while (diff--) {
                currentB = currentB->next;
            }
        }

        while (currentA && currentB) {
            if (currentA == currentB)
                return currentA;

            currentA = currentA->next;
            currentB = currentB->next;
        }

        return nullptr;  // No intersection found
    }
};
