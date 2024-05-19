#include <iostream>
#include <cmath>

class Triangle 
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() 
    {
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            double s = (side1 + side2 + side3) / 2; 
            return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
        }
        else 
        {
            throw std::invalid_argument("Треугольник с данными длинами сторон не существует.");
        }
    }
};

int main() 
{
    setlocale(LC_ALL, "RUS");

    double s1, s2, s3;

    std::cout << "Введите длины сторон треугольника: ";
    std::cin >> s1 >> s2 >> s3;

    try 
    {
        Triangle triangle(s1, s2, s3);
        double area = triangle.calculateArea();
        std::cout << "Площадь треугольника: " << area << std::endl;
    }
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
