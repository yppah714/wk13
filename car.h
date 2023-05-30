#pragma once
#include <iostream>
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	void setPrice(float);
	float getPrice();
	float speed;
	virtual void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	virtual void klaxon(int);

	Car& operator=(const Car&);
	Car& operator+(const Car&);
	friend std::ostream& operator<<(std::ostream&, const Car&); // friend??

	friend class Engineer;

protected:
	float price;
	void speedUp(float);
	void speedDown(float);
};
