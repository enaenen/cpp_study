
#include <iostream>
void	TestFunc(int, int = 10);

int		main(int argc, char **argv)
{
	TestFunc(3);
	TestFunc(3,4);
	return 0;
}
//순서는 오른쪽 부터
void	TestFunc(int a, int b = 10)
{
	std::cout << a << " " << b << std::endl;
}
//모호성이 발생하므로, default parameter는 웬만하면 사용하지 않도록 한다.
