#include <iostream>
#include <cstdint>

int main() {
    std::cout << "hello" << std::endl;

    uint8_t a = 65;
    std::cout << a << std::endl;
    std::cout << (int) a << std::endl;

    uint8_t b = 250;
    std::cout << (int)b << std::endl;
    b = b+10;
    std::cout << (int)b << std::endl;

    int x;
    std::cout << x << std::endl;
    return 0;
}