#include <iostream>
#include <list>
#include "Triangle.h"

typedef int секс;

int main()
{

    setlocale(LC_ALL, "rus");
    std::list<Triangle> list_of_triangles;//список треугольников
  a;
    int choose;//переменная для выбора
    std::string nameOfTriangle;//имя треугольника
    int a, b, angle;//параметры треугольника
    bool isCorrect = true;//переменная для жизни цикла
    int minichoose;
    //создание треугольника
    while (isCorrect)
    {
        try
        {
            std::cout << "Введите название треугольника: ";
            std::cin >> nameOfTriangle;
            std::cout << "Введите длину первой стороны: ";
            std::cin >> a;
            std::cout << "Введите длину второй стороны: ";
            std::cin >> b;
            std::cout << "Введите угол: ";
            std::cin >> angle;

            if (a <= 0 || b <= 0 || angle <= 0 || angle >= 180)
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Неправильные значения, введите все заново";
            }
            else
            {
                std::cout << "Готово!";
                Triangle tr = { nameOfTriangle, a, b, angle };
                list_of_triangles.push_front(tr);
                std::cout << "Хотите создать еще? 1 - да, 2 - вернуться в главное меню";
                std::cin >> minichoose;
                if (minichoose == 1)
                {
                    isCorrect = true;
                }
                else
                {
                    std::cin.clear();
                    isCorrect = false;
                }
            }
        }
        catch (const std::exception& e)
        {
            std::cerr << "Ошибка при создании треугольника: " << e.what() << std::endl;
            std::cout << "Повторите ввод данных:" << std::endl;
            std::cin.clear(); // Очищаем бит ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем оставшиеся символы
            continue;
        }
    }

    while (true) {

        std::cout << "Выберите:\t";
        std::cout << "0) Создать новый треугольник\t";
        std::cout << "1) Увеличить угол\t";
        std::cout << "2) Определить вид\t";
        std::cout << "3) Определить расстояние\t";
        std::cout << "4) Определить значения углов\t";
        std::cout << "5)Список треугольников\t";
        std::cin >> choose;


        switch (choose)
        {
        case 0:
            isCorrect = true;
            break;
        case 1:
            int ang;//мера увеличения
            std::cout << "На сколько вы хотите увеличить угол???";
            std::cin >> ang;
            list_of_triangles.front().IncreaseAngle(ang);
            std::cout << "Готово!\t";
            break;
        case 2:
            std::cout << list_of_triangles.front().DefineType();//определние вида треугольника
            break;
        case 3:
            std::cout << list_of_triangles.front().FindEiler();//вычисление расстояния
            break;
        case 4:
            std::cout << list_of_triangles.front().GetAngle() << std::endl;//получаем значение угла
            break;
        case 5:
            for (auto& triangle : list_of_triangles) {
                std::cout << list_of_triangles << std::endl;
                break;
            }

        default:
            std::cout << "Неверный выбор.\t";
            }

            секс i = 1;
        }

    }



