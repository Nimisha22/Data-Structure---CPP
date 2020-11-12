Single LL

class Node {
public: 
  int data; //Data to store (could be int,string,object etc)
  Node* nextElement;  //Pointer to next element

  Node(){
  //Constructor to initialize nextElement of newly created Node
    nextElement=nullptr;   
  } 
};

class LinkedList {
public:
  Node* head;  // pointing to start of the list

  LinkedList(){
    head = nullptr;
  }
};

----------------------------------------

Basic Operations on Linked Lists

The primary operations which are generally a par t of the  LinkedList  class are
listed below:
insertAtTail(data)  - inser ts an element at the end of the linked list
insertAtHead(data)  - inser ts an element at the star t/head of the linked list
delete(data)  - deletes an element with your specified value from the linked
list
deleteAtHead()  - deletes the first element of the list
search(data)  - searches for an element in the linked list
getHead()  - returns head of the linked list
isEmpty()  - returns true if the linked list is empty

--------------------------------------------

Doubly Linked Lists (DLL)

class Node {
public: 
  int data; //Data to store (could be int,string,object etc)
  Node * nextElement;  //Pointer to next element
  Node * previousElement; //pointer to previous element
  Node(){
  //Constructor to initialize nextElement of newlyCreated Node
    nextElement=nullptr;
    previousElement=nullptr; 
  }
};
