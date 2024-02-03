#include <iostream>
#include "Pract5.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int day, month, year;
    std::cout << "Введите год\n";
    std::cin >> year;
    std::cout << "Введите месяц\n";
    std::cin >> month;
    std::cout << "Введите день\n";
    std::cin >> day;

    Date date = setDate(day,month,year);


    std::cout << isToday(day,month,year)<<std::endl;
    std::cout << isToday(day, month) << std::endl;
    std::cout << isToday(date) << std::endl;
}
