#include "carowner.h"
#include <iostream>

CarOwner::CarOwner(std::string name, std::string _surname) : _name{name}, _surname{_surname}
{
}

void CarOwner::setCarForOwner(CarBrand carBrand, CarBodyStyle CarBodyStyle)
{
    _ownerCar = new Car(carBrand, CarBodyStyle);
}

void CarOwner::setAmountCash(int amountCash)
{
    _amountCash = amountCash;
}

const std::string CarOwner::getName() const 
{
    return _name;
}

const std::string CarOwner::getSurname() const 
{
    return _surname;
}