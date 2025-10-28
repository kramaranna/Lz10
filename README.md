# Lz10
# Лабораторне заняття 10
## 🧩 Завдання  
<img width="1496" height="228" alt="Знімок екрана 2025-10-28 о 12 45 27" src="https://github.com/user-attachments/assets/e416df1f-8c9c-435b-b775-21526ba07183" />
<img width="706" height="42" alt="Знімок екрана 2025-10-28 о 12 45 29" src="https://github.com/user-attachments/assets/ee6106d1-e879-4d82-b7a7-aea246d9e3fd" />
### Блок схема 1  
<img width="1154" height="586" alt="image" src="https://github.com/user-attachments/assets/6b1a73e6-8667-4a61-969d-3ed67b98ff01" />
<img width="848" height="762" alt="image" src="https://github.com/user-attachments/assets/8dd56de3-4b13-48b2-8bf1-fd689bfb4c31" />

<img width="1246" height="172" alt="Знімок екрана 2025-10-28 о 12 46 00" src="https://github.com/user-attachments/assets/fe9b077c-5d3e-49a2-a5a2-aa04e0d03846" />
<img width="418" height="114" alt="Знімок екрана 2025-10-28 о 12 46 09" src="https://github.com/user-attachments/assets/6c98e502-d50d-46e2-be24-31464864da34" />
### Блок схема 2
<img width="877" height="703" alt="image" src="https://github.com/user-attachments/assets/85b93ef0-244b-4c77-b541-15fc530928df" />
<img width="557" height="736" alt="image" src="https://github.com/user-attachments/assets/40972ecf-cb13-43e8-b49d-f9602e3a81e1" />

## 🧠🧩 Опис алгоритму  
## 🧩 Завдання  1
Цей алгоритм обчислює середнє арифметичне лише непарних чисел у заданому масиві. Допоміжна функція isOdd перевіряє непарність, а головна функція calculateAverageOfOdd циклічно проходить масив, підсумовує та підраховує лише непарні елементи, після чого ділить суму на кількість.
## 🧩 Завдання  2
Алгоритм використовує дві функції для обчислення скінченної суми ряду, де верхня межа N=9. Допоміжна функція calculateSummand обчислює значення кожного окремого члена ряду а допомогою натурального логарифма і піднесення до степеня. Головна функція calculateSeriesSum циклічно викликає calculateSummand для k від 1 до N, накопичуючи загальну суму.
## 💻 Код  
## 🧩 Завдання  1
```
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
```
## 🧩 Завдання  2
```
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
```

## 📊 Приклад виконання  
## 🧩 Завдання  1
<img width="1148" height="724" alt="image" src="https://github.com/user-attachments/assets/050d7904-c0c1-4162-a390-ba3e17c6da49" />

## 🧩 Завдання  2
<img width="1124" height="748" alt="image" src="https://github.com/user-attachments/assets/309a6f9e-ed0e-4dd3-af0a-056ef77fb9b3" />

## 📝 Висновок  

## ✅ **Файл `checklist.md`**

``` markdown
# ✅ Чек-лист знань
**Тема:** Функції в C++

---

### 🧠 Теоретичні знання
[ + ] Знаю, що таке функція та її основні елементи (назва, параметри, тип, тіло).  
[ + ] Розумію різницю між оголошенням і визначенням функції.  
[ + ] Знаю, що таке параметри функції та як вони передаються.  
[ + ] Можу пояснити, як функція повертає значення оператором `return`.  
---

### 🧩 Практичні навички
[ + ] У коді є хоча б одна користувацька функція.  
[ + ] Функція приймає параметри та повертає результат.  
[ + ] Програма працює без помилок і має приклад виконання.  
[ + ] Код містить коментарі та оформлений читабельно.  
[ + ] Додано блок-схему алгоритму.  
---

### 🧰 Робота з GitHub / Gist
[ + ] Є всі необхідні файли: `main.cpp`, `README.md`, `checklist.md`.  
[ + ] `README.md` містить завдання, опис алгоритму, приклад виконання, блок-схему та висновок.  
[ + ] Репозиторій або Gist має зрозумілу назву (наприклад, `lab-functions`) і чітку структуру.  
---

### 🧩 Самооцінка
[ + ] Можу пояснити, як саме працює моя функція.  
[ + ] Розумію, у яких задачах доцільно використовувати функції.  
[ + ] Знаю, як можна вдосконалити свою програму (додати ще функції, параметри тощо).  
[ + ] Готовий(а) продемонструвати роботу програми під час захисту.
```
