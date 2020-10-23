#include "Circle.h"
#include <string>
#include <iostream>
using namespace std;

Circle::~Circle()
{
	cout << "Circle destructor was called for " << name << endl;
}

string Circle::getCircleName()
{
	return name;
}

float Circle::getCircleRadius()
{
	return radius;
}

float Circle::getCircleCentrY()
{
	return centrY;
}

float Circle::getCircleCentrX()
{
	return centrX;
}

float Circle::getCircleSquare()
{
	return square;
}

void Circle::setCircleName(string _name)
{
	name = _name;
	if (!checkCircleName()) {
		exit(1); 
	}
}

void Circle::setCircleRadius(float _radius)
{
	radius = _radius;
	if (!checkCircleRadius()) {
		exit(1);
	}
}

void Circle::setCircleCentrY(float _centrY)
{
	centrY = _centrY;
	if (!checkCircleCentrY()) {
		exit(1);
	}
}

void Circle::setCircleCentrX(float _centrX)
{
	centrX = _centrX;
	if (!checkCircleCentrX()) {
		exit(1);
	}
}

void Circle::calculateSquare()
{
	square = 3.14 * (radius*radius);
	if (!checkCircleSquare()) {
		exit(1);
	}
}


bool Circle::checkCircleName()
{
	if (name.length() < 1) {
		cout << "Wrong name of circle" << endl;
		return false;
	}
	return true;
}

bool Circle::checkCircleRadius()
{
	if (radius < 0) {
		cout << "Radius can't be negative " << endl;
		return false;
	}
	return true;
}

bool Circle::checkCircleCentrY()
{
	if (radius < 0) {
		cout << "If radius negative - coordinate Y not correct" << endl;
		return false;
	}
	return true;
}

bool Circle::checkCircleCentrX()
{
	if (radius < 0) {
		cout << "If radius negative - coordinate X not correct" << endl;
		return false;
	}
	return true;
}

bool Circle::checkCircleSquare()
{
	if (square < 0) {
		cout << "Square can't be negative " << endl;
		return false;
	}
	return true;
}
