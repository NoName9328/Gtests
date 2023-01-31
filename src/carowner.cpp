#include "carowner.h"
#include <iostream>

CarOwner::CarOwner()
{
}

void CarOwner::setCarForOwner(CarBrand carBrand, CarBodyStyle CarBodyStyle)
{
    _ownerCar = new Car(carBrand, CarBodyStyle);
}

void CarOwner::setAmountCash(int amountCash)
{
}
