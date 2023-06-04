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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *nxt=head;
    LinkedListNode<int> *prev=NULL;

    if(curr==NULL || curr->next==NULL) return curr;
    while(curr!=NULL && nxt!=NULL)
    {
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;

}