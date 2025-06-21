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
    Node *curr = head;
	vector<int> arr;
	while(curr!=NULL){
		arr.push_back(curr->data);
		curr= curr->next;
	}
	
	reverse(arr.begin(),arr.end());
	for(data : arr){
		cout << data << " ";
	}
}
