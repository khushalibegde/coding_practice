/**
 * Definition of linked list
 * class ListNode {
 *     int data;
 *     ListNode* next;
 *     ListNode(int data = 0) {
 *         this -> data = data;
 *     }
 *     ListNode(int data, ListNode* next) {
 *         this -> data = data;
 *         this -> next = next;
 *     }
 * }
 **/

ListNode* removeData(ListNode* head, int data) {
    if (!head) return head;

    while (head && head->data == data) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    ListNode* curr = head;
    while (curr && curr->next) {
        if (curr->next->data == data) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

    return head;
}

