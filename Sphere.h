#pragma once

class Sphere {
public:
	Sphere();
	Sphere(double intRadius);
	void resetRadius(double newRadius);
	double getRadius();
	double getVolume();
	void showInfo();
protected:
	double radius;
};

