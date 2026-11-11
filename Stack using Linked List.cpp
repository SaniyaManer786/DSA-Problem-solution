/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class myStack {
    
   Node* head;
   int cnt;

  public:
    myStack() {
        head=nullptr;
        cnt=0;
        // Initialize your data members
    }

    bool isEmpty() {
        return head==nullptr;
        
        // check if the stack is empty
    }

    void push(int x) {
       Node* newNode = new Node(x);
       
        newNode->next=head;
        head=newNode;
         cnt++;
        // Adds an element x at the top of the stack
    }

    void pop() {
        if(isEmpty()){
            return;
        }
        Node* temp;
        temp=head;
        head=head->next;
        delete temp;
        cnt--;
        // Removes the top element of the stack
    }

    int peek() {
        if(isEmpty()) {
                    return -1;
                }
        return head->data;
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return cnt;
        // Returns the current size of the stack
    }
};
