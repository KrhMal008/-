#include<iostream>
using namespace std;
// ==============1=====================



// double power(double a, int n) {
//   if (n == 0)
//     return 1;
//   if (n % 2 == 0) {
//     double half = power(a, n / 2);
//     return half * half;
//   }
//   return a * power(a, n - 1);
// }
//
// int main() {
//   long double a;
//   long long n;
//   cin >> a >> n;
//   cout << power(a, n);
//   return 0;
// }

// ==============2.1=====================


// long long sbros(long long a, long long b) {
//   if (a == b)
//     return a;
//   if (a % 2 == 0 && b % 2 == 0)
//     return 2 * sbros(a / 2, b / 2);
//   if (a % 2 == 0)
//     return sbros(a / 2, b);
//   if (b % 2 == 0)
//     return sbros(a, b / 2);
//   if (a > b)
//     return sbros((a - b) / 2, b);
//   return sbros((b - a) / 2, a);
// }
//
// int main() {
//   long long a, b;
//   cin >> a >> b;
//   cout << sbros(a, b);
//   return 0;
// }


// ==============2.2=====================

// long long sbros(long long a, long long b) {
//   if (a < b)
//     return sbros(b, a);
//   if (a % b == 0)
//     return b;
//   return sbros(b, a % b);
// }
//
// int main() {
//   long long a, b;
//   cin >> a >> b;
//   cout << sbros(a, b);
//   return 0;
// }

// ===============3=========================

// void f(int n, int otkuda, int kuda, int zapas) {
//   if (n == 0) return;
//
//   f(n - 1, otkuda, zapas, kuda);
//   cout << "Ingredient " << n << " move from " << otkuda << " to " << kuda << endl;
//   f(n - 1, zapas, kuda, otkuda);
// }
//
// int main() {
//   int n;
//   cin >> n;
//   f(n, 1, 3, 2);
// }

