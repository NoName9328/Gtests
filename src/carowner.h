#pragma once

#include "icar.h"
#include "car.h"

class CarOwner
{
public:
  CarOwner();

  void setCarForOwner(CarBrand carBrand, CarBodyStyle CarBodyStyle);
  void setAmountCash(int amountCash);

private:
  Car *_ownerCar;
  float _amountCash;
};
