#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(){

}

Node::~Node(){

}

void Node*::getNext(Node* newNode){
  next = newNode;
}
