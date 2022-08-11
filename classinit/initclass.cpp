#include <iostream>

class initClass {
 private:
  std::string name;
  int num;

 public:
  int getNum() { return num; }
  std::string getName() { return name; }
  void setNum(int num) { this->num = num; }
  void setName(std::string name) { this->name = name; }
};

int main() { initClass test; }