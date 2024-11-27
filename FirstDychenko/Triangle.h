#include <string>
#include <math.h>

class Triangle
{
private:
	int firstSide;
	int secondSide;
	int thirdSide;
	int angle;
	enum type {
		Равносторонний = 1,
		Равнобедренный = 2,
		Разносторонний = 3
	};

public:
	std::string name;
	Triangle(std::string n, int f, int s, int a);

	/// <summary>
	/// Метод определяет вид треугольника
	/// </summary>
	/// <returns></returns>
	std::string DefineType();


	/// <summary>
	/// Метод для расстояния между центрами вписанной и описанной окружности
	/// </summary>
	/// <returns></returns>
	int FindEiler() const;

	std::string to_string();

	int GetAngle() const;
	int IncreaseAngle(int percent);
};

