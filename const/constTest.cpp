#include <iostream>

class CTest
{
    
    private:
        std::string name;
    public:
        CTest();
        void setName(std::string name)
        {
            this->name = name;
        }
};
int main(void)
{
    const int constData = 10;
    
    int a = 10;
    int b = 20;
    const int* ptr1 = &a;
    int* const ptr2 = &a;
    const int *const ptr3 = &a;
    CTest *cTest = new CTest();


    //int에 대한 const (a값) 변경 불가능 
    // *ptr1 = b;

    // * 가르키는 포인터의 위치(주소값)은 변경 가능
    std::cout << *ptr1 << std::endl;
    ptr1 = &b;
    std::cout << *ptr1 << std::endl;

    // *에 대한 const  이므로 ptr2 포인팅 변경 불가능
    //ptr2 = &b; 


}