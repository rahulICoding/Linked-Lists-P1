#include <iostream>
#include "node.h"
#include "student.h"

Node::Node(Student* student1) {
  nextStudent = student1;
}

Node* Node::getNext() {
  return nextNode;
}

Student* Node::getStudent() {
  return nextStudent;
}

void Node::setNext(Node* node1) {
  nextNode = node1;
}

Node::~Node() {
}