// Following is the node structure
/**************
class ListNode{
	public:
	int data;
	ListNode* next;
};

ListNode* newListNode(int data){
	ListNode *temp = new ListNode;
    	temp->data = data;
    	temp->next = NULL;
    	return temp;
}
***************/

#include <vector>
ListNode* PairSwap(ListNode* head){
    if (!head || !head->next) return head;

    vector<ListNode*> nodes;
    ListNode* temp = head;

    while (temp) {
        nodes.push_back(temp);
        temp = temp->next;
    }

    int i = 0, gap = 1;
    while (i + gap < nodes.size()) {
        swap(nodes[i]->data, nodes[i + gap]->data);
        i = i + gap + 1;
        gap++;
    }

    return head;
}
