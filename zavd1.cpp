#include <iostream>
#include <string>
using namespace std;

// Функція 1: Перевірка непарності числа
bool isOdd(int number) {
    return number % 2 != 0;
}

// Функція 2: Обчислення середнього арифметичного непарних чисел у масиві
double calculateAverageOfOdd(const int arr[], int size) {
    long long sumOfOdd = 0;
    int countOfOdd = 0;

    for (int i = 0; i < size; ++i) {
        if (isOdd(arr[i])) {
            sumOfOdd += arr[i];
            countOfOdd++;
        }
    }

    if (countOfOdd == 0) {
        // Уникнення ділення на нуль
        return 0.0;
    }

    // Обчислення середнього з приведенням типу до double
    return (double)sumOfOdd / countOfOdd;
}

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = {10, 5, 22, 1, 8, 3, 40, 7};

    cout << "Масив: {10, 5, 22, 1, 8, 3, 40, 7}" << endl;

    // Виклик функції для обчислення середнього
    double average = calculateAverageOfOdd(numbers, SIZE);

    // Виведення результату
    if (average != 0.0) {
        cout << "Середнє арифметичне непарних чисел: " << average << endl;
    } 
    else {
        cout << "Непарних чисел не знайдено." << endl;
    }

    return 0;
}