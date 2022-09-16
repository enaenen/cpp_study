#include <iostream>
#include <cstdint>

int main( void ) {
	int n1;
	unsigned int n2;
	uintptr_t p;

	p = reinterpret_cast<uintptr_t>( &n1 );
	std::cout << &n1 << std::endl;
	std::cout << std::hex << p << std::endl;
	p = reinterpret_cast<uintptr_t>( &n2 );
	std::cout << &n2 << std::endl;
	std::cout << std::hex << p << std::endl;
	return ( 0 );
}