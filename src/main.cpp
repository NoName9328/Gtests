#include <iostream>

#include "utils.h"

#include <Windows.h>
#include <gtest/gtest.h>



void start()
{
    Utils::showPrice();
}

int main()
{
    int a;
    start();
    system("pause");
    return 0;
}
