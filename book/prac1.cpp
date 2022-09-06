#include <iostream>

void swap( int &a, int &b ) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main( void ) {
	char *charArr = new char( 12 );
	delete[] charArr;

	int a( 10 );
	int b( 20 );
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "After Swap( a , b )" << std::endl;
	swap( a, b );
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	int aList[5] = { 10, 20, 30, 40, 50 };
	for ( auto &n : aList ) {
		std::cout << n << std::endl;
	}
}