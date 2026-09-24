/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
 
        Node* last=nullptr;
        Node* current=head;
        while(current!=nullptr){
            last=current->prev;
            current->prev=current->next;
            current->next=last;
            current=current->prev;
        }
        return (last->prev);
    }
};
 
