#include <iostream>
#include <clocale>

int main(void)
{
    setlocale(LC_ALL, "Russian");

    double value = { 0.0 }; 
    std::cout << "Введите число:" << std::endl;
    std::cin >> value;
    std::cout << "Введённое число:" << std::endl;
    std::cout << value << "\n";

    return 0;
}