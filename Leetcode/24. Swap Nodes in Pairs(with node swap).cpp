class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        head = head->next; 

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;
            ListNode* nextPair = second->next;

            second->next = first;
            first->next = nextPair;

            if (prev) {
                prev->next = second;
            }

            prev = first;
            curr = nextPair;
        }

        return head;
    }
};
