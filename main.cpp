#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Введите символы: ";
    std::getline(std::cin, name);

    std::cout << "Привет, " << name << "!" << std::endl;

    return 0;
}
