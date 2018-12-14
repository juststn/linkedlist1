//Node class functions

#include <iostream>
#include "Node.h"

using namespace std;

//constructor
Node::Node(Student* newsdt){
  sdt = newsdt;
  next = NULL;
}

//desconstructor
Node::~Node(){
  delete sdt;
}

//set next node
void Node::setNext(Node* newNode){
  next = newNode;
}

//get next node
Node* Node::getNext(){
  return next;
}

//get student
Student* Node::getStudent(){
  return sdt;
}
