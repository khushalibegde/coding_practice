/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int len1 = 0;
    int len2 = 0;
    Node *currFirst = firstHead;
    Node *currSecond = secondHead;

    while(currFirst!=NULL){
        currFirst = currFirst->next;
        len1++;
    }
    while(currSecond!=NULL){
        currSecond = currSecond->next;
        len2++;
    }
    int extra = abs(len1-len2);
    
    currFirst = firstHead;
    currSecond = secondHead;

    while(extra>0){
        if(len1>len2){
            currFirst = currFirst->next;
        }
        else{
            currSecond = currSecond->next;
        }
        extra--;
    }
    while(currFirst!=NULL && currSecond!=NULL){
        if(currFirst==currSecond){
            return currFirst;
        }
        else{
            currFirst= currFirst->next;
            currSecond= currSecond->next;
        }
    }
    return NULL;
}
