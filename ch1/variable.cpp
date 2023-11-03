#include <iostream>

int main()
{
    int x = 123;
    x = 5;

    std::cout << x << std::endl;
    std::cout << &x << std::endl;

    return 0;
}