#include <iostream>

int Add(int a, int b)
{
    return (a+b);
}

namespace TEST
{
    // 위쪽에 위치하면 ::Add가 불림
    // int TestFunc(void)
    // {
    //    return Add(3, 4);
    // }
    int Add(int a, int b)
    {
        return a+a+b+b;
    }
    // 아래쪽에 위치하면 TEST::Add 가 불림
    int TestFunc(void)
    {
       return Add(3, 4);
    }
}

void TestFunc(void)
{
    Add(3, 4);
}

int main(void)
{
    int nResult = TEST::TestFunc();
    std::cout << nResult << std::endl;
}