#include <iostream>

int sum(int, int);
int multiple(int, int);

int main()
{
    std::cout << "This is master" << std::endl;
    int a = 4; int b = 13;
    std::cout << sum(a, b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int multiple(int a, int b)
{
    return a * b;
}
