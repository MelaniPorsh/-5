#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
class Array 
{
private:
    T* arr;
    size_t size;

public:
    Array() : arr(nullptr), size(0) {}

    Array(size_t sz, const T& value = T()) : size(sz) 
    {
        arr = new T[size];
        std::fill(arr, arr + size, value);
    }

    ~Array() 
    {
        delete[] arr;
    }

    void resize(size_t newSize) 
    {
        T* newArr = new T[newSize];
        size_t minSize = (newSize < size) ? newSize : size;
        for (size_t i = 0; i < minSize; ++i) 
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
    }

    T& operator[](size_t index) 
    {
        if (index >= size) 
        {
            throw std::out_of_range("Index out of range.");
        }
        return arr[index];
    }

    friend std::ostream& operator<<(std::ostream& os, const Array& array) 
    {
        os << "[ ";
        for (size_t i = 0; i < array.size; ++i) 
        {
            os << array.arr[i] << " ";
        }
        os << "]";
        return os;
    }
};

int main() 
{
    Array<int> intArray(7, 8);
    std::cout << "Initial Array: " << intArray << std::endl;

    intArray[2] = 17;
    intArray.resize(9);
    intArray[8] = 25;

    std::cout << "Modified Array: " << intArray << std::endl;

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
