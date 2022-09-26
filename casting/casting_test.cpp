#include <iostream>

int main( void ) {
	double *dbl = new double( 3.141592 );
	// int *i1 = dbl;         //묵시적 변환
	int *i2 = (int *)dbl;  //명시적 형변환
	// int *i3 = static_cast<int *>( dbl );

	// std::cout << i1, i2, i3 << std::endl;
	std::cout << *dbl << std::endl;
	//잘못된 변환
	std::cout << *i2 << std::endl;
}