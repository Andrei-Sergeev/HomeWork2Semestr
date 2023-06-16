/*
//Задание 1(float)
#include <iostream>

int main() {
    float var1 = 5.0;
    float var2 = 2.0;

    float* ptr1 = &var1;
    float* ptr2 = &var2;

    float sum = *ptr1 + *ptr2;
    float diff = *ptr1 - *ptr2;

    std::cout << "Адрес указателя ptr1: " << ptr1 << std::endl;
    std::cout << "Адрес указателя ptr2: " << ptr2 << std::endl;

    return 0;
}

//Задание 2(float)
#include <iostream>

void swapValues(float* ptr1, float* ptr2) {
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    float var1 = 5.0;
    float var2 = 2.0;

    float* ptr1 = &var1;
    float* ptr2 = &var2;

    std::cout << "Адрес указателя ptr1: " << ptr1 << std::endl;
    std::cout << "Адрес указателя ptr2: " << ptr2 << std::endl;

    std::cout << "Исходные значения переменных:" << std::endl;
    std::cout << "var1: " << var1 << std::endl;
    std::cout << "var2: " << var2 << std::endl;

    swapValues(ptr1, ptr2);

    std::cout << "Значения переменных после обмена:" << std::endl;
    std::cout << "var1: " << var1 << std::endl;
    std::cout << "var2: " << var2 << std::endl;

    return 0;
}

//Задание 3(float)
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    // Выделение динамического массива
    float* arr = new float[size];

    // Инициализация генератора случайных чисел
    std::srand(std::time(nullptr));

    // Заполнение массива случайными числами
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<float>(std::rand()) / RAND_MAX;
    }

    // Вывод адресов и значений элементов массива
    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Адрес: " << &arr[i] << " Значение: " << arr[i] << std::endl;
    }

    // Освобождение памяти, занимаемой массивом
    delete[] arr;

    return 0;
}

//Задание 4а
#include <iostream>
#include <string>

struct Car {
    std::string brand;
    std::string model;
    int year;
};

void modifyCar(Car* car, const std::string& newBrand, const std::string& newModel, int newYear) {
    car->brand = newBrand;
    car->model = newModel;
    car->year = newYear;
}

int main() {
    int size;

    std::cout << "Введите размер массива автомобилей: ";
    std::cin >> size;

    Car* cars = new Car[size];

    // Заполнение массива автомобилей
    for (int i = 0; i < size; ++i) {
        std::cout << "Введите данные для автомобиля " << i+1 << ":" << std::endl;

        std::cout << "Марка: ";
        std::cin >> cars[i].brand;

        std::cout << "Модель: ";
        std::cin >> cars[i].model;

        std::cout << "Год выпуска: ";
        std::cin >> cars[i].year;
    }

    // Изменение значений элемента массива
    int index;
    std::cout << "Введите индекс элемента, который нужно изменить: ";
    std::cin >> index;

    if (index >= 0 && index < size) {
        std::string newBrand, newModel;
        int newYear;

        std::cout << "Введите новые данные для автомобиля " << index+1 << ":" << std::endl;

        std::cout << "Новая марка: ";
        std::cin >> newBrand;

        std::cout << "Новая модель: ";
        std::cin >> newModel;

        std::cout << "Новый год выпуска: ";
        std::cin >> newYear;

        modifyCar(&cars[index], newBrand, newModel, newYear);
    } else {
        std::cout << "Некорректный индекс элемента." << std::endl;
    }

    // Вывод данных об автомобилях
    std::cout << "Данные об автомобилях:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Автомобиль " << i+1 << ":" << std::endl;
        std::cout << "Марка: " << cars[i].brand << std::endl;
        std::cout << "Модель: " << cars[i].model << std::endl;
        std::cout << "Год выпуска: " << cars[i].year << std::endl;
        std::cout << std::endl;
    }

    // Освобождение памяти, занимаемой массивом автомобилей
    delete[] cars;

    return 0;
}
*/
