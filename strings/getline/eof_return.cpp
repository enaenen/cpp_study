#include <string>
#include <iostream>

int main()
{
    std::string command;
    while (true) {
        getline(std::cin,command);
        std::cout << std::cin.eof() << " " << command << std::endl;
    }
}
