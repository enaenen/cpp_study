#include <iostream>

int main()
{
	int a;
	while (1)
	{
	std::cin >> a;
	std::cout << a << std::endl;
	if (std::cin.fail())
		std::cin.clear();
		std::cin.ignore(INT_MAX);
	}
}