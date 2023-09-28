#include <iostream>
int a ;
int b ;
int ans ;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число : ";
    std::cin >> a ;
    std::cout << "Введите второе число : ";
    std::cin >> b ;
    std::cout << "Введите их сумму : ";
    std::cin >> ans;

    if (a + b == ans){
        std::cout << "Ответ верный";
    }
    else {
        std::cout << "Ответ не верный";
    }
}