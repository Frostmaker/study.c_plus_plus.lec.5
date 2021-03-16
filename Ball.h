#pragma once
#include "Sphere.h"
#include <string>


class Ball : public Sphere {
public:
	Ball();
	Ball(double intRadius, const std::string initName);
	std::string getName();
	void rename(const std::string newName);
	void resetBall(double newRadius);
	void showInfo();
private:
	std::string name;
};