#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    
    LinkedListNode<int>* curr = head;
    vector<int> ans;

    while(curr!=NULL){
        ans.push_back(curr->data);
        curr = curr->next;
    }
    int n = ans.size();
    for(int i=0;i<n;i++){
        if(ans[i]!=ans[n-i-1]){
            return false;
        }
    }
    return true;
}
