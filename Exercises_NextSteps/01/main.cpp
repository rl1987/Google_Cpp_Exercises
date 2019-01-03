#include <iostream>
#include <cmath>

using namespace std;

bool is_perfect_square(long unsigned int x)
{
  double root = sqrt(x);

  return root == nearbyint(root);
}

int main(void)
{
  int n_found = 0;
  long unsigned int x = 0;
  long unsigned int i = 1;

  do {
    if (is_perfect_square(x)) {
      cout << x << " ! " << endl;
      n_found++;

      if (x > 1225)
        return 0;
    }

    x += i;
    i++;
    cout << "Trying " << x << endl;
  } while (n_found < 10);
}

