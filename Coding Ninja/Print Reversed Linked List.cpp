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
#include <bits/stdc++.h> 
void printReverse(Node *head)
{
    if(head == NULL){return;}
	printReverse(head->next);
	cout << head->data <<" ";
}
