#include <iostream>
#include <sys/time.h>
#include <cstdlib>

int main( void ) {
	int randomNumber;
	struct timeval time;
	gettimeofday( &time, NULL );
	srand( time.tv_usec );
	randomNumber = rand();

	std::cout << randomNumber << std::endl;
	randomNumber = rand();
	std::cout << randomNumber << std::endl;
	randomNumber = rand();
	std::cout << randomNumber << std::endl;
	randomNumber = rand();
	std::cout << randomNumber << std::endl;
}