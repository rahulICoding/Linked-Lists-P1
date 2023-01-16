#include <iostream>
#include "student.h"
#include <cstring>

Student::Student(char* name1) {
  strncpy(name, name1, 79);
}

char* Student::getName() {
  return name;
}

Student::~Student() {
  delete name;
}