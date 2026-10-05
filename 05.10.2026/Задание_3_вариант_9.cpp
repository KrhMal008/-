// Задание №3, вариант 9
// Исходное выражение: 0,7(2c - 9k) - 4(0,25c - k)
// Упрощаем: 1,4c - 6,3k - c + 4k = 0,4c - 2,3k

#include <iostream>
#include <clocale>
using namespace std;

// Считает значение упрощённого выражения
double calculate(double c, double k)
{
    return 0.4 * c - 2.3 * k;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // Ввод коэффициентов
    double c, k;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите k: ";
    cin >> k;

    // Вычисление и вывод результата
    double result = calculate(c, k);
    cout << "Результат: " << result << endl;

    return 0;
}
