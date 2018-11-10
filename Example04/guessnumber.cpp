#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int r;
  int guess = 0;

  srand(time(NULL));
  r = rand() % 100 + 1;

  do {
    cout << "What's your guess?" << endl;

    if (!(cin >> guess)) {
      cin.clear();
      cin.ignore();
      continue;
    }

    if (guess < r)
      cout << "Too low!" << endl;

    if (guess > r)
      cout << "Too high!" << endl;

  } while (guess != r);
  
  cout << "You gueessed it!" << endl;

  return 0;
}

