Node* sortList(Node *head) {
    if (!head || !head->next) 
        return head;  
        
    Node *zeroHead = new Node(-1);
    Node *oneHead  = new Node(-1);
    Node *twoHead  = new Node(-1);

    Node *zero = zeroHead, *one = oneHead, *two = twoHead;
    Node *current = head;

    while (current) {
        if (current->data == 0) {
            zero->next = current;
            zero = zero->next;
        } else if (current->data == 1) {
            one->next = current;
            one = one->next;
        } else {
            two->next = current;
            two = two->next;
        }
        current = current->next;
    }

    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next  = twoHead->next;
    two->next  = nullptr;
    Node* newHead = zeroHead->next ? zeroHead->next 
                    : (oneHead->next ? oneHead->next : twoHead->next);

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}
