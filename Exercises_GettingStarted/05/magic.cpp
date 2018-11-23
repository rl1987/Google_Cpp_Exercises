#include <iostream>

using namespace std;

int readNumber() {
   int x = 0;

   cin >> x;
   if (!cin.good())
     return -1;

   if (!(x >= 100 && x <= 999))
      return -2;

   return x;
}

int reverseNumber(int x) {
  int digit1 = x / 100;
  x -= digit1 * 100;
  int digit2 = x / 10;
  x -= digit2 * 10;
  int digit3 = x;

  return digit3 * 100 + digit2 * 10 + digit1;
}

int main() {
  cout << "input number: ";
  int x = readNumber();
  if (x < 0)
    return -1;

  int reversedX = reverseNumber(x);

  cout << "reverse it: " << reversedX << endl;

  int subtracted = x - reversedX;

  cout << "subtract it: " << x << " - " << reversedX << " = " << subtracted << endl;

  int reversed2 = reverseNumber(subtracted);

  cout << "reverse it: " << reversed2 << endl;

  int added = subtracted + reversed2;

  cout << "add: " << subtracted << " + " << reversed2 << " = " << added << endl;
}


