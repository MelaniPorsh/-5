#include <iostream>
#include <vector>
#include <string>

struct Employee 
{
    std::string name;
    int age;
    int salary;
};

int main() 
{
    setlocale(LC_ALL, "RUS");

    std::vector<Employee> employees = {
        {"Jaime", 23, 1500},
        {"Missandei", 25, 3000},
        {"Jorah", 35, 5000},
        {"Ygritte", 28, 4000},
        {"Catelyn", 30, 4500}
    };

    int minSalary = 4000;

    auto filterBySalary = [minSalary](const std::vector<Employee>& input) 
        {
        std::vector<Employee> filteredEmployees;
        for (const Employee& emp : input) {
            if (emp.salary > minSalary) {
                filteredEmployees.push_back(emp);
            }
        }
        return filteredEmployees;
        };

    std::vector<Employee> highPaidEmployees = filterBySalary(employees);

    std::cout << "Сотрудники с зарплатой выше " << minSalary << ":" << std::endl;
    for (const Employee& emp : highPaidEmployees) 
    {
        std::cout << "Имя: " << emp.name << ", Возраст: " << emp.age << ", Зарплата: " << emp.salary << std::endl;
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
