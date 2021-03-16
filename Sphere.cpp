#include "Sphere.h"
#include <iostream>

Sphere::Sphere() : radius(1.0) {}

Sphere::Sphere(double initRadius)
{
	(initRadius > 0) ? radius = initRadius : radius = 1.0;
}

void Sphere::resetRadius(double newRadius)
{
	(newRadius > 0) ? radius = newRadius : radius = 1.0;
}

double Sphere::getRadius()
{
	return this->radius;
}

double Sphere::getVolume()
{
	double rad3 = radius * radius * radius;

	return (4.0 * 3.14 * rad3) / 3.0;
}

void Sphere::showInfo()
{
	std::cout << "\nRadius = " << radius << "\n Volume = " << getVolume() << '\n';
}