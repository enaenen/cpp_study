#include <iostream>

int main(void)
{
	time_t t;
    time(&t);
    char buf[1024];
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", localtime(&t));
    std::cout << buf;
}