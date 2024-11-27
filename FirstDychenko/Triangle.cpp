#include "Triangle.h"
#include <string>
#include<iostream>

Triangle::Triangle(std::string n, int f, int s, int a) {

	name = n;
	firstSide = f;
	secondSide = s;
	thirdSide = sqrt(firstSide * firstSide + secondSide * secondSide - 2 * firstSide * secondSide * cos(angle));
	angle = a;
}

/// <summary>
/// Метод определяет вид треугольника
/// </summary>
/// <returns></returns>
std::string Triangle :: DefineType()
{
    if (firstSide == secondSide && secondSide == thirdSide) {
        return "Равносторонний";
    }

    if (
		firstSide == secondSide ||
		firstSide == thirdSide ||
		secondSide == thirdSide) {
        return "Равнобедренный";
    }

    return "Разносторонний";
}



std::string Triangle::to_string() {
	return name;

}



/// <summary>
/// Метод для расстояния между центрами вписанной и описанной окружности
/// </summary>
/// <returns></returns>
int Triangle::FindEiler() const
{
	int s = (firstSide + secondSide + thirdSide) / 2; // полупериметр окружности
	int S = sqrt(s * (s - firstSide) * (s - secondSide) * (s - thirdSide)); // площадь треугольника
	int r = S / s; // радиус вписанной окружности
	int R = s / 2; // радиус описанной окружности
	return pow(R, 2) - 2 * R * r; // расстояние между окружностями
}

int Triangle::GetAngle() const {

	return angle;
}

int Triangle::IncreaseAngle(int percent)
{
	if (percent + angle <= 180) {

	}
	else {
		this->angle += percent;
		return angle;
	}
}
