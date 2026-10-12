
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;


  for (; a > b ; ) {
    if (a % 2 == 0 && a / 2 >= b) {
      a = a / 2;
      cout << ":2" << endl;
    } else {
      a = a - 1;
      cout << "-1" << endl;
    }
  }



  /*
  while ( a > b ) {
      if (a % 2 == 0 && a / 2 >= b) {
          a = a / 2;
          cout << ":2" << endl;
      } else {
          a = a - 1;
          cout << "-1" << endl;
      }
  }
  */


  /*
  do {
      if (a % 2 == 0 && a / 2 >= b) {
          a = a / 2;
          cout << ":2" << endl;
      } else {
          a = a - 1;
          cout << "-1" << endl;
      }
  } while (a > b);
  */


  /*
  for (;;) {
      if (a == b) break;
      if (a % 2 == 0 && a / 2 >= b) {
          a = a / 2;
          cout << ":2" << endl;
      } else {
          a = a - 1;
          cout << "-1" << endl;
      }
  }
  */



  // while (true) {
  //   if (a == b) break;
  //   if (a % 2 == 0 && a / 2 >= b) {
  //     a = a / 2;
  //     cout << ":2" << endl;
  //   } else {
  //     a = a - 1;
  //     cout << "-1" << endl;
  //   }
  // }

  return 0;

}
