#include <iostream>
#include "node.h"
#include "student.h"
#include <cstring>

using namespace std;

int main() {
  char* name = new char[80];

  //creating a new node with a student
  strncpy(name, "r", 79);
  Student* r = new Student(name);
  Node* rNode = new Node(r);

  //creating another node with a student that is after rNode
  strncpy(name, "b", 79);
  Student* b = new Student(name);
  Node* bNode = new Node(b);

  //setting the next node after rNode to be bNode
  rNode->setNext(bNode);

  //proves that there is a next node and the student in the next node is accurate
  cout << "bNode: " << bNode << endl;
  cout << "rNode next node: " << rNode->getNext() <<endl;
    cout << "bNode student: " << bNode->getStudent()->getName() << endl;
  cout << "rNode next node next student: " << rNode->getNext()->getStudent()->getName() <<endl;

  //destroying the bnode
  bNode->~Node();

  //proves there is no next node
  cout << "bNode: " << bNode << endl;
  
  
  

  
}