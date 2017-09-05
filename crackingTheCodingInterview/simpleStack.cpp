struct Node{

  int data ;
  Node* next ;
};

class Stack{

public:

  void appendTop(int value);
  Node* deleteTop();

private:
  Node* top;


};

//Stack is last IN first out

//you have only one private member variable top

//you append at the top and delete at the top

//top -> O -> O

//O-> top -> O -> O

//top -> O -> O -> O

void Stack::appendTop(int value){

  Node* node = new Node()

  node->data = value ;

  if(top != NULL)
  {

  node->next = this->top

  this->top = node ;

}
  else
  {


    node->next = NULL ;
    this->top = node ;

}

}


Node* Stack::deleteTop(){

  int keyValue = this->top->data ;    // The function is not complete yet and doesn't make a lot of sense but this is the blueprint of it 
  this->top = this->top->next ;
}
