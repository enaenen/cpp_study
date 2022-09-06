#include <iostream>

int main( void ) {
	std::string input;

	while ( getline( std::cin, input ) ) {
		if ( input.compare( "ext" ) == 0 )
			return 0;
	}
}