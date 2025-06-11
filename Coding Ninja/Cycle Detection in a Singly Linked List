#include <unordered_set>
bool detectCycle(Node *head)
{
    unordered_set<Node*> visited;
	Node* curr = head;
    while(curr!=NULL){
        if(visited.count(curr)){
            return true;
        }
        visited.insert(curr);
        curr = curr->next;
    }
    return false;

}
