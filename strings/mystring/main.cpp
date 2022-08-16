#include <iostream>

#include "MyString.hpp"

int main(void) {
  MyString str1("Hello World");
  MyString str2(str1);

  str1.println();
  str2.println();
}