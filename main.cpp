//linked list project part 1, this program tests the functions in the Node and Student class

#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main(){
  Student* s1 = new Student;
  Node* n1 = new Node(s1);

  Student* s2 = new Student;
  Node* n2 = new Node(s2);

  n1->setNext(n2);

  // test if getNext() returns the correct value (outputs OK if correct)
  if (n2 == n1->getNext()) {
    cout << "OK" << endl;
  }
  
  // test getStudent() function
  if (n1->getStudent() == s1) {
    cout << "OK" << endl;
  }
  
}
