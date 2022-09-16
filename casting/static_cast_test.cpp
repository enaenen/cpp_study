#include <iostream>

typedef unsigned char BYTE;

void f() {
	char ch;
	int i = 127;
	float f = 2.5;
	double dbl;
	int tmp;

	ch = static_cast<char>( i );
	std::cout << "char : " << ch << std::endl;
	tmp = static_cast<int>( ch );
	std::cout << "char->int : " << tmp << std::endl;
	std::cout << "==============" << std::endl;
	if ( ( -1 < tmp && tmp < 128 ) ) {
		if ( -1 < tmp && tmp < 32 )
			std::cout << "char: Non displayable" << std::endl;
		std::cout << ch << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
	}

	dbl = static_cast<double>( f );
	std::cout << "dbl : " << dbl << std::endl;
	i = static_cast<BYTE>( ch );
	std::cout << "i : " << i << std::endl;
}

int main( void ) { f(); }