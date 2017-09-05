struct Node{

  int data ;
  Node* next ;
};

class Queue{

public:

  void enqueue(int value);
  Node* dequeue();

private:
  Node* head ;
  Node* tail ;

};



//Queue First In First Out

//you have two private member variable head and tail

//you append in the tail and delete at the head

//a queue is just a linked with the a head and tail

//queue

//head -> O -> O -> tail

//linked list

//head -> O -> O -> O 


// head -> O -> O -> tail
// we append at the tail

void Queue::enqueue(int value){

  Node* node = new Node()

  node->data = value;
  node->next = NULL ;

  if(head == NULL)
    head = node            // not quite sure about what is happening right now, i need to research it in more depth
  else
  {
    tail->next = node ;
    tail = node ;
  }

}

// head -> O -> O -> tail
// we delete at the head


void Queue::dequeue(){

  int value = head->data ;

  head = head->next ;

  if(head == NULL )     // not quite sure about what is happening right now, i need to research it in more depth
  tail == NULL ;

}
