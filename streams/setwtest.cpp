#include <iostream>
#include <iomanip>

int main()
{
    double values[] = {1.23, 35.36, 653.7, 4358.24};
    for (int i = 0; i < 4; i++)
    {
        std::cout.width(10);
        std::cout << values[i] << '\n';
    }
    /*
    using without setw
    manual set
    */
    for (int i = 0; i < 4; i++)
    {
        std::cout.width(10);
        std::cout.fill('*');
        std::cout << values[i] << std::endl;
    }
    /*
    setw
    iomanip needed
    */
    const char *names[] = {"Chuck", "Jimmy", "Lalo", "GusFring"};
    for (int i = 0; i < 4; i++)
    {
        std::cout.fill(' ');
        std::cout << std::setw(7) << names[i]
                << std::setw(10) << values[i] << std::endl;
    }
    
    std::cout << std::endl;
    /*
    setiosflags
    std::ios => basic_ios class
    
    */
    for (int i = 0; i < 4; i++)
        std::cout << std::setiosflags(std::ios::left)
        << std::setw(6) << names[i]
        << std::resetiosflags(std::ios::left)
        << std::setw(10) << values[i] << std::endl;
}