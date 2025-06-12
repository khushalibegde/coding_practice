/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;       
        ListNode* curr = head;

        while (curr != NULL) {
            values.push_back(curr->val);
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
};
