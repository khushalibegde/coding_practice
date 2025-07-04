/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* curr = head;
        unordered_set<ListNode*> visited;
        while(curr!=NULL){
            if(visited.count(curr)){
                return curr;
            }
            visited.insert(curr);
            curr=curr->next;
        }
        return NULL;
    }
};
