#include <iostream>
using namespace std;
#include "car.h"
#include "SUV.h"
#include "engineer.h"

int main() {
	/*
	Car* newSUV = new SUV();
	cout << "with virtual \n";
	newSUV->speedChange(1.0);
	cout << newSUV->speed << endl;
	*/

	/*
	Car* myCar = new Car(0.1, 4, 10000);
	Car usedCar = *myCar;
	cout << usedCar << endl;
	*/

	Car* A = new Car(30, 4, 10000);
	Car* B = new Car(50, 4, 20000);
	Car C = *A + *B;
	cout << C << endl;
}