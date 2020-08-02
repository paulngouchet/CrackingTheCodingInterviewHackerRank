// own implementation of a linked list
struct Node{
  int data ;
  Node* next ;
};

class LinkedList{
  public:
    void append(int value);
    void erase(int value);

  private:
    Node* head ;
};


void LinkedList::append(int value){
  Node* node = new Node()
  node->data = value ;
  node->next = NULL

  if(head == NULL)
    {
      head = node ;
    }
  else {
  Node* current = this->head ;
  while(current->next != NULL){
    current = current->next ;
  }
  current->next = node
}

}
void LinkedList::erase(int value){
    // i will assume there exist a linked list and that the head is not null
    if(head->data == value)
      {
        head = head->next ;
      }
    else {

    Node* current = this->head ;

    while(current->next != NULL){
      if(current->next->data == value )
        current->next = current->next->next ;
      current = current->next ;
    }
  }
}
