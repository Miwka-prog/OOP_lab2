#include<iostream>
#include <iomanip>
#include <string>
#include "Circle.h"
using namespace std;
void Table(string name,float radius,float square,float coordinateX,float coordinateY,int index) {
	if (index == 0) {
		cout << "------------------------------------------------------------------" << endl;
		cout << "|  Name  | Radius |  Square  |    CoordinateX    |  CoordinateY  |" << endl;
		cout << "------------------------------------------------------------------" << endl;
	}
	cout << "|  " << name << setw(3) << "|";
	cout << setw(5)  << radius << setw(4) << "|";
	cout << setw(6) << square << setw(5) << "|";
	cout << setw(10) << coordinateX << setw(10) << "|";
	cout << setw(9) << coordinateY << setw(7) << "|" << endl;
	cout << "------------------------------------------------------------------" << endl;
}
int main() {
	int amountCircle = 3;
	string name_;
	float radius_;
	float centrX_;
	float centrY_;
	int ask = 0;
	Circle circle;
	Circle circle1;
	Circle circle2;
	while (ask != 3) {
		cout << "Input data - 1" << endl;
		cout << "Output data - 2" << endl;
		cout << "Exit - 3" << endl;
		cin >> ask;
		while (ask > 3 || ask < 1) {
			cout << "Try again. You must enter 1, 2 or 3!\nInput data - 1; Output data - 2; Exit - 3 - 3;\n";
			cin >> ask;
		}
		switch (ask) {
			case 1:
				cout << "Input a name of circle" << endl;
				cin >> name_;
				circle.setCircleName(name_);
				cout << "Input a radius of circle" << endl;
				cin >> radius_;
				circle.setCircleRadius(radius_);
				cout << "Input a centr X of circle" << endl;
				cin >> centrX_;
				circle.setCircleCentrX(centrX_);
				cout << "Input a centr Y of circle" << endl;
				cin >> centrY_;
				circle.setCircleCentrY(centrY_);
				circle.calculateSquare();

				cout << endl;
				cout << "Input a name of second circle" << endl;
				cin >> name_;
				circle1.setCircleName(name_);
				cout << "Input a radius of second circle" << endl;
				cin >> radius_;
				circle1.setCircleRadius(radius_);
				cout << "Input a centr X of second circle" << endl;
				cin >> centrX_;
				circle1.setCircleCentrX(centrX_);
				cout << "Input a centr Y of second circle" << endl;
				cin >> centrY_;
				circle1.setCircleCentrY(centrY_);
				circle1.calculateSquare();

				cout << endl;
				cout << "Input a name of third circle" << endl;
				cin >> name_;
				circle2.setCircleName(name_);
				cout << "Input a radius of third circle" << endl;
				cin >> radius_;
				circle2.setCircleRadius(radius_);
				cout << "Input a centr X of third circle" << endl;
				cin >> centrX_;
				circle2.setCircleCentrX(centrX_);
				cout << "Input a centr Y of third circle" << endl;
				cin >> centrY_;
				circle2.setCircleCentrY(centrY_);
				circle2.calculateSquare();
				break;
			case 2:
				Table(circle.getCircleName(),circle.getCircleRadius(),circle.getCircleSquare(),circle.getCircleCentrX(),circle.getCircleCentrY(),0);
				Table(circle1.getCircleName(), circle1.getCircleRadius(), circle1.getCircleSquare(), circle1.getCircleCentrX(), circle1.getCircleCentrY(), 1);
				Table(circle2.getCircleName(), circle2.getCircleRadius(), circle2.getCircleSquare(), circle2.getCircleCentrX(), circle2.getCircleCentrY(), 2);
				break;
			case 3:
				return 0;
				break;
		}
	}
	return 0;
}