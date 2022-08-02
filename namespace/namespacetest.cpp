#include <iostream>

namespace firstspace
{
    void foo()
    {
        std::cout << "From firstspace FOO" << std::endl;
    }
    void bar()
    {
         std::cout << "From firstspace BAR" << std::endl;
    }
}
namespace secondspace
{
     void foo()
    {
        std::cout << "From SECONDspace FOO" << std::endl;
    }
    void bar()
    {
         std::cout << "From SECONDspace BAR" << std::endl;
    }
}

int main()
{
    firstspace::foo();
    secondspace::bar();
}

