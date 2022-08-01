#include <iostream>

int	main()
{
	int x;
	std::cout << "Enter Choice : ";
	std::cin >> x;
	while (x < 1 || x > 4)
	{
		std::cout << "Invalid choice, try again: ";
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			char c;
			std::cin >> c;
		}
	}
}