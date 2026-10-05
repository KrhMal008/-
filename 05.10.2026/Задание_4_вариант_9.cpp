// Задание №4, вариант 9
// Символ I - вывести фамилию и имя на английском
// Символ l - найти корни многочлена ax^2 + bx + c
// Символ c - проверить, попадает ли день года в лето (с 1 июня по 31 августа)

#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

// Выводит фамилию и имя студента
void printName()
{
    cout << "Kistanov Ilya" << endl;
}

// Находит и выводит корни многочлена ax^2 + bx + c
void printRoots(double a, double b, double c)
{
    // Если a = 0, это уже не квадратное уравнение
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "x - любое число" << endl;
            else
                cout << "Корней нет" << endl;
        }
        else
        {
            cout << "x = " << -c / b << endl;
        }
        return;
    }

    // Обычное квадратное уравнение, считаем дискриминант
    double d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << "Корней нет" << endl;
    }
    else if (d == 0)
    {
        cout << "x = " << -b / (2 * a) << endl;
    }
    else
    {
        cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
    }
}

// Спрашивает номер дня и проверяет, лето это или нет
// Год не високосный: 1 июня - 152-й день, 31 августа - 243-й день
void checkSummer()
{
    int day;
    cout << "Введите номер дня (1-365): ";
    cin >> day;

    if (day < 1 || day > 365)
        cout << "Такого дня нет" << endl;
    else if (day >= 152 && day <= 243)
        cout << "Дата попадает в лето" << endl;
    else
        cout << "Дата не попадает в лето" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // Ввод коэффициентов
    double a, b, c;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    // Ввод символа
    char symbol;
    cout << "Введите символ: ";
    cin >> symbol;

    // Выбор действия по символу
    if (symbol == 'I')
        printName();
    else if (symbol == 'l')
        printRoots(a, b, c);
    else if (symbol == 'c')
        checkSummer();
    else
        cout << "Неизвестный символ" << endl;

    return 0;
}
