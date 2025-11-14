#include <iostream>
#include <string>
#include <clocale>

int main(void)
{
    setlocale(LC_ALL, "Russian");

    std::string line{""}; 
    std::cout << "Введите слово:" << std::endl;
    std::cin >> line;
    std::cout << "Введённое слово:" << std::endl;
    std::cout << line << "\n";

    return 0;
}