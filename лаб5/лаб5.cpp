﻿#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <random>

template <typename T>
void sortArray(T* arr, int size)
{
    std::sort(arr, arr + size);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    const int SIZE = 10;
    int intArray[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        intArray[i] = rand() % 100; 
    }


    std::cout << "Исходный массив:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n";

    
    sortArray(intArray, SIZE);

    
    std::cout << "Отсортированный массив:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n";

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
