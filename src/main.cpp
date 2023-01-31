#include <iostream>

#include "sto.h"

#include <Windows.h>
#include <gtest/gtest.h>

void GoToXY(int column, int line)
{

    COORD coord{static_cast<SHORT>(line), static_cast<SHORT>(column)};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
}

void start()
{
    STO stoSercive;
    stoSercive.showPrice();
}

int main()
{
    int a;
    start();
    system("pause");
    return 0;
}
