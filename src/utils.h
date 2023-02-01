#pragma once

#include <iostream>
#include <Windows.h>

namespace Utils
{
    void showPrice()
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        std::cout << "\t\t\t\t\t\tWelcome to STO dear client!" << std::endl
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

    void GoToXY(int column, int line)
    {
        COORD coord{static_cast<SHORT>(line), static_cast<SHORT>(column)};

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    }

}