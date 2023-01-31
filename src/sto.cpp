#include "sto.h"

#include <iostream>
#include <Windows.h>

void STO::showPrice()
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
   int a = 50;
   std::cout << a << "\t\t\t\t\t\tWelcome to STO dear client!" << std::endl
             << std::endl
             << "\t\tOur price:" << std::endl
             << std::endl
             << "\t\t\t  Car repair: "
             << std::endl
             << "\t\t\t\t  1 Engine repair: 10,000 UA "
             << std::endl
             << "\t\t\t\t  - "
             << std::endl
             << "\t\t\t  - "
             << std::endl
             << "\t\t\t  - "
             << std::endl
             << "\t\t\t  - "
             << std::endl
             << std::endl
             << std::endl
             << std::endl;
}
