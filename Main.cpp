#include <iostream>
#include <string>

int main(void)
{
    std::string name;

    std::cout << "Introduce tu nombre: " << '\n';
    std::cin >> name;
    std::cout << "Bienvenido, " << name << "!" << std::endl;

    return 0;
}