#pragma once

#include "icar.h"
#include "car.h"

#include <string>

class CarOwner
{
public:
  CarOwner(std::string name, std::string _surname);

  void setAmountCash(int amountCash);
  void setCarForOwner(CarBrand carBrand, CarBodyStyle CarBodyStyle);

  const Car *getOwnerCar() const;
  const float getAmountCash() const;
  const std::string getName() const;
  const std::string getSurname() const;



private:
  float _amountCash;
  Car *_ownerCar{nullptr};
  std::string _name{"unknow"};
  std::string _surname{"unknow"};
};
