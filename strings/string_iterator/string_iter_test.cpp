#include <iostream>

static void string_to_uppercase(std::string& str)
{
    std::cout << "str.begin() : " << *str.begin() << std::endl;
    for(std::string::iterator it = str.begin(); it != str.end(); it++){

        std::cout << "str.end() : " << *str.end() << std::endl;
        std::cout << *it << std::endl; 
    }
}
int main(void)
{
    std::string str = "abcdegfdzfffe";
    string_to_uppercase(str);
}