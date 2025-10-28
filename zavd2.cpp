#include <iostream>
#include <cmath> 
using namespace std;

// Функція 1: Обчислює k-й член ряду
double calculateSummand(double x, int k) {
    // Чисельник
    double numerator = log(x + 1.0);

    // Знаменник
    double denominator = pow(x + k, k);
    return numerator / denominator;
}

// Функція 2: Обчислює суму ряду від k=1 до N
double calculateSeriesSum(double x, int N) {
    if (x <= -1.0) {
        cout << "Помилка: x має бути більше за -1!" << endl;
    }
    double totalSum = 0.0;
    // Цикл підсумовування
    for (int k = 1; k <= N; ++k) {
        // Додаємо k-й член, обчислений першою функцією
        totalSum += calculateSummand(x, k);
    }
    return totalSum;
}

int main() {
    double x_value;
    const int N_MAX = 9;

    cout << "Введіть значення x (має бути > -1): ";
    cin >> x_value;

    double result = calculateSeriesSum(x_value, N_MAX);

    cout << "Сума ряду S для x = " << x_value << " (N=9): " << result << endl;

    return 0;
}
