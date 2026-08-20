/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* x=NULL;
    void doubly(Node* temp,Node* curr,Node* a){
       // Node* temp=head;
        if(temp==NULL){
            x=a;
            return;
        }
        
        if(temp->child){
            if(temp->next){
            curr=temp->next;
            }
            else{
                curr=temp;
            }
            doubly(temp->child,curr,a);
            if(temp->next){
            curr->prev=x;
            x->next=curr;
            }
            temp->next=temp->child;
            temp->child->prev=temp;
             temp->child=NULL;
            temp=x;
         }
        a=temp;
        doubly(temp->next,curr,a);
    }
    Node* flatten(Node* head) {
        Node* temp=head;
        if(head==NULL){
            return head;
        }
        doubly(temp,head,temp);
        return temp;
    }
};