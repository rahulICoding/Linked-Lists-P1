#pragma once
#include <iostream>

class Student {
  public: //make it accessible
    Student(char*); // creates the node student
    char* getName(); // gets the students name
    ~Student(); // destroys the students place in the node
  
    char* name = new char[80];
};