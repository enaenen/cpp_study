#include <iostream>
#include <string>
#include <vector>
/**
 * 입력 스트림에서 문자열을 한 줄씩 추출합니다.
 * basic_istream<CharTpye, Traits>& getline (입력스트림, 읽어들일 문자열, 줄 구분 기호)
 * 입력스트림이 발견될때까지 줄구분기호에서 문자를 추출하여 읽어들일 문자열에 저장
 * 
 */
int main()
{
    std::string str;
    std::vector <std::string> v1;
    std::cout << "Enter a sentence, press ENTER between sentences. (Ctrl-Z to stop):";
    while (getline(std::cin, str))
        v1.push_back(str);
    
    std::cout << "The following input was stored with newline delimiter:" << std::endl;
    for (const auto& p : v1)
        std::cout << p << std::endl;
    std::cin.clear();

    //getline 공백 모드
    std::vector<std::string> v2;
    while (getline(std::cin, str, ' ' ))
        v2.push_back(str);
    std::cout << "The following input was stored with whitespacess as delimiter:" << std::endl;
    for (const auto& p : v2)
        std::cout << p << std::endl;
}
