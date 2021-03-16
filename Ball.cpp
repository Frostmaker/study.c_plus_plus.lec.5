#include "Ball.h"
#include <iostream>

Ball::Ball() : Sphere() {
	this->name = "NoName";
}

Ball::Ball(double initRadius, const std::string initName) : Sphere(initRadius), name(iniName) {}

std::string Ball::getName() { return name; }

void Ball::rename(const std::string newName)
{
	name = newName;
}

void Ball::resetBall(double newRadius, std::string newName)
{
	radius = newRadius;
	name = newName;
}

void Ball::showInfo()
{
	std::cout << "Ball type - " << name << ". Specification: ";
	Sphere::showInfo();
}

