#include "icar.h"

ICar::ICar(CarBrand carBrand, CarBodyStyle CarBodyStyle)
    : _carBrand(carBrand), _carBrandStyle(CarBodyStyle)
{
}

ICar::~ICar() = default;

void ICar::setFullNameType(std::string name) { _fullNameType = name; }

const int ICar::getMaxSpeed() const { return _maxSpeed; }

const std::string ICar::getFullNameType() const { return _fullNameType; }

void ICar::setColorCar(Color color) { _carColor = color; }

void ICar::setMaxSpeed(int maxSpeed) { _maxSpeed = maxSpeed; }
