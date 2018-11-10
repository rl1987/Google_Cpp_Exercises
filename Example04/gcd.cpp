#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int n1, int n2)
{
#if 0
  int tmp;
  while (n2 != 0) {
    tmp = n2;
    n2 = n1 % n2;
    n1 = tmp;
  }

  return n1;
#endif

  if (n2 == 0)
    return n1;

  return gcd(n2, n1 % n2);
}

int main(int argc, char **argv ) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " N1 N2" << endl;
    return -1;
  }

  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);

  cout << gcd(n1, n2) << endl;

  return 0;
}

