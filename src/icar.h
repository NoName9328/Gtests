#pragma once

#include <string>

enum class CarBrand
{
  Undefined = -1,
  Audi,
  Opel,
  Fiat,
  Chevrilet
};

enum class CarBodyStyle
{
  Undefined = -1,
  SEDAN,
  COUPE,
  HATCHBACK,
  CONVERTIBLE,
  MINIVAN
};

enum class Color
{
  Undefined = -1,
  Green,
  Black,
  Gray,
  Blue,
  Yellow,
  White
};

class ICar
{
public:
  ICar(CarBrand carBrand, CarBodyStyle CarBodyStyle);
  ~ICar();

  const int getMaxSpeed() const;
  const std::string getFullNameType() const;

  void setColorCar(Color color);
  void setMaxSpeed(int maxSpeed);

  virtual void setFullNameType(std::string name);

private:
  int _maxSpeed{0};
  Color _carColor{Color::Undefined};
  std::string _fullNameType{"unknow"};
  CarBrand _carBrand{CarBrand::Undefined};
  CarBodyStyle _carBrandStyle{CarBodyStyle::Undefined};
};
