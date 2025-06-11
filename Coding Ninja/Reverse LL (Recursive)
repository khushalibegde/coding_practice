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
Node *reverse(Node *head){
	if(head == NULL || head->next== NULL){
		return head;
	}
	Node *newNode = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return newNode;
}

Node *reverseLinkedListRec(Node *head)
{
	head = reverse(head);
	return head;
}
