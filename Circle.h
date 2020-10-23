#ifndef CIRCLE_H
#define CIRCLE_H
using namespace std;
class Circle
{

private:
	string name;
	float radius;
	float centrX;
	float centrY;
	float square;
public:
	~Circle();
	string getCircleName();
	float getCircleRadius();
	float getCircleCentrY();
	float getCircleCentrX();
	float getCircleSquare();
	void setCircleName(string _name);
	void setCircleRadius(float _radius);
	void setCircleCentrY(float _centrY);
	void setCircleCentrX(float _centrX);
	void calculateSquare();
private:
	bool checkCircleName();
	bool checkCircleRadius();
	bool checkCircleCentrY();
	bool checkCircleCentrX();
	bool checkCircleSquare();
};
#endif

