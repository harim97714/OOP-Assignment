#include <iostream>
#include "Circle.h"
#define PI 3.14
using namespace std;
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	int s = radius*radius*PI;
	return s;
}