#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    int A[10] = {1, 4, 9};
    int B[10] = {2, 3, 5, 10};

    // Заглушка в конце каждого массива, чтобы не проверять его конец
    A[a] = 1000000;
    B[b] = 1000000;

    int i = 0, j = 0;

    for (int k = 0; k < a + b; k++)
    {
        if (A[i] < B[j])
        {
            cout << A[i] << " ";
            i++;
        }
        else
        {
            cout << B[j] << " ";
            j++;
        }
    }

    return 0;
}
