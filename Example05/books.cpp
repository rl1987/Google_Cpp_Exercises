#include <iostream>

using namespace std;

int main() {
  // There are 6 choices for first book position.
  // For each of these choices, we have 5 choices for 2nd position.
  // ...
  // For the 6th book position, there is one remaining book.

  int n = 6 * 5 * 4 * 3 * 2 * 1;

  cout << n << endl;

  return 0;
}

