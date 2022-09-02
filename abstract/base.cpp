#include <iostream>
class base {
   public:
	base() { std::cout << "BASE Constructor" << std::endl; }
	virtual ~base() = 0;
};
base::~base() {}  // required if not using Microsoft extension

class derived : public base {
   public:
	derived() { std::cout << "Constructor" << std::endl; }
	~derived() { std::cout << "DESTRUCTOR" << std::endl; }
};

int main() {
	derived aDerived;  // destructor called when it goes out of scope
}