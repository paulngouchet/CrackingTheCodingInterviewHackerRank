#include <map>

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    map<Node* , int> occurenceDictionary ;
    Node* current = head ;          // current is the head of the list
    
    if( head == NULL )             // accessing the head
      return false ;
    if(head->next == NULL )     // accessing head->next
      return false ;

    while( current->next != NULL)   // this loop happens only when the linked list has more than the head. a head and another node
    {
      if( occurenceDictionary.find(current) == occurenceDictionary.end()) // keeping track of the number of times a node in the linkedList is being traversed
        occurenceDictionary[current] = 1 ;
      else
        occurenceDictionary[current]++ ;    // increment the value corresponding to the key(Node*) meaning that it has been traversed

      if(occurenceDictionary[current] > 1)    // if traversed more than once then there is a cycle
        return true ;
        current = current->next ;         // the first time current is head in this loop
    }   // it loops through the entire list and stops at the end where now current is the end of the list , node the end of the list can't be accessed in the loop but only outside the loop. This loop without the dictionary is the blueprint for going through the entire list starting from the head

    if( occurenceDictionary.find(current) == occurenceDictionary.end())
      occurenceDictionary[current] = 1 ;          // accessing the last element of the linked list
    else
      occurenceDictionary[current]++ ;
    
      map<Node*, int>::iterator it;

for ( it =occurenceDictionary.begin(); it != occurenceDictionary.end(); it++ ) {   //looping through the entire map.
  if(it->second > 1 )
  return true;
}
    
return false ;
// important note, nodes in a list can have the same value.
// a key of a map in this can directly be the object ( struct ) Node*
}
