#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];

    cout << "Введите n: ";
    cin >> n;

    cout << "Введите " << n << " чисел от 0 до " << n << " (одно пропущено): ";

    int sum = 0;

    // Читаем числа и сразу считаем их сумму в одном цикле
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    // Сумма всех чисел от 0 до n
    int fullSum = n * (n + 1) / 2;

    // Недостающее число = полная сумма минус сумма массива
    int j = fullSum - sum;

    cout << "Недостающее число: " << j << endl;

    return 0;
}
