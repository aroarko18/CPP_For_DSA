#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;

    int a = 10;
    // printf("%d", a);-----in c
    std::cout << a;
    std::cout << "My favourite number is " << a << std::endl;
    // space inside the output
    std::cout << "My " << a << " favourite.";
}