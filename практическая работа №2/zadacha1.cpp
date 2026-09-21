#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;


    a = a + b;  // a 5 b 6    a=11
    b = a - b;  // b 5
    a = a - b; // a 6

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
