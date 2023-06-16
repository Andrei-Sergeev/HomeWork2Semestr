/*
// 1 Задание
#include <iostream>
#include <vector>

void transformMatrix(std::vector<std::vector<int>>& matrix) {
    // Находим минимальный элемент в матрице
    int minElement = matrix[0][0];
    int minRowIndex = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRowIndex = i;
            }
        }
    }

    // Заменяем элементы строки с минимальным элементом на нули
    for (int j = 0; j < matrix[minRowIndex].size(); ++j) {
        matrix[minRowIndex][j] = 0;
    }
}

int main() {
    // Пример матрицы
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transformMatrix(matrix);

    // Вывод преобразованной матрицы
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


//5 задание
#include <iostream>
#include <vector>

void swapMinElement(std::vector<std::vector<int>>& matrix) {
    int size = matrix.size();

    for (int i = 0; i < size; ++i) {
        int minElement = matrix[i][0];
        int minIndex = 0;

        // Находим минимальный элемент в текущей строке
        for (int j = 1; j < size; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minIndex = j;
            }
        }

        // Переставляем минимальный элемент с элементом на главной диагонали
        std::swap(matrix[i][minIndex], matrix[i][i]);
    }
}

int main() {
    // Пример квадратной матрицы
    std::vector<std::vector<int>> matrix = {
        {4, 2, 3},
        {1, 5, 6},
        {7, 8, 9}
    };

    swapMinElement(matrix);

    // Вывод преобразованной матрицы
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//7 задание
#include <iostream>
#include <vector>

bool hasHurricane(const std::vector<std::vector<int>>& matrix) {
    int maxRainfallIndex = 0;
    int maxWindIndex = 0;

    // Находим индекс дня с максимальным количеством осадков (самый дождливый день)
    for (int i = 1; i < matrix[0].size(); ++i) {
        if (matrix[0][i] > matrix[0][maxRainfallIndex]) {
            maxRainfallIndex = i;
        }
    }

    // Находим индекс дня с максимальной силой ветра (самый сильный ветер)
    for (int i = 1; i < matrix[1].size(); ++i) {
        if (matrix[1][i] > matrix[1][maxWindIndex]) {
            maxWindIndex = i;
        }
    }

    // Проверяем, совпадают ли индексы
    return (maxRainfallIndex == maxWindIndex);
}

int main() {
    // Пример матрицы осадков и силы ветра
    std::vector<std::vector<int>> matrix = {
        {10, 20, 15, 5, 8},
        {50, 30, 45, 40, 60}
    };

    bool hasHurricaneFlag = hasHurricane(matrix);

    if (hasHurricaneFlag) {
        std::cout << "В эти дни был ураган." << std::endl;
    } else {
        std::cout << "В эти дни урагана не было." << std::endl;
    }

    return 0;
}

// Задине 9а
#include <iostream>
#include <vector>

struct Pixel {
    int red;
    int green;
    int blue;
};

int main() {
    int rows, columns;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов: ";
    std::cin >> columns;

    std::vector<std::vector<Pixel>> image(rows, std::vector<Pixel>(columns));

    // Заполнение матрицы данными с клавиатуры
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "Введите яркость каналов (красный, зеленый, синий) для пикселя [" << i << "][" << j << "]: ";
            std::cin >> image[i][j].red >> image[i][j].green >> image[i][j].blue;
        }
    }

    // Вывод матрицы на экран
    std::cout << "Матрица изображения:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "(" << image[i][j].red << ", " << image[i][j].green << ", " << image[i][j].blue << ") ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//Задание 10
#include <iostream>
#include <vector>
#include <cmath>

double calculateFrobeniusNorm(const std::vector<std::vector<double>>& matrix) {
    double norm = 0.0;
    int size = matrix.size();

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            norm += matrix[i][j] * matrix[i][j];
        }
    }

    norm = std::sqrt(norm);

    return norm;
}

double calculateMaxColumnNorm(const std::vector<std::vector<double>>& matrix) {
    double norm = 0.0;
    int size = matrix.size();

    for (int j = 0; j < size; ++j) {
        double columnSum = 0.0;
        for (int i = 0; i < size; ++i) {
            columnSum += std::abs(matrix[i][j]);
        }
        if (columnSum > norm) {
            norm = columnSum;
        }
    }

    return norm;
}

int main() {
    // Пример квадратной матрицы
    std::vector<std::vector<double>> matrix = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    double frobeniusNorm = calculateFrobeniusNorm(matrix);
    std::cout << "Норма Фробениуса: " << frobeniusNorm << std::endl;

    double maxColumnNorm = calculateMaxColumnNorm(matrix);
    std::cout << "Норма максимального столбца: " << maxColumnNorm << std::endl;

    return 0;
}
*/
