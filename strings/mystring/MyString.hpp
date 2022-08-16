#pragma once

#include <string.h>

#include <iostream>

class MyString {
 private:
  char *string_content;
  int string_length;

 public:
  MyString(char c);
  MyString(const char *str);
  MyString(const MyString &str);
  ~MyString();

  int length() const;
  void print() const;
  void println() const;
};