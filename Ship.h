#ifndef SHIP_H_INCLUDED
#define SHIP_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

class Ship : public Car
 {
  protected:
  int displacement;
  public:
      Ship();
      Ship(int number_of_seats, int speed, char *brand, int displacement);
      ~Ship();
      Ship(Ship &s);
      void print() ;
 };
#endif // SHIP_H_INCLUDED
