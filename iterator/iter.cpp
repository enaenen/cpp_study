#include <set>
#include <algorithm>
#include <iostream>

int main( void ) {
	std::multiset<int> a;
	a.insert( 1 );
	a.insert( 10 );
	a.insert( 100 );
	a.insert( 1000 );

	std::multiset<int>::iterator it = ++a.begin();
	std::multiset<int>::iterator ite = a.end();
	for ( ; it != ite; it++ ) {
		std::cout << *( std::prev( it ) ) << std::endl;
		std::cout << *it << std::endl;
	}
}