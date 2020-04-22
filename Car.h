#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
 {
     protected:
     char *brand;
     public:
      Car();
      Car(int number_of_seats, int speed, char *brand);
      ~Car();
      Car(Car &c);
     virtual void print() =0;
 };

#endif // CAR_H_INCLUDED
