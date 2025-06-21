#include <bits/stdc++.h> 
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
vector<int> findNextGreaterNodeList(Node* head)
{
    vector<int> values;       
    Node* curr = head;

    while (curr != NULL) {
        values.push_back(curr->data);
        curr = curr->next;
    }

    vector<int> ans(values.size(), 0);  
    stack<int> maxElem;                 

    for (int i = 0; i < values.size(); ++i) {
        while (!maxElem.empty() && values[i] > values[maxElem.top()]) {
            int prevIndex = maxElem.top();
            maxElem.pop();
            ans[prevIndex] = values[i];
        }
        maxElem.push(i);  
    }

    return ans;
}
