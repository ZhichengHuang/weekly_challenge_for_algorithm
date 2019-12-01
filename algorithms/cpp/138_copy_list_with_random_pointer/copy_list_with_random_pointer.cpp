/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *p = NULL, *h = NULL,*t=NULL;
        if (head ==NULL)
        {
            return NULL;
        }
        p = head;
        while(p != NULL)
        {
            Node * node = new Node(p->val);
            node->random=NULL;
            node->next = p->next;
            p->next = node;
            p = node->next;
        }
        p = head;
        while(p!=NULL)
        {
            if (p->random !=NULL)
            {
                p->next->random = p->random->next;
            }
            p = p->next->next;
        }

        p = head;
        h=t=head->next;
        while(p !=NULL)
        {
            p->next = p->next->next;
            if(t->next !=NULL)
            {
                t->next = t->next->next;
            }
            p = p->next;
            t = t->next;
        }
        return h;
        
    }
};