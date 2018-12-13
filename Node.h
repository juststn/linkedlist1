#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{
 public:
  Node(Student*);
  ~Node();

  Node* setNext();
  void setNext(Node*);
  Node*next;
#endif
