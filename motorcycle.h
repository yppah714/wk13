#pragma once
#include "car.h"
class Motor : public Car {
private:
	int spareWheels;
	int helmets;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};
