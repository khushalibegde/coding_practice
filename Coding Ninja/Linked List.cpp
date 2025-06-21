/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* findMid(Node* head) {
	if (!head || !head->next) return head;

	Node* slow = head;
	Node* fast = head->next;

	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node* merge(Node* left, Node* right) {
	Node dummy(0);  
	Node* tail = &dummy;

	while (left && right) {
		if (left->data < right->data) {
			tail->next = left;
			left = left->next;
		} else {
			tail->next = right;
			right = right->next;
		}
		tail = tail->next;
	}

	tail->next = (left) ? left : right;
	return dummy.next;
}

Node* mergeSort(Node* head) {
	if (!head || !head->next) return head;

	Node* mid = findMid(head);
	Node* rightHead = mid->next;
	mid->next = NULL;

	Node* left = mergeSort(head);
	Node* right = mergeSort(rightHead);

	return merge(left, right);
}
