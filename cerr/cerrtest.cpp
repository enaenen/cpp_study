#include <iostream>

void	TestWide()
{
	int i =0;
	std::wcout << L"Enter a number: ";
	std::wcin >> i;
	std::wcerr << L"test for wcerr" << std::endl;
	std::wclog << L"test for wclong" << std::endl;
}

int	main()
{
	int	i = 0;
	std::cout << "Enter a number: ";
	std::cin >> i;
	std::cerr << "test for cerr" << std::endl;
	std::clog << "test for clog" << std::endl;
	TestWide();
}