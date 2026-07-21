class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
     Node *start,*end;
        int count;

  public:
    myQueue() {
       start = end = nullptr;
        count = 0;
    }
        // Initialize your data members

    bool isEmpty() {
         return start == nullptr;
         
        // check if the queue is empty
    }

    void enqueue(int x) {
        Node* temp=new Node(x);
        if(start==nullptr){
            start=end=temp;
        }else{
            end->next=temp;
            end=temp;
          
        }
        count++;
        // Adds an element x at the rear of the queue
    }

    void dequeue() {
        if(start==nullptr){
            return ;
        }else{
            Node* temp=start;
            start=start->next;
            
            delete temp;
            count--;
        }
        
        if (start == nullptr)
            end = nullptr;
        // Removes the front element of the queue
    }

    int getFront() {
        if(start==NULL){
            return -1;
        }else{
            return start->data;
        }
        
        // Returns the front element of the queue
        // If queue is empty, return -1
    }

    int size() {
        return count;
        // Returns the current size of the queue.
    }
};
