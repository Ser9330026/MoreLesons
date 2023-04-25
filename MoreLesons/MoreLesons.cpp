// MoreLesons.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include "Unctions.h"

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        arr[i] = rand() % (right - left) + left;
}



template <typename T>
void print_arr(T arr[], const int length) {
    std::cout << "[ ";
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b]\n";
}



int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;

    //Задача1. Выделение памяти под двумерный массив
    /*std::cout << "Введите количество рядов: ";
    std::cin >> n;

    std::cout << "Введите количество столбцов: ";
    std::cin >> m;

    int** mx;
    mx_memory(mx, n, m);
    std::cout << "Сгенерированный массив: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << mx[i][j] << '\t';
        std::cout << '\n';

    }
    clear_nx_memory(mx, n);
    std::cout << std::endl;*/

    //Задача 2. Объединение массивов

    //const int size2_1 = 5;
    //int arr2_1[size2_1];
    //fill_arr(arr2_1, size2_1, -10, 15);
    //print_arr(arr2_1, size2_1);


    //
    //const int size2_2 = 7;
    //int arr2_2[size2_2];
    //fill_arr(arr2_2, size2_2, -15, 10);
    //print_arr(arr2_2, size2_2);

    ////Итоговый массив
    //int size2_3{};
    //int* arr2_3 = positive_memory(arr2_1, size2_1, arr2_2, size2_2, size2_3);
    //print_arr(arr2_3, size2_3);
    //delete[] arr2_3;
    //std::cout << std::endl;

    //Задача 3. Название числа
    std::cout << "Задача 3.\n Введите двузначное число: ";
    std::cin >> n;

    if (number_name(n, "number.txt"))
        std::cout << "чИСЛО ЗАПИСАНО В ФАЙЛ";
    else
        std::cout << "Ошибка";



}
